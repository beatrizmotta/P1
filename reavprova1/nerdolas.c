#include <stdio.h>

void batalha(int pc1, double pa1, double pv1, int pc2, double pa2, double pv2, int pc3, double pa3, double pv3, int tc1, double ta1, double tv1, int tc2, double ta2, double tv2, int tc3, double ta3, double tv3) {
    int vitorias_p = 0; 
    int vitorias_t = 0;
    // Rodada 1 

        if (pc1 == 1) {
            if (tc1 == 3) {
                pv1 = pv1 + (pv1 * 0.3);
            } else if (tc1 == 2) {
                tv1 = tv1 + (tv1 * 0.15);
                ta1 = ta1 + (ta1 * 0.15);
            } else {
                pv1 = pv1;
                tv1 = tv1;
                pa1 = pa1;
                ta1 = ta1;
            }
        } else if (pc1 == 2) {
            if (tc1 == 3) {
                ta1 = ta1 + (ta1 * 0.25);
            } else if (tc3 == 1) {
                pv1 = pv1 + (pv1 * 0.15);
                pa1 = pa1 + (pa1 * 0.15);
            } else {
                pv1 = pv1;
                tv1 = tv1;
                pa1 = pa1;
                ta1 = ta1;
            }
        } else if (pc1 == 3) {
            if (tc1 == 1) {
                ta1 = ta1 + (ta1 * 0.3);
            } else if (tc1 == 2) {
                pa1 = pa1 + (pa1 * 0.25);
            } else {
                pv1 = pv1;
                tv1 = tv1;
                pa1 = pa1;
                ta1 = ta1;
            }
        }
    // Quem ataca primeiro � quem tem menos vida OU Pedro\n se iguais
    if (pv1 < tv1 || pv1 == tv1) {

        tv1 = tv1 - pa1;
        if (tv1 <= 0) {
            printf("Rodada1: Pedro\n");
            vitorias_p++;
        } else {
            pv1 = pv1 - ta1;
            if (pv1 <= 0) {
                printf("Rodada1: Tulio\n");
                vitorias_t++;
            } else if (tv1 > 0 && pv1 > 0) {
                if (pv1 > tv1) {
                    printf("Rodada1: Pedro\n");
                    vitorias_p++;
                } else if (tv1 > pv1) {
                    printf("Rodada1: Tulio\n");
                    vitorias_t++;
                } else if (pv1 == tv1) {
                    if (pa1 > ta1) {
                        printf("Rodada1: Pedro\n");
                        vitorias_p++;
                    } else if (ta1 > pa1) {
                        printf("Rodada1: Tulio\n");
                        vitorias_t++;
                    }
                }


            }

        }

    } else if (tv1 < pv1) {

        pv1 = pv1 - ta1;
        if (pv1 <= 0) {
            printf("Rodada1: Tulio\n");
            vitorias_t++;
        } else {
            tv1 = tv1 - pa1;
            if (tv1 <= 0) {
                printf("Rodada1: Pedro\n");
                vitorias_p++;
            } else if (tv1 > 0 && pv1 > 0) {
                if (pv1 > tv1) {
                    printf("Rodada1: Pedro\n");
                    vitorias_p++;
                } else if (tv1 > pv1) {
                    printf("Rodada1: Tulio\n");
                    vitorias_t++;
                } else if (pv1 == tv1) {
                    if (pa1 > ta1) {
                        printf("Rodada1: Pedro\n");
                        vitorias_p++;
                    } else if (ta1 > pa1) {
                        printf("Rodada1: Tulio\n");
                        vitorias_t++;
                    }
                }


            }

        }
    }

    //Rodada 2


        if (pc2 == 1) {
            if (tc2 == 3) {
                pv2 = pv2 + (pv2 * 0.3);
            } else if (tc2 == 2) {
                tv2 = tv2 + (tv2 * 0.15);
                ta2 = ta2 + (ta2 * 0.15);
            } else {
                pv2 = pv2;
                tv2 = tv2;
                pa2 = pa2;
                ta2 = ta2;
            }
        } else if (pc2 == 2) {
            if (tc2 == 3) {
                ta2 = ta2 + (ta2 * 0.25);
            } else if (tc2 == 1) {
                pv2 = pv2 + (pv2 * 0.15);
                pa2 = pa2 + (pa2 * 0.15);
            } else {
                pv2 = pv2;
                tv2 = tv2;
                pa2 = pa2;
                ta2 = ta2;
            }
        } else if (pc2 == 3) {
            if (tc2 == 1) {
                ta2 = ta2 + (ta2 * 0.3);
            } else if (tc2 == 2) {
                pa2 = pa2 + (pa2 * 0.25);
            } else {
                pv2 = pv2;
                tv2 = tv2;
                pa2 = pa2;
                ta2 = ta2;
            }
        }


        if (pv2 < tv2 || pv2 == tv2) {
        
    
        tv2 = tv2 - pa2;
        if (tv2 <= 0) {
            printf("Rodada2: Pedro\n");
            vitorias_p++;
        } else {
            pv2 = pv2 - ta2;
            if (pv2 <= 0) {
                printf("Rodada2: Tulio\n");
                vitorias_t++;
            } else if (tv2 > 0 && pv2 > 0) {
                if (pv2 > tv2) {
                    printf("Rodada2: Pedro\n");
                    vitorias_p++;
                } else if (tv2 > pv2) {
                    printf("Rodada2: Tulio\n");
                    vitorias_t++;
                } else if (pv2 == tv2) {
                    if (pa2 > ta2) {
                        printf("Rodada2: Pedro\n");
                        vitorias_p++;
                    } else if (ta2 > pa2) {
                        printf("Rodada2: Tulio\n");
                        vitorias_t++;
                    }
                }


            }

        }

    } else if (tv2 < pv2) {

        pv2 = pv2 - ta2;
        if (pv2 <= 0) {
            printf("Rodada2: Tulio\n");
            vitorias_t++;
        } else {
            tv2 = tv2 - pa2;
            if (tv2 <= 0) {
                printf("Rodada2: Pedro\n");
                vitorias_p++;
            } else if (tv2 > 0 && pv2 > 0) {
                if (pv2 > tv2) {
                    printf("Rodada2: Pedro\n");
                    vitorias_p++;
                } else if (tv2 > pv2) {
                    printf("Rodada2: Tulio\n");
                    vitorias_t++;
                } else if (pv2 == tv2) {
                    if (pa2 > ta2) {
                        printf("Rodada2: Pedro\n");
                        vitorias_p++;
                    } else if (ta2 > pa2) {
                        printf("Rodada2: Tulio\n");
                        vitorias_t++;
                    }
                }


            }

        }
    }

    //Rodada 3

        if (pc3 == 1) {
            if (tc3 == 3) {
                pv3 = pv3 + (pv3 * 0.3);
            } else if (tc3 == 2) {
                tv3 = tv3 + (tv3 * 0.15);
                ta3 = ta3 + (ta3 * 0.15);
            } else {
                pv3 = pv3;
                tv3 = tv3;
                pa3 = pa3;
                ta3 = ta3;
            }
        } else if (pc3 == 2) {
            if (tc3 == 3) {
                ta3 = ta3 + (ta3 * 0.25);
            } else if (tc3 == 1) {
                pv3 = pv3 + (pv3 * 0.15);
                pa3 = pa3 + (pa3 * 0.15);
            } else {
                pv3 = pv3;
                tv3 = tv3;
                pa3 = pa3;
                ta3 = ta3;
            }
        } else if (pc3 == 3) {
            if (tc3 == 1) {
                ta3 = ta3 + (ta3 * 0.3);
            } else if (tc3 == 2) {
                pa3 = pa3 + (pa3 * 0.25);
            } else {
                pv3 = pv3;
                tv3 = tv3;
                pa3 = pa3;
                ta3 = ta3;
            }
        }


        if (pv3 < tv3 || pv3 == tv3) {
        tv3 = tv3 - pa3;
        if (tv3 <= 0) {
            printf("Rodada3: Pedro\n");
            vitorias_p++;
        } else {
            pv3 = pv3 - ta3;
            if (pv3 <= 0) {
                printf("Rodada3: Tulio\n");
                vitorias_t++;
            } else if (tv3 > 0 && pv3 > 0) {
                if (pv3 > tv3) {
                    printf("Rodada3: Pedro\n");
                    vitorias_p++;
                } else if (tv3 > pv3) {
                    printf("Rodada3: Tulio\n");
                    vitorias_t++;
                } else if (pv3 == tv3) {
                    if (pa3 > ta3) {
                        printf("Rodada3: Pedro\n");
                        vitorias_p++;
                    } else if (ta3 > pa3) {
                        printf("Rodada3: Tulio\n");
                        vitorias_t++;
                    }
                }


            }

        }

    } else if (tv3 < pv3) {

        pv3 = pv3 - ta3;
        if (pv3 <= 0) {
            printf("Rodada3: Tulio\n");
            vitorias_t++;
        } else {
            tv3 = tv3 - pa3;
            if (tv3 <= 0) {
                printf("Rodada3: Pedro\n");
                vitorias_p++;
            } else if (tv3 > 0 && pv3 > 0) {
                if (pv3 > tv3) {
                    printf("Rodada3: Pedro\n");
                    vitorias_p++;
                } else if (tv3 > pv3) {
                    printf("Rodada3: Tulio\n");
                    vitorias_t++;
                } else if (pv3 == tv3) {
                    if (pa3 > ta3) {
                        printf("Rodada3: Pedro\n");
                        vitorias_p++;
                    } else if (ta3 > pa3) {
                        printf("Rodada3: Tulio\n");
                        vitorias_t++;
                    }
                }


            }

        }
    }

    if (vitorias_p > vitorias_t) {
        printf("Pedro vitorioso");
    } else if (vitorias_t > vitorias_p) {
        printf("Tulio vitorioso");
    }

}

int main() 
{
    int pc1, pc2, pc3;
    int tc1, tc2, tc3;

    double pa1, pa2, pa3;
    double pv1, pv2, pv3;

    double ta1, ta2, ta3;
    double tv1, tv2, tv3;

    scanf("%d %lf %lf %d %lf %lf %d %lf %lf %d %lf %lf %d %lf %lf %d %lf %lf", &pc1, &pa1, &pv1, &pc2, &pa2, &pv2, &pc3, &pa3, &pv3, &tc1, &ta1, &tv1, &tc2, &ta2, &tv2, &tc3, &ta3, &tv3);
    
    batalha(pc1, pa1, pv1, pc2, pa2, pv2, pc3, pa3, pv3, tc1, ta1, tv1, tc2, ta2, tv2, tc3, ta3, tv3);

}