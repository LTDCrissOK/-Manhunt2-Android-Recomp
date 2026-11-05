#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC8A0
// Address: 0x1ac8a0 - 0x1acd20
void sub_001AC8A0_0x1ac8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC8A0_0x1ac8a0");
#endif

    switch (ctx->pc) {
        case 0x1ac8a0u: goto label_1ac8a0;
        case 0x1ac8a4u: goto label_1ac8a4;
        case 0x1ac8a8u: goto label_1ac8a8;
        case 0x1ac8acu: goto label_1ac8ac;
        case 0x1ac8b0u: goto label_1ac8b0;
        case 0x1ac8b4u: goto label_1ac8b4;
        case 0x1ac8b8u: goto label_1ac8b8;
        case 0x1ac8bcu: goto label_1ac8bc;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac8c4u: goto label_1ac8c4;
        case 0x1ac8c8u: goto label_1ac8c8;
        case 0x1ac8ccu: goto label_1ac8cc;
        case 0x1ac8d0u: goto label_1ac8d0;
        case 0x1ac8d4u: goto label_1ac8d4;
        case 0x1ac8d8u: goto label_1ac8d8;
        case 0x1ac8dcu: goto label_1ac8dc;
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        case 0x1ac908u: goto label_1ac908;
        case 0x1ac90cu: goto label_1ac90c;
        case 0x1ac910u: goto label_1ac910;
        case 0x1ac914u: goto label_1ac914;
        case 0x1ac918u: goto label_1ac918;
        case 0x1ac91cu: goto label_1ac91c;
        case 0x1ac920u: goto label_1ac920;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac928u: goto label_1ac928;
        case 0x1ac92cu: goto label_1ac92c;
        case 0x1ac930u: goto label_1ac930;
        case 0x1ac934u: goto label_1ac934;
        case 0x1ac938u: goto label_1ac938;
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac944u: goto label_1ac944;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac950u: goto label_1ac950;
        case 0x1ac954u: goto label_1ac954;
        case 0x1ac958u: goto label_1ac958;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac960u: goto label_1ac960;
        case 0x1ac964u: goto label_1ac964;
        case 0x1ac968u: goto label_1ac968;
        case 0x1ac96cu: goto label_1ac96c;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac974u: goto label_1ac974;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac97cu: goto label_1ac97c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        case 0x1ac9e0u: goto label_1ac9e0;
        case 0x1ac9e4u: goto label_1ac9e4;
        case 0x1ac9e8u: goto label_1ac9e8;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1ac9f0u: goto label_1ac9f0;
        case 0x1ac9f4u: goto label_1ac9f4;
        case 0x1ac9f8u: goto label_1ac9f8;
        case 0x1ac9fcu: goto label_1ac9fc;
        case 0x1aca00u: goto label_1aca00;
        case 0x1aca04u: goto label_1aca04;
        case 0x1aca08u: goto label_1aca08;
        case 0x1aca0cu: goto label_1aca0c;
        case 0x1aca10u: goto label_1aca10;
        case 0x1aca14u: goto label_1aca14;
        case 0x1aca18u: goto label_1aca18;
        case 0x1aca1cu: goto label_1aca1c;
        case 0x1aca20u: goto label_1aca20;
        case 0x1aca24u: goto label_1aca24;
        case 0x1aca28u: goto label_1aca28;
        case 0x1aca2cu: goto label_1aca2c;
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca34u: goto label_1aca34;
        case 0x1aca38u: goto label_1aca38;
        case 0x1aca3cu: goto label_1aca3c;
        case 0x1aca40u: goto label_1aca40;
        case 0x1aca44u: goto label_1aca44;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca4cu: goto label_1aca4c;
        case 0x1aca50u: goto label_1aca50;
        case 0x1aca54u: goto label_1aca54;
        case 0x1aca58u: goto label_1aca58;
        case 0x1aca5cu: goto label_1aca5c;
        case 0x1aca60u: goto label_1aca60;
        case 0x1aca64u: goto label_1aca64;
        case 0x1aca68u: goto label_1aca68;
        case 0x1aca6cu: goto label_1aca6c;
        case 0x1aca70u: goto label_1aca70;
        case 0x1aca74u: goto label_1aca74;
        case 0x1aca78u: goto label_1aca78;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca80u: goto label_1aca80;
        case 0x1aca84u: goto label_1aca84;
        case 0x1aca88u: goto label_1aca88;
        case 0x1aca8cu: goto label_1aca8c;
        case 0x1aca90u: goto label_1aca90;
        case 0x1aca94u: goto label_1aca94;
        case 0x1aca98u: goto label_1aca98;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaa0u: goto label_1acaa0;
        case 0x1acaa4u: goto label_1acaa4;
        case 0x1acaa8u: goto label_1acaa8;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acab0u: goto label_1acab0;
        case 0x1acab4u: goto label_1acab4;
        case 0x1acab8u: goto label_1acab8;
        case 0x1acabcu: goto label_1acabc;
        case 0x1acac0u: goto label_1acac0;
        case 0x1acac4u: goto label_1acac4;
        case 0x1acac8u: goto label_1acac8;
        case 0x1acaccu: goto label_1acacc;
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        case 0x1acaf4u: goto label_1acaf4;
        case 0x1acaf8u: goto label_1acaf8;
        case 0x1acafcu: goto label_1acafc;
        case 0x1acb00u: goto label_1acb00;
        case 0x1acb04u: goto label_1acb04;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb0cu: goto label_1acb0c;
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb50u: goto label_1acb50;
        case 0x1acb54u: goto label_1acb54;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb60u: goto label_1acb60;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb68u: goto label_1acb68;
        case 0x1acb6cu: goto label_1acb6c;
        case 0x1acb70u: goto label_1acb70;
        case 0x1acb74u: goto label_1acb74;
        case 0x1acb78u: goto label_1acb78;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb80u: goto label_1acb80;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acb88u: goto label_1acb88;
        case 0x1acb8cu: goto label_1acb8c;
        case 0x1acb90u: goto label_1acb90;
        case 0x1acb94u: goto label_1acb94;
        case 0x1acb98u: goto label_1acb98;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acba4u: goto label_1acba4;
        case 0x1acba8u: goto label_1acba8;
        case 0x1acbacu: goto label_1acbac;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbb4u: goto label_1acbb4;
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbc0u: goto label_1acbc0;
        case 0x1acbc4u: goto label_1acbc4;
        case 0x1acbc8u: goto label_1acbc8;
        case 0x1acbccu: goto label_1acbcc;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbd4u: goto label_1acbd4;
        case 0x1acbd8u: goto label_1acbd8;
        case 0x1acbdcu: goto label_1acbdc;
        case 0x1acbe0u: goto label_1acbe0;
        case 0x1acbe4u: goto label_1acbe4;
        case 0x1acbe8u: goto label_1acbe8;
        case 0x1acbecu: goto label_1acbec;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acbf4u: goto label_1acbf4;
        case 0x1acbf8u: goto label_1acbf8;
        case 0x1acbfcu: goto label_1acbfc;
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc04u: goto label_1acc04;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc0cu: goto label_1acc0c;
        case 0x1acc10u: goto label_1acc10;
        case 0x1acc14u: goto label_1acc14;
        case 0x1acc18u: goto label_1acc18;
        case 0x1acc1cu: goto label_1acc1c;
        case 0x1acc20u: goto label_1acc20;
        case 0x1acc24u: goto label_1acc24;
        case 0x1acc28u: goto label_1acc28;
        case 0x1acc2cu: goto label_1acc2c;
        case 0x1acc30u: goto label_1acc30;
        case 0x1acc34u: goto label_1acc34;
        case 0x1acc38u: goto label_1acc38;
        case 0x1acc3cu: goto label_1acc3c;
        case 0x1acc40u: goto label_1acc40;
        case 0x1acc44u: goto label_1acc44;
        case 0x1acc48u: goto label_1acc48;
        case 0x1acc4cu: goto label_1acc4c;
        case 0x1acc50u: goto label_1acc50;
        case 0x1acc54u: goto label_1acc54;
        case 0x1acc58u: goto label_1acc58;
        case 0x1acc5cu: goto label_1acc5c;
        case 0x1acc60u: goto label_1acc60;
        case 0x1acc64u: goto label_1acc64;
        case 0x1acc68u: goto label_1acc68;
        case 0x1acc6cu: goto label_1acc6c;
        case 0x1acc70u: goto label_1acc70;
        case 0x1acc74u: goto label_1acc74;
        case 0x1acc78u: goto label_1acc78;
        case 0x1acc7cu: goto label_1acc7c;
        case 0x1acc80u: goto label_1acc80;
        case 0x1acc84u: goto label_1acc84;
        case 0x1acc88u: goto label_1acc88;
        case 0x1acc8cu: goto label_1acc8c;
        case 0x1acc90u: goto label_1acc90;
        case 0x1acc94u: goto label_1acc94;
        case 0x1acc98u: goto label_1acc98;
        case 0x1acc9cu: goto label_1acc9c;
        case 0x1acca0u: goto label_1acca0;
        case 0x1acca4u: goto label_1acca4;
        case 0x1acca8u: goto label_1acca8;
        case 0x1accacu: goto label_1accac;
        case 0x1accb0u: goto label_1accb0;
        case 0x1accb4u: goto label_1accb4;
        case 0x1accb8u: goto label_1accb8;
        case 0x1accbcu: goto label_1accbc;
        case 0x1accc0u: goto label_1accc0;
        case 0x1accc4u: goto label_1accc4;
        case 0x1accc8u: goto label_1accc8;
        case 0x1accccu: goto label_1acccc;
        case 0x1accd0u: goto label_1accd0;
        case 0x1accd4u: goto label_1accd4;
        case 0x1accd8u: goto label_1accd8;
        case 0x1accdcu: goto label_1accdc;
        case 0x1acce0u: goto label_1acce0;
        case 0x1acce4u: goto label_1acce4;
        case 0x1acce8u: goto label_1acce8;
        case 0x1accecu: goto label_1accec;
        case 0x1accf0u: goto label_1accf0;
        case 0x1accf4u: goto label_1accf4;
        case 0x1accf8u: goto label_1accf8;
        case 0x1accfcu: goto label_1accfc;
        case 0x1acd00u: goto label_1acd00;
        case 0x1acd04u: goto label_1acd04;
        case 0x1acd08u: goto label_1acd08;
        case 0x1acd0cu: goto label_1acd0c;
        case 0x1acd10u: goto label_1acd10;
        case 0x1acd14u: goto label_1acd14;
        case 0x1acd18u: goto label_1acd18;
        case 0x1acd1cu: goto label_1acd1c;
        default: break;
    }

    ctx->pc = 0x1ac8a0u;

label_1ac8a0:
    // 0x1ac8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ac8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ac8a4:
    // 0x1ac8a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac8a8:
    // 0x1ac8a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ac8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1ac8ac:
    // 0x1ac8ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8b0:
    // 0x1ac8b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac8b4:
    // 0x1ac8b4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ac8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1ac8b8:
    // 0x1ac8b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ac8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1ac8bc:
    // 0x1ac8bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ac8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ac8c0:
    // 0x1ac8c0: 0xc06a4c2  jal         func_1A9308
label_1ac8c4:
    if (ctx->pc == 0x1AC8C4u) {
        ctx->pc = 0x1AC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8C0u;
        // 0x1ac8c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8C8u;
        goto label_1ac8c8;
    }
    ctx->pc = 0x1AC8C0u;
    SET_GPR_U32(ctx, 31, 0x1AC8C8u);
    ctx->pc = 0x1AC8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8C0u;
    // 0x1ac8c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AC8C0u, 0x1AC8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8C8u;
label_1ac8c8:
    // 0x1ac8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8cc:
    // 0x1ac8cc: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1ac8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1ac8d0:
    // 0x1ac8d0: 0xc069712  jal         func_1A5C48
label_1ac8d4:
    if (ctx->pc == 0x1AC8D4u) {
        ctx->pc = 0x1AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8D0u;
        // 0x1ac8d4: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8D8u;
        goto label_1ac8d8;
    }
    ctx->pc = 0x1AC8D0u;
    SET_GPR_U32(ctx, 31, 0x1AC8D8u);
    ctx->pc = 0x1AC8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8D0u;
    // 0x1ac8d4: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1AC8D0u, 0x1AC8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8D8u;
label_1ac8d8:
    // 0x1ac8d8: 0x8e2501e4  lw          $a1, 0x1E4($s1)
    ctx->pc = 0x1ac8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac8dc:
    // 0x1ac8dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac8e0:
    // 0x1ac8e0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac8e4:
    // 0x1ac8e4: 0x240707f5  addiu       $a3, $zero, 0x7F5
    ctx->pc = 0x1ac8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2037));
label_1ac8e8:
    // 0x1ac8e8: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1ac8e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
label_1ac8ec:
    // 0x1ac8ec: 0x8c7200c4  lw          $s2, 0xC4($v1)
    ctx->pc = 0x1ac8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1ac8f0:
    // 0x1ac8f0: 0x8c73010c  lw          $s3, 0x10C($v1)
    ctx->pc = 0x1ac8f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1ac8f4:
    // 0x1ac8f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ac8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1ac8f8:
    // 0x1ac8f8: 0xa4a2002a  sh          $v0, 0x2A($a1)
    ctx->pc = 0x1ac8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 2));
label_1ac8fc:
    // 0x1ac8fc: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ac8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac900:
    // 0x1ac900: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1ac900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_1ac904:
    // 0x1ac904: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x1ac904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_1ac908:
    // 0x1ac908: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1ac908u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
label_1ac90c:
    // 0x1ac90c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1ac90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac910:
    // 0x1ac910: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1ac910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_1ac914:
    // 0x1ac914: 0xa0460030  sb          $a2, 0x30($v0)
    ctx->pc = 0x1ac914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 6));
label_1ac918:
    // 0x1ac918: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x1ac918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_1ac91c:
    // 0x1ac91c: 0x54670015  bnel        $v1, $a3, . + 4 + (0x15 << 2)
label_1ac920:
    if (ctx->pc == 0x1AC920u) {
        ctx->pc = 0x1AC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC91Cu;
        // 0x1ac920: 0x8e2401e4  lw          $a0, 0x1E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC924u;
        goto label_1ac924;
    }
    ctx->pc = 0x1AC91Cu;
    {
        const bool branch_taken_0x1ac91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1ac91c) {
            ctx->pc = 0x1AC920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC91Cu;
            // 0x1ac920: 0x8e2401e4  lw          $a0, 0x1E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC974u;
            goto label_1ac974;
        }
    }
    ctx->pc = 0x1AC924u;
label_1ac924:
    // 0x1ac924: 0xc08fde2  jal         func_23F788
label_1ac928:
    if (ctx->pc == 0x1AC928u) {
        ctx->pc = 0x1AC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC924u;
        // 0x1ac928: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC92Cu;
        goto label_1ac92c;
    }
    ctx->pc = 0x1AC924u;
    SET_GPR_U32(ctx, 31, 0x1AC92Cu);
    ctx->pc = 0x1AC928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC924u;
    // 0x1ac928: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC924u, 0x1AC92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC92Cu;
label_1ac92c:
    // 0x1ac92c: 0xc094258  jal         func_250960
label_1ac930:
    if (ctx->pc == 0x1AC930u) {
        ctx->pc = 0x1AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC92Cu;
        // 0x1ac930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC934u;
        goto label_1ac934;
    }
    ctx->pc = 0x1AC92Cu;
    SET_GPR_U32(ctx, 31, 0x1AC934u);
    ctx->pc = 0x1AC930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC92Cu;
    // 0x1ac930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250960u, 0x1AC92Cu, 0x1AC934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC934u;
label_1ac934:
    // 0x1ac934: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1ac938:
    if (ctx->pc == 0x1AC938u) {
        ctx->pc = 0x1AC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC934u;
        // 0x1ac938: 0x8e2401e4  lw          $a0, 0x1E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC93Cu;
        goto label_1ac93c;
    }
    ctx->pc = 0x1AC934u;
    {
        const bool branch_taken_0x1ac934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac934) {
            ctx->pc = 0x1AC938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC934u;
            // 0x1ac938: 0x8e2401e4  lw          $a0, 0x1E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC974u;
            goto label_1ac974;
        }
    }
    ctx->pc = 0x1AC93Cu;
label_1ac93c:
    // 0x1ac93c: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac940:
    // 0x1ac940: 0xc08fc4e  jal         func_23F138
label_1ac944:
    if (ctx->pc == 0x1AC944u) {
        ctx->pc = 0x1AC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC940u;
        // 0x1ac944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC948u;
        goto label_1ac948;
    }
    ctx->pc = 0x1AC940u;
    SET_GPR_U32(ctx, 31, 0x1AC948u);
    ctx->pc = 0x1AC944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC940u;
    // 0x1ac944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x1AC940u, 0x1AC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC948u;
label_1ac948:
    // 0x1ac948: 0x92420032  lbu         $v0, 0x32($s2)
    ctx->pc = 0x1ac948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
label_1ac94c:
    // 0x1ac94c: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x1ac94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_1ac950:
    // 0x1ac950: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1ac950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_1ac954:
    // 0x1ac954: 0xa2420032  sb          $v0, 0x32($s2)
    ctx->pc = 0x1ac954u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 2));
label_1ac958:
    // 0x1ac958: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1ac958u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac95c:
    // 0x1ac95c: 0xc07682a  jal         func_1DA0A8
label_1ac960:
    if (ctx->pc == 0x1AC960u) {
        ctx->pc = 0x1AC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC95Cu;
        // 0x1ac960: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC964u;
        goto label_1ac964;
    }
    ctx->pc = 0x1AC95Cu;
    SET_GPR_U32(ctx, 31, 0x1AC964u);
    ctx->pc = 0x1AC960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC95Cu;
    // 0x1ac960: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x1AC95Cu, 0x1AC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC964u;
label_1ac964:
    // 0x1ac964: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x1ac964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
label_1ac968:
    // 0x1ac968: 0xc0767f2  jal         func_1D9FC8
label_1ac96c:
    if (ctx->pc == 0x1AC96Cu) {
        ctx->pc = 0x1AC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC968u;
        // 0x1ac96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC970u;
        goto label_1ac970;
    }
    ctx->pc = 0x1AC968u;
    SET_GPR_U32(ctx, 31, 0x1AC970u);
    ctx->pc = 0x1AC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC968u;
    // 0x1ac96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x1AC968u, 0x1AC970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC970u;
label_1ac970:
    // 0x1ac970: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ac970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac974:
    // 0x1ac974: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1ac978:
    if (ctx->pc == 0x1AC978u) {
        ctx->pc = 0x1AC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC974u;
        // 0x1ac978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC97Cu;
        goto label_1ac97c;
    }
    ctx->pc = 0x1AC974u;
    {
        const bool branch_taken_0x1ac974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC974u;
        // 0x1ac978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac974) {
            ctx->pc = 0x1AC99Cu;
            goto label_1ac99c;
        }
    }
    ctx->pc = 0x1AC97Cu;
label_1ac97c:
    // 0x1ac97c: 0x262301ec  addiu       $v1, $s1, 0x1EC
    ctx->pc = 0x1ac97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
label_1ac980:
    // 0x1ac980: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac984:
    // 0x1ac984: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1ac988:
    if (ctx->pc == 0x1AC988u) {
        ctx->pc = 0x1AC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC984u;
        // 0x1ac988: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC98Cu;
        goto label_1ac98c;
    }
    ctx->pc = 0x1AC984u;
    {
        const bool branch_taken_0x1ac984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC984u;
        // 0x1ac988: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac984) {
            ctx->pc = 0x1AC99Cu;
            goto label_1ac99c;
        }
    }
    ctx->pc = 0x1AC98Cu;
label_1ac98c:
    // 0x1ac98c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1ac98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ac990:
    // 0x1ac990: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1ac994:
    if (ctx->pc == 0x1AC994u) {
        ctx->pc = 0x1AC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC990u;
        // 0x1ac994: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC998u;
        goto label_1ac998;
    }
    ctx->pc = 0x1AC990u;
    {
        const bool branch_taken_0x1ac990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC990u;
        // 0x1ac994: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac990) {
            ctx->pc = 0x1AC980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac980;
        }
    }
    ctx->pc = 0x1AC998u;
label_1ac998:
    // 0x1ac998: 0x8e2401e8  lw          $a0, 0x1E8($s1)
    ctx->pc = 0x1ac998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
label_1ac99c:
    // 0x1ac99c: 0xc074152  jal         func_1D0548
label_1ac9a0:
    if (ctx->pc == 0x1AC9A0u) {
        ctx->pc = 0x1AC9A4u;
        goto label_1ac9a4;
    }
    ctx->pc = 0x1AC99Cu;
    SET_GPR_U32(ctx, 31, 0x1AC9A4u);
    ctx->pc = 0x1D0548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0548u, 0x1AC99Cu, 0x1AC9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9A4u;
label_1ac9a4:
    // 0x1ac9a4: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
label_1ac9a8:
    if (ctx->pc == 0x1AC9A8u) {
        ctx->pc = 0x1AC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9A4u;
        // 0x1ac9a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9ACu;
        goto label_1ac9ac;
    }
    ctx->pc = 0x1AC9A4u;
    {
        const bool branch_taken_0x1ac9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9A4u;
        // 0x1ac9a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9a4) {
            ctx->pc = 0x1ACD04u;
            goto label_1acd04;
        }
    }
    ctx->pc = 0x1AC9ACu;
label_1ac9ac:
    // 0x1ac9ac: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac9b0:
    // 0x1ac9b0: 0xc08fc4e  jal         func_23F138
label_1ac9b4:
    if (ctx->pc == 0x1AC9B4u) {
        ctx->pc = 0x1AC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9B0u;
        // 0x1ac9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9B8u;
        goto label_1ac9b8;
    }
    ctx->pc = 0x1AC9B0u;
    SET_GPR_U32(ctx, 31, 0x1AC9B8u);
    ctx->pc = 0x1AC9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9B0u;
    // 0x1ac9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x1AC9B0u, 0x1AC9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9B8u;
label_1ac9b8:
    // 0x1ac9b8: 0x92420032  lbu         $v0, 0x32($s2)
    ctx->pc = 0x1ac9b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
label_1ac9bc:
    // 0x1ac9bc: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x1ac9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_1ac9c0:
    // 0x1ac9c0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1ac9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_1ac9c4:
    // 0x1ac9c4: 0xa2420032  sb          $v0, 0x32($s2)
    ctx->pc = 0x1ac9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 2));
label_1ac9c8:
    // 0x1ac9c8: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1ac9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac9cc:
    // 0x1ac9cc: 0xc07682a  jal         func_1DA0A8
label_1ac9d0:
    if (ctx->pc == 0x1AC9D0u) {
        ctx->pc = 0x1AC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9CCu;
        // 0x1ac9d0: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9D4u;
        goto label_1ac9d4;
    }
    ctx->pc = 0x1AC9CCu;
    SET_GPR_U32(ctx, 31, 0x1AC9D4u);
    ctx->pc = 0x1AC9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9CCu;
    // 0x1ac9d0: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x1AC9CCu, 0x1AC9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9D4u;
label_1ac9d4:
    // 0x1ac9d4: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x1ac9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
label_1ac9d8:
    // 0x1ac9d8: 0xc0767f2  jal         func_1D9FC8
label_1ac9dc:
    if (ctx->pc == 0x1AC9DCu) {
        ctx->pc = 0x1AC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9D8u;
        // 0x1ac9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9E0u;
        goto label_1ac9e0;
    }
    ctx->pc = 0x1AC9D8u;
    SET_GPR_U32(ctx, 31, 0x1AC9E0u);
    ctx->pc = 0x1AC9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9D8u;
    // 0x1ac9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x1AC9D8u, 0x1AC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9E0u;
label_1ac9e0:
    // 0x1ac9e0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1ac9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac9e4:
    // 0x1ac9e4: 0x240203fd  addiu       $v0, $zero, 0x3FD
    ctx->pc = 0x1ac9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
label_1ac9e8:
    // 0x1ac9e8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1ac9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ac9ec:
    // 0x1ac9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9f0:
    // 0x1ac9f0: 0xac620324  sw          $v0, 0x324($v1)
    ctx->pc = 0x1ac9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 804), GPR_U32(ctx, 2));
label_1ac9f4:
    // 0x1ac9f4: 0xa0600321  sb          $zero, 0x321($v1)
    ctx->pc = 0x1ac9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 801), (uint8_t)GPR_U32(ctx, 0));
label_1ac9f8:
    // 0x1ac9f8: 0xa26000a8  sb          $zero, 0xA8($s3)
    ctx->pc = 0x1ac9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 168), (uint8_t)GPR_U32(ctx, 0));
label_1ac9fc:
    // 0x1ac9fc: 0xc08fed2  jal         func_23FB48
label_1aca00:
    if (ctx->pc == 0x1ACA00u) {
        ctx->pc = 0x1ACA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9FCu;
        // 0x1aca00: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA04u;
        goto label_1aca04;
    }
    ctx->pc = 0x1AC9FCu;
    SET_GPR_U32(ctx, 31, 0x1ACA04u);
    ctx->pc = 0x1ACA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9FCu;
    // 0x1aca00: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1AC9FCu, 0x1ACA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA04u;
label_1aca04:
    // 0x1aca04: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1aca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1aca08:
    // 0x1aca08: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1aca08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1aca0c:
    // 0x1aca0c: 0xc08fed2  jal         func_23FB48
label_1aca10:
    if (ctx->pc == 0x1ACA10u) {
        ctx->pc = 0x1ACA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA0Cu;
        // 0x1aca10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA14u;
        goto label_1aca14;
    }
    ctx->pc = 0x1ACA0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA14u);
    ctx->pc = 0x1ACA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA0Cu;
    // 0x1aca10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1ACA0Cu, 0x1ACA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA14u;
label_1aca14:
    // 0x1aca14: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1aca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1aca18:
    // 0x1aca18: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1aca18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1aca1c:
    // 0x1aca1c: 0xc08fed2  jal         func_23FB48
label_1aca20:
    if (ctx->pc == 0x1ACA20u) {
        ctx->pc = 0x1ACA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA1Cu;
        // 0x1aca20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA24u;
        goto label_1aca24;
    }
    ctx->pc = 0x1ACA1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA24u);
    ctx->pc = 0x1ACA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA1Cu;
    // 0x1aca20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1ACA1Cu, 0x1ACA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA24u;
label_1aca24:
    // 0x1aca24: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1aca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1aca28:
    // 0x1aca28: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1aca28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
label_1aca2c:
    // 0x1aca2c: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1aca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1aca30:
    // 0x1aca30: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1aca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1aca34:
    // 0x1aca34: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x1aca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_1aca38:
    // 0x1aca38: 0x40f809  jalr        $v0
label_1aca3c:
    if (ctx->pc == 0x1ACA3Cu) {
        ctx->pc = 0x1ACA40u;
        goto label_1aca40;
    }
    ctx->pc = 0x1ACA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACA40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA38u, 0x1ACA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACA40u;
label_1aca40:
    // 0x1aca40: 0xc08fde2  jal         func_23F788
label_1aca44:
    if (ctx->pc == 0x1ACA44u) {
        ctx->pc = 0x1ACA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA40u;
        // 0x1aca44: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA48u;
        goto label_1aca48;
    }
    ctx->pc = 0x1ACA40u;
    SET_GPR_U32(ctx, 31, 0x1ACA48u);
    ctx->pc = 0x1ACA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA40u;
    // 0x1aca44: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1ACA40u, 0x1ACA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA48u;
label_1aca48:
    // 0x1aca48: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1aca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1aca4c:
    // 0x1aca4c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1aca50:
    // 0x1aca50: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_1aca54:
    if (ctx->pc == 0x1ACA54u) {
        ctx->pc = 0x1ACA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA50u;
        // 0x1aca54: 0x240503fb  addiu       $a1, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA58u;
        goto label_1aca58;
    }
    ctx->pc = 0x1ACA50u;
    {
        const bool branch_taken_0x1aca50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA50u;
        // 0x1aca54: 0x240503fb  addiu       $a1, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca50) {
            ctx->pc = 0x1ACB94u;
            goto label_1acb94;
        }
    }
    ctx->pc = 0x1ACA58u;
label_1aca58:
    // 0x1aca58: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1aca58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1aca5c:
    // 0x1aca5c: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1aca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_1aca60:
    // 0x1aca60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1aca64:
    // 0x1aca64: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1aca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aca68:
    // 0x1aca68: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1aca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1aca6c:
    // 0x1aca6c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1aca6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1aca70:
    // 0x1aca70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1aca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aca74:
    // 0x1aca74: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1aca74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1aca78:
    // 0x1aca78: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1aca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aca7c:
    // 0x1aca7c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1aca7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1aca80:
    // 0x1aca80: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1aca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aca84:
    // 0x1aca84: 0xc08a1f2  jal         func_2287C8
label_1aca88:
    if (ctx->pc == 0x1ACA88u) {
        ctx->pc = 0x1ACA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA84u;
        // 0x1aca88: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA8Cu;
        goto label_1aca8c;
    }
    ctx->pc = 0x1ACA84u;
    SET_GPR_U32(ctx, 31, 0x1ACA8Cu);
    ctx->pc = 0x1ACA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA84u;
    // 0x1aca88: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1ACA84u, 0x1ACA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA8Cu;
label_1aca8c:
    // 0x1aca8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aca8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aca90:
    // 0x1aca90: 0xc0f70ce  jal         func_3DC338
label_1aca94:
    if (ctx->pc == 0x1ACA94u) {
        ctx->pc = 0x1ACA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA90u;
        // 0x1aca94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA98u;
        goto label_1aca98;
    }
    ctx->pc = 0x1ACA90u;
    SET_GPR_U32(ctx, 31, 0x1ACA98u);
    ctx->pc = 0x1ACA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA90u;
    // 0x1aca94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1ACA90u, 0x1ACA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA98u;
label_1aca98:
    // 0x1aca98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1aca9c:
    if (ctx->pc == 0x1ACA9Cu) {
        ctx->pc = 0x1ACA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA98u;
        // 0x1aca9c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAA0u;
        goto label_1acaa0;
    }
    ctx->pc = 0x1ACA98u;
    {
        const bool branch_taken_0x1aca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca98) {
            ctx->pc = 0x1ACA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACA98u;
            // 0x1aca9c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACAACu;
            goto label_1acaac;
        }
    }
    ctx->pc = 0x1ACAA0u;
label_1acaa0:
    // 0x1acaa0: 0xc0c4900  jal         func_312400
label_1acaa4:
    if (ctx->pc == 0x1ACAA4u) {
        ctx->pc = 0x1ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA0u;
        // 0x1acaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAA8u;
        goto label_1acaa8;
    }
    ctx->pc = 0x1ACAA0u;
    SET_GPR_U32(ctx, 31, 0x1ACAA8u);
    ctx->pc = 0x1ACAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACAA0u;
    // 0x1acaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1ACAA0u, 0x1ACAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACAA8u;
label_1acaa8:
    // 0x1acaa8: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1acaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acaac:
    // 0x1acaac: 0x24050431  addiu       $a1, $zero, 0x431
    ctx->pc = 0x1acaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
label_1acab0:
    // 0x1acab0: 0xc08a1f2  jal         func_2287C8
label_1acab4:
    if (ctx->pc == 0x1ACAB4u) {
        ctx->pc = 0x1ACAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAB0u;
        // 0x1acab4: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAB8u;
        goto label_1acab8;
    }
    ctx->pc = 0x1ACAB0u;
    SET_GPR_U32(ctx, 31, 0x1ACAB8u);
    ctx->pc = 0x1ACAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACAB0u;
    // 0x1acab4: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1ACAB0u, 0x1ACAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACAB8u;
label_1acab8:
    // 0x1acab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acabc:
    // 0x1acabc: 0xc0f70ce  jal         func_3DC338
label_1acac0:
    if (ctx->pc == 0x1ACAC0u) {
        ctx->pc = 0x1ACAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACABCu;
        // 0x1acac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAC4u;
        goto label_1acac4;
    }
    ctx->pc = 0x1ACABCu;
    SET_GPR_U32(ctx, 31, 0x1ACAC4u);
    ctx->pc = 0x1ACAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACABCu;
    // 0x1acac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1ACABCu, 0x1ACAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACAC4u;
label_1acac4:
    // 0x1acac4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1acac8:
    if (ctx->pc == 0x1ACAC8u) {
        ctx->pc = 0x1ACAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAC4u;
        // 0x1acac8: 0xc60000b4  lwc1        $f0, 0xB4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACACCu;
        goto label_1acacc;
    }
    ctx->pc = 0x1ACAC4u;
    {
        const bool branch_taken_0x1acac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acac4) {
            ctx->pc = 0x1ACAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACAC4u;
            // 0x1acac8: 0xc60000b4  lwc1        $f0, 0xB4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACAD8u;
            goto label_1acad8;
        }
    }
    ctx->pc = 0x1ACACCu;
label_1acacc:
    // 0x1acacc: 0xc0c4900  jal         func_312400
label_1acad0:
    if (ctx->pc == 0x1ACAD0u) {
        ctx->pc = 0x1ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACACCu;
        // 0x1acad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAD4u;
        goto label_1acad4;
    }
    ctx->pc = 0x1ACACCu;
    SET_GPR_U32(ctx, 31, 0x1ACAD4u);
    ctx->pc = 0x1ACAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACACCu;
    // 0x1acad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1ACACCu, 0x1ACAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACAD4u;
label_1acad4:
    // 0x1acad4: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x1acad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acad8:
    // 0x1acad8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1acad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acadc:
    // 0x1acadc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1acadcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1acae0:
    // 0x1acae0: 0x0  nop
    ctx->pc = 0x1acae0u;
    // NOP
label_1acae4:
    // 0x1acae4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1acae8:
    if (ctx->pc == 0x1ACAE8u) {
        ctx->pc = 0x1ACAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAE4u;
        // 0x1acae8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAECu;
        goto label_1acaec;
    }
    ctx->pc = 0x1ACAE4u;
    {
        const bool branch_taken_0x1acae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAE4u;
        // 0x1acae8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acae4) {
            ctx->pc = 0x1ACAF0u;
            goto label_1acaf0;
        }
    }
    ctx->pc = 0x1ACAECu;
label_1acaec:
    // 0x1acaec: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1acaecu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1acaf0:
    // 0x1acaf0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1acaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1acaf4:
    // 0x1acaf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1acaf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acaf8:
    // 0x1acaf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1acaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acafc:
    // 0x1acafc: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1acafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acb00:
    // 0x1acb00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1acb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acb04:
    // 0x1acb04: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1acb04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1acb08:
    // 0x1acb08: 0xc09568e  jal         func_255A38
label_1acb0c:
    if (ctx->pc == 0x1ACB0Cu) {
        ctx->pc = 0x1ACB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB08u;
        // 0x1acb0c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB10u;
        goto label_1acb10;
    }
    ctx->pc = 0x1ACB08u;
    SET_GPR_U32(ctx, 31, 0x1ACB10u);
    ctx->pc = 0x1ACB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB08u;
    // 0x1acb0c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x1ACB08u, 0x1ACB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB10u;
label_1acb10:
    // 0x1acb10: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x1acb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
label_1acb14:
    // 0x1acb14: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1acb14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1acb18:
    // 0x1acb18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1acb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acb1c:
    // 0x1acb1c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1acb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1acb20:
    // 0x1acb20: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1acb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1acb24:
    // 0x1acb24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1acb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acb28:
    // 0x1acb28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1acb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1acb2c:
    // 0x1acb2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1acb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acb30:
    // 0x1acb30: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1acb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1acb34:
    // 0x1acb34: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1acb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1acb38:
    // 0x1acb38: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1acb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_1acb3c:
    // 0x1acb3c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1acb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acb40:
    // 0x1acb40: 0xc0c32b4  jal         func_30CAD0
label_1acb44:
    if (ctx->pc == 0x1ACB44u) {
        ctx->pc = 0x1ACB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB40u;
        // 0x1acb44: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB48u;
        goto label_1acb48;
    }
    ctx->pc = 0x1ACB40u;
    SET_GPR_U32(ctx, 31, 0x1ACB48u);
    ctx->pc = 0x1ACB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB40u;
    // 0x1acb44: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CAD0u, 0x1ACB40u, 0x1ACB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB48u;
label_1acb48:
    // 0x1acb48: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1acb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acb4c:
    // 0x1acb4c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1acb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1acb50:
    // 0x1acb50: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1acb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1acb54:
    // 0x1acb54: 0x40f809  jalr        $v0
label_1acb58:
    if (ctx->pc == 0x1ACB58u) {
        ctx->pc = 0x1ACB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB54u;
        // 0x1acb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB5Cu;
        goto label_1acb5c;
    }
    ctx->pc = 0x1ACB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACB5Cu);
        ctx->pc = 0x1ACB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB54u;
        // 0x1acb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB54u, 0x1ACB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACB5Cu;
label_1acb5c:
    // 0x1acb5c: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1acb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acb60:
    // 0x1acb60: 0xc08bd96  jal         func_22F658
label_1acb64:
    if (ctx->pc == 0x1ACB64u) {
        ctx->pc = 0x1ACB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB60u;
        // 0x1acb64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB68u;
        goto label_1acb68;
    }
    ctx->pc = 0x1ACB60u;
    SET_GPR_U32(ctx, 31, 0x1ACB68u);
    ctx->pc = 0x1ACB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB60u;
    // 0x1acb64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x1ACB60u, 0x1ACB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB68u;
label_1acb68:
    // 0x1acb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1acb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1acb6c:
    // 0x1acb6c: 0xc06974a  jal         func_1A5D28
label_1acb70:
    if (ctx->pc == 0x1ACB70u) {
        ctx->pc = 0x1ACB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB6Cu;
        // 0x1acb70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB74u;
        goto label_1acb74;
    }
    ctx->pc = 0x1ACB6Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB74u);
    ctx->pc = 0x1ACB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB6Cu;
    // 0x1acb70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1ACB6Cu, 0x1ACB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB74u;
label_1acb74:
    // 0x1acb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acb78:
    // 0x1acb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1acb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1acb7c:
    // 0x1acb7c: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1acb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_1acb80:
    // 0x1acb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acb84:
    // 0x1acb84: 0xc06a23e  jal         func_1A88F8
label_1acb88:
    if (ctx->pc == 0x1ACB88u) {
        ctx->pc = 0x1ACB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB84u;
        // 0x1acb88: 0xae220190  sw          $v0, 0x190($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB8Cu;
        goto label_1acb8c;
    }
    ctx->pc = 0x1ACB84u;
    SET_GPR_U32(ctx, 31, 0x1ACB8Cu);
    ctx->pc = 0x1ACB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB84u;
    // 0x1acb88: 0xae220190  sw          $v0, 0x190($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1ACB84u, 0x1ACB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB8Cu;
label_1acb8c:
    // 0x1acb8c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1acb90:
    if (ctx->pc == 0x1ACB90u) {
        ctx->pc = 0x1ACB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB8Cu;
        // 0x1acb90: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB94u;
        goto label_1acb94;
    }
    ctx->pc = 0x1ACB8Cu;
    {
        const bool branch_taken_0x1acb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB8Cu;
        // 0x1acb90: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb8c) {
            ctx->pc = 0x1ACC1Cu;
            goto label_1acc1c;
        }
    }
    ctx->pc = 0x1ACB94u;
label_1acb94:
    // 0x1acb94: 0xc08fde2  jal         func_23F788
label_1acb98:
    if (ctx->pc == 0x1ACB98u) {
        ctx->pc = 0x1ACB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB94u;
        // 0x1acb98: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB9Cu;
        goto label_1acb9c;
    }
    ctx->pc = 0x1ACB94u;
    SET_GPR_U32(ctx, 31, 0x1ACB9Cu);
    ctx->pc = 0x1ACB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB94u;
    // 0x1acb98: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1ACB94u, 0x1ACB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB9Cu;
label_1acb9c:
    // 0x1acb9c: 0xc4410154  lwc1        $f1, 0x154($v0)
    ctx->pc = 0x1acb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acba0:
    // 0x1acba0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1acba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1acba4:
    // 0x1acba4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1acba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1acba8:
    // 0x1acba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1acba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acbac:
    // 0x1acbac: 0x0  nop
    ctx->pc = 0x1acbacu;
    // NOP
label_1acbb0:
    // 0x1acbb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1acbb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1acbb4:
    // 0x1acbb4: 0x0  nop
    ctx->pc = 0x1acbb4u;
    // NOP
label_1acbb8:
    // 0x1acbb8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1acbbc:
    if (ctx->pc == 0x1ACBBCu) {
        ctx->pc = 0x1ACBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBB8u;
        // 0x1acbbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBC0u;
        goto label_1acbc0;
    }
    ctx->pc = 0x1ACBB8u;
    {
        const bool branch_taken_0x1acbb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBB8u;
        // 0x1acbbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbb8) {
            ctx->pc = 0x1ACC0Cu;
            goto label_1acc0c;
        }
    }
    ctx->pc = 0x1ACBC0u;
label_1acbc0:
    // 0x1acbc0: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1acbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acbc4:
    // 0x1acbc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1acbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acbc8:
    // 0x1acbc8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1acbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1acbcc:
    // 0x1acbcc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1acbccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1acbd0:
    // 0x1acbd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1acbd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1acbd4:
    // 0x1acbd4: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_1acbd8:
    // 0x1acbd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1acbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1acbdc:
    // 0x1acbdc: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1acbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acbe0:
    // 0x1acbe0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1acbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1acbe4:
    // 0x1acbe4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1acbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1acbe8:
    // 0x1acbe8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1acbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acbec:
    // 0x1acbec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1acbecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1acbf0:
    // 0x1acbf0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1acbf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1acbf4:
    // 0x1acbf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1acbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acbf8:
    // 0x1acbf8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1acbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1acbfc:
    // 0x1acbfc: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1acbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acc00:
    // 0x1acc00: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1acc00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1acc04:
    // 0x1acc04: 0xc09568e  jal         func_255A38
label_1acc08:
    if (ctx->pc == 0x1ACC08u) {
        ctx->pc = 0x1ACC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC04u;
        // 0x1acc08: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC0Cu;
        goto label_1acc0c;
    }
    ctx->pc = 0x1ACC04u;
    SET_GPR_U32(ctx, 31, 0x1ACC0Cu);
    ctx->pc = 0x1ACC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC04u;
    // 0x1acc08: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x1ACC04u, 0x1ACC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC0Cu;
label_1acc0c:
    // 0x1acc0c: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1acc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acc10:
    // 0x1acc10: 0xc08bd96  jal         func_22F658
label_1acc14:
    if (ctx->pc == 0x1ACC14u) {
        ctx->pc = 0x1ACC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC10u;
        // 0x1acc14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC18u;
        goto label_1acc18;
    }
    ctx->pc = 0x1ACC10u;
    SET_GPR_U32(ctx, 31, 0x1ACC18u);
    ctx->pc = 0x1ACC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC10u;
    // 0x1acc14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x1ACC10u, 0x1ACC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC18u;
label_1acc18:
    // 0x1acc18: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x1acc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acc1c:
    // 0x1acc1c: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x1acc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1acc20:
    // 0x1acc20: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x1acc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
label_1acc24:
    // 0x1acc24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1acc24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1acc28:
    // 0x1acc28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1acc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acc2c:
    // 0x1acc2c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1acc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1acc30:
    // 0x1acc30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1acc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1acc34:
    // 0x1acc34: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1acc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acc38:
    // 0x1acc38: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1acc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1acc3c:
    // 0x1acc3c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1acc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acc40:
    // 0x1acc40: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1acc40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1acc44:
    // 0x1acc44: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1acc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acc48:
    // 0x1acc48: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1acc48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1acc4c:
    // 0x1acc4c: 0xc0b7264  jal         func_2DC990
label_1acc50:
    if (ctx->pc == 0x1ACC50u) {
        ctx->pc = 0x1ACC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC4Cu;
        // 0x1acc50: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC54u;
        goto label_1acc54;
    }
    ctx->pc = 0x1ACC4Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC54u);
    ctx->pc = 0x1ACC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC4Cu;
    // 0x1acc50: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x1ACC4Cu, 0x1ACC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC54u;
label_1acc54:
    // 0x1acc54: 0xc08fde2  jal         func_23F788
label_1acc58:
    if (ctx->pc == 0x1ACC58u) {
        ctx->pc = 0x1ACC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC54u;
        // 0x1acc58: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC5Cu;
        goto label_1acc5c;
    }
    ctx->pc = 0x1ACC54u;
    SET_GPR_U32(ctx, 31, 0x1ACC5Cu);
    ctx->pc = 0x1ACC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC54u;
    // 0x1acc58: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1ACC54u, 0x1ACC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC5Cu;
label_1acc5c:
    // 0x1acc5c: 0xc094224  jal         func_250890
label_1acc60:
    if (ctx->pc == 0x1ACC60u) {
        ctx->pc = 0x1ACC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC5Cu;
        // 0x1acc60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC64u;
        goto label_1acc64;
    }
    ctx->pc = 0x1ACC5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC64u);
    ctx->pc = 0x1ACC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC5Cu;
    // 0x1acc60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x1ACC5Cu, 0x1ACC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC64u;
label_1acc64:
    // 0x1acc64: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1acc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acc68:
    // 0x1acc68: 0xc08961e  jal         func_225878
label_1acc6c:
    if (ctx->pc == 0x1ACC6Cu) {
        ctx->pc = 0x1ACC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC68u;
        // 0x1acc6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC70u;
        goto label_1acc70;
    }
    ctx->pc = 0x1ACC68u;
    SET_GPR_U32(ctx, 31, 0x1ACC70u);
    ctx->pc = 0x1ACC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC68u;
    // 0x1acc6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225878u, 0x1ACC68u, 0x1ACC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC70u;
label_1acc70:
    // 0x1acc70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acc74:
    // 0x1acc74: 0xae6200d4  sw          $v0, 0xD4($s3)
    ctx->pc = 0x1acc74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
label_1acc78:
    // 0x1acc78: 0xc08fd00  jal         func_23F400
label_1acc7c:
    if (ctx->pc == 0x1ACC7Cu) {
        ctx->pc = 0x1ACC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC78u;
        // 0x1acc7c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC80u;
        goto label_1acc80;
    }
    ctx->pc = 0x1ACC78u;
    SET_GPR_U32(ctx, 31, 0x1ACC80u);
    ctx->pc = 0x1ACC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC78u;
    // 0x1acc7c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F400u, 0x1ACC78u, 0x1ACC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC80u;
label_1acc80:
    // 0x1acc80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1acc84:
    if (ctx->pc == 0x1ACC84u) {
        ctx->pc = 0x1ACC88u;
        goto label_1acc88;
    }
    ctx->pc = 0x1ACC80u;
    {
        const bool branch_taken_0x1acc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc80) {
            ctx->pc = 0x1ACC9Cu;
            goto label_1acc9c;
        }
    }
    ctx->pc = 0x1ACC88u;
label_1acc88:
    // 0x1acc88: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1acc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1acc8c:
    // 0x1acc8c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1acc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1acc90:
    // 0x1acc90: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1acc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1acc94:
    // 0x1acc94: 0x40f809  jalr        $v0
label_1acc98:
    if (ctx->pc == 0x1ACC98u) {
        ctx->pc = 0x1ACC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC94u;
        // 0x1acc98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC9Cu;
        goto label_1acc9c;
    }
    ctx->pc = 0x1ACC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACC9Cu);
        ctx->pc = 0x1ACC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC94u;
        // 0x1acc98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACC94u, 0x1ACC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACC9Cu;
label_1acc9c:
    // 0x1acc9c: 0xc08fde2  jal         func_23F788
label_1acca0:
    if (ctx->pc == 0x1ACCA0u) {
        ctx->pc = 0x1ACCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC9Cu;
        // 0x1acca0: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCA4u;
        goto label_1acca4;
    }
    ctx->pc = 0x1ACC9Cu;
    SET_GPR_U32(ctx, 31, 0x1ACCA4u);
    ctx->pc = 0x1ACCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC9Cu;
    // 0x1acca0: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1ACC9Cu, 0x1ACCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCA4u;
label_1acca4:
    // 0x1acca4: 0xc094180  jal         func_250600
label_1acca8:
    if (ctx->pc == 0x1ACCA8u) {
        ctx->pc = 0x1ACCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCA4u;
        // 0x1acca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCACu;
        goto label_1accac;
    }
    ctx->pc = 0x1ACCA4u;
    SET_GPR_U32(ctx, 31, 0x1ACCACu);
    ctx->pc = 0x1ACCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCA4u;
    // 0x1acca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250600u, 0x1ACCA4u, 0x1ACCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCACu;
label_1accac:
    // 0x1accac: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1accacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1accb0:
    // 0x1accb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1accb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1accb4:
    // 0x1accb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1accb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1accb8:
    // 0x1accb8: 0x0  nop
    ctx->pc = 0x1accb8u;
    // NOP
label_1accbc:
    // 0x1accbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1accbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1accc0:
    // 0x1accc0: 0x0  nop
    ctx->pc = 0x1accc0u;
    // NOP
label_1accc4:
    // 0x1accc4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1accc8:
    if (ctx->pc == 0x1ACCC8u) {
        ctx->pc = 0x1ACCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCC4u;
        // 0x1accc8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCCCu;
        goto label_1acccc;
    }
    ctx->pc = 0x1ACCC4u;
    {
        const bool branch_taken_0x1accc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCC4u;
        // 0x1accc8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1accc4) {
            ctx->pc = 0x1ACD00u;
            goto label_1acd00;
        }
    }
    ctx->pc = 0x1ACCCCu;
label_1acccc:
    // 0x1acccc: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1accccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1accd0:
    // 0x1accd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1accd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1accd4:
    // 0x1accd4: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x1accd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_1accd8:
    // 0x1accd8: 0x8c4500d4  lw          $a1, 0xD4($v0)
    ctx->pc = 0x1accd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1accdc:
    // 0x1accdc: 0xc07f4c2  jal         func_1FD308
label_1acce0:
    if (ctx->pc == 0x1ACCE0u) {
        ctx->pc = 0x1ACCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCDCu;
        // 0x1acce0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCE4u;
        goto label_1acce4;
    }
    ctx->pc = 0x1ACCDCu;
    SET_GPR_U32(ctx, 31, 0x1ACCE4u);
    ctx->pc = 0x1ACCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCDCu;
    // 0x1acce0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1ACCDCu, 0x1ACCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCE4u;
label_1acce4:
    // 0x1acce4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1acce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1acce8:
    // 0x1acce8: 0x8e260148  lw          $a2, 0x148($s1)
    ctx->pc = 0x1acce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1accec:
    // 0x1accec: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_1accf0:
    // 0x1accf0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1accf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1accf4:
    // 0x1accf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1accf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1accf8:
    // 0x1accf8: 0xc046642  jal         func_119908
label_1accfc:
    if (ctx->pc == 0x1ACCFCu) {
        ctx->pc = 0x1ACCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCF8u;
        // 0x1accfc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD00u;
        goto label_1acd00;
    }
    ctx->pc = 0x1ACCF8u;
    SET_GPR_U32(ctx, 31, 0x1ACD00u);
    ctx->pc = 0x1ACCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCF8u;
    // 0x1accfc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x1ACCF8u, 0x1ACD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD00u;
label_1acd00:
    // 0x1acd00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1acd00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1acd04:
    // 0x1acd04: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1acd04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1acd08:
    // 0x1acd08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1acd08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1acd0c:
    // 0x1acd0c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1acd0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1acd10:
    // 0x1acd10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1acd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1acd14:
    // 0x1acd14: 0x3e00008  jr          $ra
label_1acd18:
    if (ctx->pc == 0x1ACD18u) {
        ctx->pc = 0x1ACD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD14u;
        // 0x1acd18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD1Cu;
        goto label_1acd1c;
    }
    ctx->pc = 0x1ACD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD14u;
        // 0x1acd18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD1Cu;
label_1acd1c:
    // 0x1acd1c: 0x0  nop
    ctx->pc = 0x1acd1cu;
    // NOP
    ctx->pc = 0x1acd20u;
}
