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

// Function: sub_0026F888
// Address: 0x26f888 - 0x26fbe0
void sub_0026F888_0x26f888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F888_0x26f888");
#endif

    switch (ctx->pc) {
        case 0x26f888u: goto label_26f888;
        case 0x26f88cu: goto label_26f88c;
        case 0x26f890u: goto label_26f890;
        case 0x26f894u: goto label_26f894;
        case 0x26f898u: goto label_26f898;
        case 0x26f89cu: goto label_26f89c;
        case 0x26f8a0u: goto label_26f8a0;
        case 0x26f8a4u: goto label_26f8a4;
        case 0x26f8a8u: goto label_26f8a8;
        case 0x26f8acu: goto label_26f8ac;
        case 0x26f8b0u: goto label_26f8b0;
        case 0x26f8b4u: goto label_26f8b4;
        case 0x26f8b8u: goto label_26f8b8;
        case 0x26f8bcu: goto label_26f8bc;
        case 0x26f8c0u: goto label_26f8c0;
        case 0x26f8c4u: goto label_26f8c4;
        case 0x26f8c8u: goto label_26f8c8;
        case 0x26f8ccu: goto label_26f8cc;
        case 0x26f8d0u: goto label_26f8d0;
        case 0x26f8d4u: goto label_26f8d4;
        case 0x26f8d8u: goto label_26f8d8;
        case 0x26f8dcu: goto label_26f8dc;
        case 0x26f8e0u: goto label_26f8e0;
        case 0x26f8e4u: goto label_26f8e4;
        case 0x26f8e8u: goto label_26f8e8;
        case 0x26f8ecu: goto label_26f8ec;
        case 0x26f8f0u: goto label_26f8f0;
        case 0x26f8f4u: goto label_26f8f4;
        case 0x26f8f8u: goto label_26f8f8;
        case 0x26f8fcu: goto label_26f8fc;
        case 0x26f900u: goto label_26f900;
        case 0x26f904u: goto label_26f904;
        case 0x26f908u: goto label_26f908;
        case 0x26f90cu: goto label_26f90c;
        case 0x26f910u: goto label_26f910;
        case 0x26f914u: goto label_26f914;
        case 0x26f918u: goto label_26f918;
        case 0x26f91cu: goto label_26f91c;
        case 0x26f920u: goto label_26f920;
        case 0x26f924u: goto label_26f924;
        case 0x26f928u: goto label_26f928;
        case 0x26f92cu: goto label_26f92c;
        case 0x26f930u: goto label_26f930;
        case 0x26f934u: goto label_26f934;
        case 0x26f938u: goto label_26f938;
        case 0x26f93cu: goto label_26f93c;
        case 0x26f940u: goto label_26f940;
        case 0x26f944u: goto label_26f944;
        case 0x26f948u: goto label_26f948;
        case 0x26f94cu: goto label_26f94c;
        case 0x26f950u: goto label_26f950;
        case 0x26f954u: goto label_26f954;
        case 0x26f958u: goto label_26f958;
        case 0x26f95cu: goto label_26f95c;
        case 0x26f960u: goto label_26f960;
        case 0x26f964u: goto label_26f964;
        case 0x26f968u: goto label_26f968;
        case 0x26f96cu: goto label_26f96c;
        case 0x26f970u: goto label_26f970;
        case 0x26f974u: goto label_26f974;
        case 0x26f978u: goto label_26f978;
        case 0x26f97cu: goto label_26f97c;
        case 0x26f980u: goto label_26f980;
        case 0x26f984u: goto label_26f984;
        case 0x26f988u: goto label_26f988;
        case 0x26f98cu: goto label_26f98c;
        case 0x26f990u: goto label_26f990;
        case 0x26f994u: goto label_26f994;
        case 0x26f998u: goto label_26f998;
        case 0x26f99cu: goto label_26f99c;
        case 0x26f9a0u: goto label_26f9a0;
        case 0x26f9a4u: goto label_26f9a4;
        case 0x26f9a8u: goto label_26f9a8;
        case 0x26f9acu: goto label_26f9ac;
        case 0x26f9b0u: goto label_26f9b0;
        case 0x26f9b4u: goto label_26f9b4;
        case 0x26f9b8u: goto label_26f9b8;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9c0u: goto label_26f9c0;
        case 0x26f9c4u: goto label_26f9c4;
        case 0x26f9c8u: goto label_26f9c8;
        case 0x26f9ccu: goto label_26f9cc;
        case 0x26f9d0u: goto label_26f9d0;
        case 0x26f9d4u: goto label_26f9d4;
        case 0x26f9d8u: goto label_26f9d8;
        case 0x26f9dcu: goto label_26f9dc;
        case 0x26f9e0u: goto label_26f9e0;
        case 0x26f9e4u: goto label_26f9e4;
        case 0x26f9e8u: goto label_26f9e8;
        case 0x26f9ecu: goto label_26f9ec;
        case 0x26f9f0u: goto label_26f9f0;
        case 0x26f9f4u: goto label_26f9f4;
        case 0x26f9f8u: goto label_26f9f8;
        case 0x26f9fcu: goto label_26f9fc;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa04u: goto label_26fa04;
        case 0x26fa08u: goto label_26fa08;
        case 0x26fa0cu: goto label_26fa0c;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa14u: goto label_26fa14;
        case 0x26fa18u: goto label_26fa18;
        case 0x26fa1cu: goto label_26fa1c;
        case 0x26fa20u: goto label_26fa20;
        case 0x26fa24u: goto label_26fa24;
        case 0x26fa28u: goto label_26fa28;
        case 0x26fa2cu: goto label_26fa2c;
        case 0x26fa30u: goto label_26fa30;
        case 0x26fa34u: goto label_26fa34;
        case 0x26fa38u: goto label_26fa38;
        case 0x26fa3cu: goto label_26fa3c;
        case 0x26fa40u: goto label_26fa40;
        case 0x26fa44u: goto label_26fa44;
        case 0x26fa48u: goto label_26fa48;
        case 0x26fa4cu: goto label_26fa4c;
        case 0x26fa50u: goto label_26fa50;
        case 0x26fa54u: goto label_26fa54;
        case 0x26fa58u: goto label_26fa58;
        case 0x26fa5cu: goto label_26fa5c;
        case 0x26fa60u: goto label_26fa60;
        case 0x26fa64u: goto label_26fa64;
        case 0x26fa68u: goto label_26fa68;
        case 0x26fa6cu: goto label_26fa6c;
        case 0x26fa70u: goto label_26fa70;
        case 0x26fa74u: goto label_26fa74;
        case 0x26fa78u: goto label_26fa78;
        case 0x26fa7cu: goto label_26fa7c;
        case 0x26fa80u: goto label_26fa80;
        case 0x26fa84u: goto label_26fa84;
        case 0x26fa88u: goto label_26fa88;
        case 0x26fa8cu: goto label_26fa8c;
        case 0x26fa90u: goto label_26fa90;
        case 0x26fa94u: goto label_26fa94;
        case 0x26fa98u: goto label_26fa98;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26faa0u: goto label_26faa0;
        case 0x26faa4u: goto label_26faa4;
        case 0x26faa8u: goto label_26faa8;
        case 0x26faacu: goto label_26faac;
        case 0x26fab0u: goto label_26fab0;
        case 0x26fab4u: goto label_26fab4;
        case 0x26fab8u: goto label_26fab8;
        case 0x26fabcu: goto label_26fabc;
        case 0x26fac0u: goto label_26fac0;
        case 0x26fac4u: goto label_26fac4;
        case 0x26fac8u: goto label_26fac8;
        case 0x26faccu: goto label_26facc;
        case 0x26fad0u: goto label_26fad0;
        case 0x26fad4u: goto label_26fad4;
        case 0x26fad8u: goto label_26fad8;
        case 0x26fadcu: goto label_26fadc;
        case 0x26fae0u: goto label_26fae0;
        case 0x26fae4u: goto label_26fae4;
        case 0x26fae8u: goto label_26fae8;
        case 0x26faecu: goto label_26faec;
        case 0x26faf0u: goto label_26faf0;
        case 0x26faf4u: goto label_26faf4;
        case 0x26faf8u: goto label_26faf8;
        case 0x26fafcu: goto label_26fafc;
        case 0x26fb00u: goto label_26fb00;
        case 0x26fb04u: goto label_26fb04;
        case 0x26fb08u: goto label_26fb08;
        case 0x26fb0cu: goto label_26fb0c;
        case 0x26fb10u: goto label_26fb10;
        case 0x26fb14u: goto label_26fb14;
        case 0x26fb18u: goto label_26fb18;
        case 0x26fb1cu: goto label_26fb1c;
        case 0x26fb20u: goto label_26fb20;
        case 0x26fb24u: goto label_26fb24;
        case 0x26fb28u: goto label_26fb28;
        case 0x26fb2cu: goto label_26fb2c;
        case 0x26fb30u: goto label_26fb30;
        case 0x26fb34u: goto label_26fb34;
        case 0x26fb38u: goto label_26fb38;
        case 0x26fb3cu: goto label_26fb3c;
        case 0x26fb40u: goto label_26fb40;
        case 0x26fb44u: goto label_26fb44;
        case 0x26fb48u: goto label_26fb48;
        case 0x26fb4cu: goto label_26fb4c;
        case 0x26fb50u: goto label_26fb50;
        case 0x26fb54u: goto label_26fb54;
        case 0x26fb58u: goto label_26fb58;
        case 0x26fb5cu: goto label_26fb5c;
        case 0x26fb60u: goto label_26fb60;
        case 0x26fb64u: goto label_26fb64;
        case 0x26fb68u: goto label_26fb68;
        case 0x26fb6cu: goto label_26fb6c;
        case 0x26fb70u: goto label_26fb70;
        case 0x26fb74u: goto label_26fb74;
        case 0x26fb78u: goto label_26fb78;
        case 0x26fb7cu: goto label_26fb7c;
        case 0x26fb80u: goto label_26fb80;
        case 0x26fb84u: goto label_26fb84;
        case 0x26fb88u: goto label_26fb88;
        case 0x26fb8cu: goto label_26fb8c;
        case 0x26fb90u: goto label_26fb90;
        case 0x26fb94u: goto label_26fb94;
        case 0x26fb98u: goto label_26fb98;
        case 0x26fb9cu: goto label_26fb9c;
        case 0x26fba0u: goto label_26fba0;
        case 0x26fba4u: goto label_26fba4;
        case 0x26fba8u: goto label_26fba8;
        case 0x26fbacu: goto label_26fbac;
        case 0x26fbb0u: goto label_26fbb0;
        case 0x26fbb4u: goto label_26fbb4;
        case 0x26fbb8u: goto label_26fbb8;
        case 0x26fbbcu: goto label_26fbbc;
        case 0x26fbc0u: goto label_26fbc0;
        case 0x26fbc4u: goto label_26fbc4;
        case 0x26fbc8u: goto label_26fbc8;
        case 0x26fbccu: goto label_26fbcc;
        case 0x26fbd0u: goto label_26fbd0;
        case 0x26fbd4u: goto label_26fbd4;
        case 0x26fbd8u: goto label_26fbd8;
        case 0x26fbdcu: goto label_26fbdc;
        default: break;
    }

    ctx->pc = 0x26f888u;

label_26f888:
    // 0x26f888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26f888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_26f88c:
    // 0x26f88c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f890:
    // 0x26f890: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26f890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_26f894:
    // 0x26f894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_26f898:
    // 0x26f898: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26f898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26f89c:
    // 0x26f89c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26f89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_26f8a0:
    // 0x26f8a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26f8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26f8a4:
    // 0x26f8a4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x26f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_26f8a8:
    // 0x26f8a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f8ac:
    // 0x26f8ac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x26f8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_26f8b0:
    // 0x26f8b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26f8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f8b4:
    // 0x26f8b4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x26f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_26f8b8:
    // 0x26f8b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_26f8bc:
    // 0x26f8bc: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x26f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_26f8c0:
    // 0x26f8c0: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x26f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_26f8c4:
    // 0x26f8c4: 0x40f809  jalr        $v0
label_26f8c8:
    if (ctx->pc == 0x26F8C8u) {
        ctx->pc = 0x26F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C4u;
        // 0x26f8c8: 0x8e5300b8  lw          $s3, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8CCu;
        goto label_26f8cc;
    }
    ctx->pc = 0x26F8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F8CCu);
        ctx->pc = 0x26F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C4u;
        // 0x26f8c8: 0x8e5300b8  lw          $s3, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F8C4u, 0x26F8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F8CCu;
label_26f8cc:
    // 0x26f8cc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_26f8d0:
    if (ctx->pc == 0x26F8D0u) {
        ctx->pc = 0x26F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8CCu;
        // 0x26f8d0: 0x8e420220  lw          $v0, 0x220($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8D4u;
        goto label_26f8d4;
    }
    ctx->pc = 0x26F8CCu;
    {
        const bool branch_taken_0x26f8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f8cc) {
            ctx->pc = 0x26F8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F8CCu;
            // 0x26f8d0: 0x8e420220  lw          $v0, 0x220($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F920u;
            goto label_26f920;
        }
    }
    ctx->pc = 0x26F8D4u;
label_26f8d4:
    // 0x26f8d4: 0x266301bc  addiu       $v1, $s3, 0x1BC
    ctx->pc = 0x26f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
label_26f8d8:
    // 0x26f8d8: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x26f8d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_26f8dc:
    // 0x26f8dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_26f8e0:
    if (ctx->pc == 0x26F8E0u) {
        ctx->pc = 0x26F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8DCu;
        // 0x26f8e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8E4u;
        goto label_26f8e4;
    }
    ctx->pc = 0x26F8DCu;
    {
        const bool branch_taken_0x26f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8DCu;
        // 0x26f8e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8dc) {
            ctx->pc = 0x26F8ECu;
            goto label_26f8ec;
        }
    }
    ctx->pc = 0x26F8E4u;
label_26f8e4:
    // 0x26f8e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_26f8e8:
    if (ctx->pc == 0x26F8E8u) {
        ctx->pc = 0x26F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8E4u;
        // 0x26f8e8: 0x8e6201bc  lw          $v0, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8ECu;
        goto label_26f8ec;
    }
    ctx->pc = 0x26F8E4u;
    {
        const bool branch_taken_0x26f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8E4u;
        // 0x26f8e8: 0x8e6201bc  lw          $v0, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8e4) {
            ctx->pc = 0x26F8F0u;
            goto label_26f8f0;
        }
    }
    ctx->pc = 0x26F8ECu;
label_26f8ec:
    // 0x26f8ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f8f0:
    // 0x26f8f0: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
label_26f8f4:
    if (ctx->pc == 0x26F8F4u) {
        ctx->pc = 0x26F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8F0u;
        // 0x26f8f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8F8u;
        goto label_26f8f8;
    }
    ctx->pc = 0x26F8F0u;
    {
        const bool branch_taken_0x26f8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8F0u;
        // 0x26f8f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8f0) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26F8F8u;
label_26f8f8:
    // 0x26f8f8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x26f8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_26f8fc:
    // 0x26f8fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26f900:
    if (ctx->pc == 0x26F900u) {
        ctx->pc = 0x26F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8FCu;
        // 0x26f900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F904u;
        goto label_26f904;
    }
    ctx->pc = 0x26F8FCu;
    {
        const bool branch_taken_0x26f8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8FCu;
        // 0x26f900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8fc) {
            ctx->pc = 0x26F908u;
            goto label_26f908;
        }
    }
    ctx->pc = 0x26F904u;
label_26f904:
    // 0x26f904: 0x8e6401bc  lw          $a0, 0x1BC($s3)
    ctx->pc = 0x26f904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
label_26f908:
    // 0x26f908: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26f908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_26f90c:
    // 0x26f90c: 0xc0efb95  jal         func_3BEE54
label_26f910:
    if (ctx->pc == 0x26F910u) {
        ctx->pc = 0x26F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F90Cu;
        // 0x26f910: 0x24a57c78  addiu       $a1, $a1, 0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F914u;
        goto label_26f914;
    }
    ctx->pc = 0x26F90Cu;
    SET_GPR_U32(ctx, 31, 0x26F914u);
    ctx->pc = 0x26F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F90Cu;
    // 0x26f910: 0x24a57c78  addiu       $a1, $a1, 0x7C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x26F90Cu, 0x26F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F914u;
label_26f914:
    // 0x26f914: 0x144000a9  bnez        $v0, . + 4 + (0xA9 << 2)
label_26f918:
    if (ctx->pc == 0x26F918u) {
        ctx->pc = 0x26F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F914u;
        // 0x26f918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F91Cu;
        goto label_26f91c;
    }
    ctx->pc = 0x26F914u;
    {
        const bool branch_taken_0x26f914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F914u;
        // 0x26f918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f914) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26F91Cu;
label_26f91c:
    // 0x26f91c: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x26f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_26f920:
    // 0x26f920: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_26f924:
    if (ctx->pc == 0x26F924u) {
        ctx->pc = 0x26F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F920u;
        // 0x26f924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F928u;
        goto label_26f928;
    }
    ctx->pc = 0x26F920u;
    {
        const bool branch_taken_0x26f920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F920u;
        // 0x26f924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f920) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26F928u;
label_26f928:
    // 0x26f928: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x26f928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_26f92c:
    // 0x26f92c: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x26f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_26f930:
    // 0x26f930: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x26f930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_26f934:
    // 0x26f934: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26f934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26f938:
    // 0x26f938: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_26f93c:
    if (ctx->pc == 0x26F93Cu) {
        ctx->pc = 0x26F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F938u;
        // 0x26f93c: 0xae510220  sw          $s1, 0x220($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F940u;
        goto label_26f940;
    }
    ctx->pc = 0x26F938u;
    {
        const bool branch_taken_0x26f938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f938) {
            ctx->pc = 0x26F93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F938u;
            // 0x26f93c: 0xae510220  sw          $s1, 0x220($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F940u;
            goto label_26f940;
        }
    }
    ctx->pc = 0x26F940u;
label_26f940:
    // 0x26f940: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x26f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_26f944:
    // 0x26f944: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x26f944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_26f948:
    // 0x26f948: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x26f948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_26f94c:
    // 0x26f94c: 0x1064009b  beq         $v1, $a0, . + 4 + (0x9B << 2)
label_26f950:
    if (ctx->pc == 0x26F950u) {
        ctx->pc = 0x26F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F94Cu;
        // 0x26f950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F954u;
        goto label_26f954;
    }
    ctx->pc = 0x26F94Cu;
    {
        const bool branch_taken_0x26f94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F94Cu;
        // 0x26f950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f94c) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26F954u;
label_26f954:
    // 0x26f954: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x26f954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_26f958:
    // 0x26f958: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x26f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_26f95c:
    // 0x26f95c: 0x40f809  jalr        $v0
label_26f960:
    if (ctx->pc == 0x26F960u) {
        ctx->pc = 0x26F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F95Cu;
        // 0x26f960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F964u;
        goto label_26f964;
    }
    ctx->pc = 0x26F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F964u);
        ctx->pc = 0x26F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F95Cu;
        // 0x26f960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F95Cu, 0x26F964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F964u;
label_26f964:
    // 0x26f964: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x26f964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_26f968:
    // 0x26f968: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_26f96c:
    if (ctx->pc == 0x26F96Cu) {
        ctx->pc = 0x26F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F968u;
        // 0x26f96c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F970u;
        goto label_26f970;
    }
    ctx->pc = 0x26F968u;
    {
        const bool branch_taken_0x26f968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26f968) {
            ctx->pc = 0x26F96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F968u;
            // 0x26f96c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F990u;
            goto label_26f990;
        }
    }
    ctx->pc = 0x26F970u;
label_26f970:
    // 0x26f970: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x26f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_26f974:
    // 0x26f974: 0xae510220  sw          $s1, 0x220($s2)
    ctx->pc = 0x26f974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 17));
label_26f978:
    // 0x26f978: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x26f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_26f97c:
    // 0x26f97c: 0x60f809  jalr        $v1
label_26f980:
    if (ctx->pc == 0x26F980u) {
        ctx->pc = 0x26F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F97Cu;
        // 0x26f980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F984u;
        goto label_26f984;
    }
    ctx->pc = 0x26F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26F984u);
        ctx->pc = 0x26F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F97Cu;
        // 0x26f980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F97Cu, 0x26F984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F984u;
label_26f984:
    // 0x26f984: 0xae400220  sw          $zero, 0x220($s2)
    ctx->pc = 0x26f984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 0));
label_26f988:
    // 0x26f988: 0x1000008c  b           . + 4 + (0x8C << 2)
label_26f98c:
    if (ctx->pc == 0x26F98Cu) {
        ctx->pc = 0x26F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F988u;
        // 0x26f98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F990u;
        goto label_26f990;
    }
    ctx->pc = 0x26F988u;
    {
        const bool branch_taken_0x26f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F988u;
        // 0x26f98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f988) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26F990u;
label_26f990:
    // 0x26f990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f994:
    // 0x26f994: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x26f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_26f998:
    // 0x26f998: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26f998u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f99c:
    // 0x26f99c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26f99cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f9a0:
    // 0x26f9a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26f9a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f9a4:
    // 0x26f9a4: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x26f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_26f9a8:
    // 0x26f9a8: 0x40f809  jalr        $v0
label_26f9ac:
    if (ctx->pc == 0x26F9ACu) {
        ctx->pc = 0x26F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9A8u;
        // 0x26f9ac: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9B0u;
        goto label_26f9b0;
    }
    ctx->pc = 0x26F9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F9B0u);
        ctx->pc = 0x26F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9A8u;
        // 0x26f9ac: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F9A8u, 0x26F9B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F9B0u;
label_26f9b0:
    // 0x26f9b0: 0xc66c01a4  lwc1        $f12, 0x1A4($s3)
    ctx->pc = 0x26f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26f9b4:
    // 0x26f9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f9b8:
    // 0x26f9b8: 0xc09bbca  jal         func_26EF28
label_26f9bc:
    if (ctx->pc == 0x26F9BCu) {
        ctx->pc = 0x26F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9B8u;
        // 0x26f9bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9C0u;
        goto label_26f9c0;
    }
    ctx->pc = 0x26F9B8u;
    SET_GPR_U32(ctx, 31, 0x26F9C0u);
    ctx->pc = 0x26F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F9B8u;
    // 0x26f9bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF28u, 0x26F9B8u, 0x26F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9C0u;
label_26f9c0:
    // 0x26f9c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_26f9c4:
    if (ctx->pc == 0x26F9C4u) {
        ctx->pc = 0x26F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9C0u;
        // 0x26f9c4: 0x92620210  lbu         $v0, 0x210($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9C8u;
        goto label_26f9c8;
    }
    ctx->pc = 0x26F9C0u;
    {
        const bool branch_taken_0x26f9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f9c0) {
            ctx->pc = 0x26F9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F9C0u;
            // 0x26f9c4: 0x92620210  lbu         $v0, 0x210($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F9D0u;
            goto label_26f9d0;
        }
    }
    ctx->pc = 0x26F9C8u;
label_26f9c8:
    // 0x26f9c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_26f9cc:
    if (ctx->pc == 0x26F9CCu) {
        ctx->pc = 0x26F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9C8u;
        // 0x26f9cc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9D0u;
        goto label_26f9d0;
    }
    ctx->pc = 0x26F9C8u;
    {
        const bool branch_taken_0x26f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9C8u;
        // 0x26f9cc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9c8) {
            ctx->pc = 0x26F9FCu;
            goto label_26f9fc;
        }
    }
    ctx->pc = 0x26F9D0u;
label_26f9d0:
    // 0x26f9d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26f9d4:
    if (ctx->pc == 0x26F9D4u) {
        ctx->pc = 0x26F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9D0u;
        // 0x26f9d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9D8u;
        goto label_26f9d8;
    }
    ctx->pc = 0x26F9D0u;
    {
        const bool branch_taken_0x26f9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9D0u;
        // 0x26f9d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9d0) {
            ctx->pc = 0x26F9FCu;
            goto label_26f9fc;
        }
    }
    ctx->pc = 0x26F9D8u;
label_26f9d8:
    // 0x26f9d8: 0xc09c36e  jal         func_270DB8
label_26f9dc:
    if (ctx->pc == 0x26F9DCu) {
        ctx->pc = 0x26F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9D8u;
        // 0x26f9dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9E0u;
        goto label_26f9e0;
    }
    ctx->pc = 0x26F9D8u;
    SET_GPR_U32(ctx, 31, 0x26F9E0u);
    ctx->pc = 0x26F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F9D8u;
    // 0x26f9dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB8u, 0x26F9D8u, 0x26F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9E0u;
label_26f9e0:
    // 0x26f9e0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26f9e4:
    // 0x26f9e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26f9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26f9e8:
    // 0x26f9e8: 0xc66c01a4  lwc1        $f12, 0x1A4($s3)
    ctx->pc = 0x26f9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26f9ec:
    // 0x26f9ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f9f0:
    // 0x26f9f0: 0xc09bbca  jal         func_26EF28
label_26f9f4:
    if (ctx->pc == 0x26F9F4u) {
        ctx->pc = 0x26F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9F0u;
        // 0x26f9f4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9F8u;
        goto label_26f9f8;
    }
    ctx->pc = 0x26F9F0u;
    SET_GPR_U32(ctx, 31, 0x26F9F8u);
    ctx->pc = 0x26F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F9F0u;
    // 0x26f9f4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF28u, 0x26F9F0u, 0x26F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9F8u;
label_26f9f8:
    // 0x26f9f8: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x26f9f8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26f9fc:
    // 0x26f9fc: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_26fa00:
    if (ctx->pc == 0x26FA00u) {
        ctx->pc = 0x26FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9FCu;
        // 0x26fa00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA04u;
        goto label_26fa04;
    }
    ctx->pc = 0x26F9FCu;
    {
        const bool branch_taken_0x26f9fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9FCu;
        // 0x26fa00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9fc) {
            ctx->pc = 0x26FA14u;
            goto label_26fa14;
        }
    }
    ctx->pc = 0x26FA04u;
label_26fa04:
    // 0x26fa04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26fa04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fa08:
    // 0x26fa08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26fa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fa0c:
    // 0x26fa0c: 0x10000009  b           . + 4 + (0x9 << 2)
label_26fa10:
    if (ctx->pc == 0x26FA10u) {
        ctx->pc = 0x26FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA0Cu;
        // 0x26fa10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA14u;
        goto label_26fa14;
    }
    ctx->pc = 0x26FA0Cu;
    {
        const bool branch_taken_0x26fa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA0Cu;
        // 0x26fa10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa0c) {
            ctx->pc = 0x26FA34u;
            goto label_26fa34;
        }
    }
    ctx->pc = 0x26FA14u;
label_26fa14:
    // 0x26fa14: 0x5280000c  beql        $s4, $zero, . + 4 + (0xC << 2)
label_26fa18:
    if (ctx->pc == 0x26FA18u) {
        ctx->pc = 0x26FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA14u;
        // 0x26fa18: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA1Cu;
        goto label_26fa1c;
    }
    ctx->pc = 0x26FA14u;
    {
        const bool branch_taken_0x26fa14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa14) {
            ctx->pc = 0x26FA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FA14u;
            // 0x26fa18: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FA48u;
            goto label_26fa48;
        }
    }
    ctx->pc = 0x26FA1Cu;
label_26fa1c:
    // 0x26fa1c: 0x92620210  lbu         $v0, 0x210($s3)
    ctx->pc = 0x26fa1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
label_26fa20:
    // 0x26fa20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26fa24:
    if (ctx->pc == 0x26FA24u) {
        ctx->pc = 0x26FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA20u;
        // 0x26fa24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA28u;
        goto label_26fa28;
    }
    ctx->pc = 0x26FA20u;
    {
        const bool branch_taken_0x26fa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA20u;
        // 0x26fa24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa20) {
            ctx->pc = 0x26FA44u;
            goto label_26fa44;
        }
    }
    ctx->pc = 0x26FA28u;
label_26fa28:
    // 0x26fa28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26fa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fa2c:
    // 0x26fa2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26fa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fa30:
    // 0x26fa30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26fa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fa34:
    // 0x26fa34: 0xc09bd3e  jal         func_26F4F8
label_26fa38:
    if (ctx->pc == 0x26FA38u) {
        ctx->pc = 0x26FA3Cu;
        goto label_26fa3c;
    }
    ctx->pc = 0x26FA34u;
    SET_GPR_U32(ctx, 31, 0x26FA3Cu);
    ctx->pc = 0x26F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F4F8u, 0x26FA34u, 0x26FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA3Cu;
label_26fa3c:
    // 0x26fa3c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_26fa40:
    if (ctx->pc == 0x26FA40u) {
        ctx->pc = 0x26FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA3Cu;
        // 0x26fa40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA44u;
        goto label_26fa44;
    }
    ctx->pc = 0x26FA3Cu;
    {
        const bool branch_taken_0x26fa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA3Cu;
        // 0x26fa40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa3c) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26FA44u;
label_26fa44:
    // 0x26fa44: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x26fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_26fa48:
    // 0x26fa48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fa4c:
    // 0x26fa4c: 0x8e420240  lw          $v0, 0x240($s2)
    ctx->pc = 0x26fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 576)));
label_26fa50:
    // 0x26fa50: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_26fa54:
    if (ctx->pc == 0x26FA54u) {
        ctx->pc = 0x26FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA50u;
        // 0x26fa54: 0x8c90014c  lw          $s0, 0x14C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA58u;
        goto label_26fa58;
    }
    ctx->pc = 0x26FA50u;
    {
        const bool branch_taken_0x26fa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA50u;
        // 0x26fa54: 0x8c90014c  lw          $s0, 0x14C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa50) {
            ctx->pc = 0x26FA68u;
            goto label_26fa68;
        }
    }
    ctx->pc = 0x26FA58u;
label_26fa58:
    // 0x26fa58: 0xc069bba  jal         func_1A6EE8
label_26fa5c:
    if (ctx->pc == 0x26FA5Cu) {
        ctx->pc = 0x26FA60u;
        goto label_26fa60;
    }
    ctx->pc = 0x26FA58u;
    SET_GPR_U32(ctx, 31, 0x26FA60u);
    ctx->pc = 0x1A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6EE8u, 0x26FA58u, 0x26FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA60u;
label_26fa60:
    // 0x26fa60: 0x10000004  b           . + 4 + (0x4 << 2)
label_26fa64:
    if (ctx->pc == 0x26FA64u) {
        ctx->pc = 0x26FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA60u;
        // 0x26fa64: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA68u;
        goto label_26fa68;
    }
    ctx->pc = 0x26FA60u;
    {
        const bool branch_taken_0x26fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA60u;
        // 0x26fa64: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa60) {
            ctx->pc = 0x26FA74u;
            goto label_26fa74;
        }
    }
    ctx->pc = 0x26FA68u;
label_26fa68:
    // 0x26fa68: 0xc069b9e  jal         func_1A6E78
label_26fa6c:
    if (ctx->pc == 0x26FA6Cu) {
        ctx->pc = 0x26FA70u;
        goto label_26fa70;
    }
    ctx->pc = 0x26FA68u;
    SET_GPR_U32(ctx, 31, 0x26FA70u);
    ctx->pc = 0x1A6E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E78u, 0x26FA68u, 0x26FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA70u;
label_26fa70:
    // 0x26fa70: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x26fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_26fa74:
    // 0x26fa74: 0xc06a23e  jal         func_1A88F8
label_26fa78:
    if (ctx->pc == 0x26FA78u) {
        ctx->pc = 0x26FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA74u;
        // 0x26fa78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA7Cu;
        goto label_26fa7c;
    }
    ctx->pc = 0x26FA74u;
    SET_GPR_U32(ctx, 31, 0x26FA7Cu);
    ctx->pc = 0x26FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA74u;
    // 0x26fa78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x26FA74u, 0x26FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA7Cu;
label_26fa7c:
    // 0x26fa7c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x26fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_26fa80:
    // 0x26fa80: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x26fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_26fa84:
    // 0x26fa84: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x26fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_26fa88:
    // 0x26fa88: 0x50640013  beql        $v1, $a0, . + 4 + (0x13 << 2)
label_26fa8c:
    if (ctx->pc == 0x26FA8Cu) {
        ctx->pc = 0x26FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA88u;
        // 0x26fa8c: 0xae510220  sw          $s1, 0x220($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA90u;
        goto label_26fa90;
    }
    ctx->pc = 0x26FA88u;
    {
        const bool branch_taken_0x26fa88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x26fa88) {
            ctx->pc = 0x26FA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FA88u;
            // 0x26fa8c: 0xae510220  sw          $s1, 0x220($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FAD8u;
            goto label_26fad8;
        }
    }
    ctx->pc = 0x26FA90u;
label_26fa90:
    // 0x26fa90: 0xc08e528  jal         func_2394A0
label_26fa94:
    if (ctx->pc == 0x26FA94u) {
        ctx->pc = 0x26FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA90u;
        // 0x26fa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA98u;
        goto label_26fa98;
    }
    ctx->pc = 0x26FA90u;
    SET_GPR_U32(ctx, 31, 0x26FA98u);
    ctx->pc = 0x26FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA90u;
    // 0x26fa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x26FA90u, 0x26FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA98u;
label_26fa98:
    // 0x26fa98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fa9c:
    // 0x26fa9c: 0xc08e3b2  jal         func_238EC8
label_26faa0:
    if (ctx->pc == 0x26FAA0u) {
        ctx->pc = 0x26FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA9Cu;
        // 0x26faa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAA4u;
        goto label_26faa4;
    }
    ctx->pc = 0x26FA9Cu;
    SET_GPR_U32(ctx, 31, 0x26FAA4u);
    ctx->pc = 0x26FAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA9Cu;
    // 0x26faa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x26FA9Cu, 0x26FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAA4u;
label_26faa4:
    // 0x26faa4: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26faa8:
    // 0x26faa8: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x26faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_26faac:
    // 0x26faac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26faacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26fab0:
    // 0x26fab0: 0xc0763f2  jal         func_1D8FC8
label_26fab4:
    if (ctx->pc == 0x26FAB4u) {
        ctx->pc = 0x26FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAB0u;
        // 0x26fab4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAB8u;
        goto label_26fab8;
    }
    ctx->pc = 0x26FAB0u;
    SET_GPR_U32(ctx, 31, 0x26FAB8u);
    ctx->pc = 0x26FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAB0u;
    // 0x26fab4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x26FAB0u, 0x26FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAB8u;
label_26fab8:
    // 0x26fab8: 0xc0767f2  jal         func_1D9FC8
label_26fabc:
    if (ctx->pc == 0x26FABCu) {
        ctx->pc = 0x26FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAB8u;
        // 0x26fabc: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAC0u;
        goto label_26fac0;
    }
    ctx->pc = 0x26FAB8u;
    SET_GPR_U32(ctx, 31, 0x26FAC0u);
    ctx->pc = 0x26FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAB8u;
    // 0x26fabc: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x26FAB8u, 0x26FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAC0u;
label_26fac0:
    // 0x26fac0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x26fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_26fac4:
    // 0x26fac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26fac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fac8:
    // 0x26fac8: 0xc069712  jal         func_1A5C48
label_26facc:
    if (ctx->pc == 0x26FACCu) {
        ctx->pc = 0x26FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAC8u;
        // 0x26facc: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAD0u;
        goto label_26fad0;
    }
    ctx->pc = 0x26FAC8u;
    SET_GPR_U32(ctx, 31, 0x26FAD0u);
    ctx->pc = 0x26FACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAC8u;
    // 0x26facc: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x26FAC8u, 0x26FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAD0u;
label_26fad0:
    // 0x26fad0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_26fad4:
    if (ctx->pc == 0x26FAD4u) {
        ctx->pc = 0x26FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAD0u;
        // 0x26fad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAD8u;
        goto label_26fad8;
    }
    ctx->pc = 0x26FAD0u;
    {
        const bool branch_taken_0x26fad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAD0u;
        // 0x26fad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fad0) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26FAD8u;
label_26fad8:
    // 0x26fad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fadc:
    // 0x26fadc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x26fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_26fae0:
    // 0x26fae0: 0xc08fed2  jal         func_23FB48
label_26fae4:
    if (ctx->pc == 0x26FAE4u) {
        ctx->pc = 0x26FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAE0u;
        // 0x26fae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAE8u;
        goto label_26fae8;
    }
    ctx->pc = 0x26FAE0u;
    SET_GPR_U32(ctx, 31, 0x26FAE8u);
    ctx->pc = 0x26FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAE0u;
    // 0x26fae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x26FAE0u, 0x26FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAE8u;
label_26fae8:
    // 0x26fae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26faec:
    // 0x26faec: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x26faecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_26faf0:
    // 0x26faf0: 0xc08fed2  jal         func_23FB48
label_26faf4:
    if (ctx->pc == 0x26FAF4u) {
        ctx->pc = 0x26FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAF0u;
        // 0x26faf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAF8u;
        goto label_26faf8;
    }
    ctx->pc = 0x26FAF0u;
    SET_GPR_U32(ctx, 31, 0x26FAF8u);
    ctx->pc = 0x26FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAF0u;
    // 0x26faf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x26FAF0u, 0x26FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAF8u;
label_26faf8:
    // 0x26faf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26faf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fafc:
    // 0x26fafc: 0xc09bdce  jal         func_26F738
label_26fb00:
    if (ctx->pc == 0x26FB00u) {
        ctx->pc = 0x26FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAFCu;
        // 0x26fb00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB04u;
        goto label_26fb04;
    }
    ctx->pc = 0x26FAFCu;
    SET_GPR_U32(ctx, 31, 0x26FB04u);
    ctx->pc = 0x26FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAFCu;
    // 0x26fb00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F738u, 0x26FAFCu, 0x26FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB04u;
label_26fb04:
    // 0x26fb04: 0x266301e8  addiu       $v1, $s3, 0x1E8
    ctx->pc = 0x26fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 488));
label_26fb08:
    // 0x26fb08: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x26fb08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_26fb0c:
    // 0x26fb0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_26fb10:
    if (ctx->pc == 0x26FB10u) {
        ctx->pc = 0x26FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB0Cu;
        // 0x26fb10: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB14u;
        goto label_26fb14;
    }
    ctx->pc = 0x26FB0Cu;
    {
        const bool branch_taken_0x26fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB0Cu;
        // 0x26fb10: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb0c) {
            ctx->pc = 0x26FB1Cu;
            goto label_26fb1c;
        }
    }
    ctx->pc = 0x26FB14u;
label_26fb14:
    // 0x26fb14: 0x10000002  b           . + 4 + (0x2 << 2)
label_26fb18:
    if (ctx->pc == 0x26FB18u) {
        ctx->pc = 0x26FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB14u;
        // 0x26fb18: 0x8e6201e8  lw          $v0, 0x1E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB1Cu;
        goto label_26fb1c;
    }
    ctx->pc = 0x26FB14u;
    {
        const bool branch_taken_0x26fb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB14u;
        // 0x26fb18: 0x8e6201e8  lw          $v0, 0x1E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb14) {
            ctx->pc = 0x26FB20u;
            goto label_26fb20;
        }
    }
    ctx->pc = 0x26FB1Cu;
label_26fb1c:
    // 0x26fb1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26fb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb20:
    // 0x26fb20: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_26fb24:
    if (ctx->pc == 0x26FB24u) {
        ctx->pc = 0x26FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB20u;
        // 0x26fb24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB28u;
        goto label_26fb28;
    }
    ctx->pc = 0x26FB20u;
    {
        const bool branch_taken_0x26fb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB20u;
        // 0x26fb24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb20) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26FB28u;
label_26fb28:
    // 0x26fb28: 0x866201c0  lh          $v0, 0x1C0($s3)
    ctx->pc = 0x26fb28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
label_26fb2c:
    // 0x26fb2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26fb30:
    if (ctx->pc == 0x26FB30u) {
        ctx->pc = 0x26FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB2Cu;
        // 0x26fb30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB34u;
        goto label_26fb34;
    }
    ctx->pc = 0x26FB2Cu;
    {
        const bool branch_taken_0x26fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB2Cu;
        // 0x26fb30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb2c) {
            ctx->pc = 0x26FB38u;
            goto label_26fb38;
        }
    }
    ctx->pc = 0x26FB34u;
label_26fb34:
    // 0x26fb34: 0x8e6401bc  lw          $a0, 0x1BC($s3)
    ctx->pc = 0x26fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
label_26fb38:
    // 0x26fb38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_26fb3c:
    // 0x26fb3c: 0xc0efb95  jal         func_3BEE54
label_26fb40:
    if (ctx->pc == 0x26FB40u) {
        ctx->pc = 0x26FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB3Cu;
        // 0x26fb40: 0x24a57c78  addiu       $a1, $a1, 0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB44u;
        goto label_26fb44;
    }
    ctx->pc = 0x26FB3Cu;
    SET_GPR_U32(ctx, 31, 0x26FB44u);
    ctx->pc = 0x26FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB3Cu;
    // 0x26fb40: 0x24a57c78  addiu       $a1, $a1, 0x7C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x26FB3Cu, 0x26FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB44u;
label_26fb44:
    // 0x26fb44: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_26fb48:
    if (ctx->pc == 0x26FB48u) {
        ctx->pc = 0x26FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB44u;
        // 0x26fb48: 0x86020004  lh          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB4Cu;
        goto label_26fb4c;
    }
    ctx->pc = 0x26FB44u;
    {
        const bool branch_taken_0x26fb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB44u;
        // 0x26fb48: 0x86020004  lh          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb44) {
            ctx->pc = 0x26FB7Cu;
            goto label_26fb7c;
        }
    }
    ctx->pc = 0x26FB4Cu;
label_26fb4c:
    // 0x26fb4c: 0x8e2411e4  lw          $a0, 0x11E4($s1)
    ctx->pc = 0x26fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_26fb50:
    // 0x26fb50: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x26fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_26fb54:
    // 0x26fb54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26fb58:
    if (ctx->pc == 0x26FB58u) {
        ctx->pc = 0x26FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB54u;
        // 0x26fb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB5Cu;
        goto label_26fb5c;
    }
    ctx->pc = 0x26FB54u;
    {
        const bool branch_taken_0x26fb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB54u;
        // 0x26fb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb54) {
            ctx->pc = 0x26FB60u;
            goto label_26fb60;
        }
    }
    ctx->pc = 0x26FB5Cu;
label_26fb5c:
    // 0x26fb5c: 0x8e6501e8  lw          $a1, 0x1E8($s3)
    ctx->pc = 0x26fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
label_26fb60:
    // 0x26fb60: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x26fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_26fb64:
    // 0x26fb64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb68:
    // 0x26fb68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26fb68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb6c:
    // 0x26fb6c: 0x40f809  jalr        $v0
label_26fb70:
    if (ctx->pc == 0x26FB70u) {
        ctx->pc = 0x26FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB6Cu;
        // 0x26fb70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB74u;
        goto label_26fb74;
    }
    ctx->pc = 0x26FB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FB74u);
        ctx->pc = 0x26FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB6Cu;
        // 0x26fb70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB6Cu, 0x26FB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FB74u;
label_26fb74:
    // 0x26fb74: 0x10000011  b           . + 4 + (0x11 << 2)
label_26fb78:
    if (ctx->pc == 0x26FB78u) {
        ctx->pc = 0x26FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB74u;
        // 0x26fb78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB7Cu;
        goto label_26fb7c;
    }
    ctx->pc = 0x26FB74u;
    {
        const bool branch_taken_0x26fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB74u;
        // 0x26fb78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb74) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26FB7Cu;
label_26fb7c:
    // 0x26fb7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26fb80:
    if (ctx->pc == 0x26FB80u) {
        ctx->pc = 0x26FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB7Cu;
        // 0x26fb80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB84u;
        goto label_26fb84;
    }
    ctx->pc = 0x26FB7Cu;
    {
        const bool branch_taken_0x26fb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB7Cu;
        // 0x26fb80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb7c) {
            ctx->pc = 0x26FB88u;
            goto label_26fb88;
        }
    }
    ctx->pc = 0x26FB84u;
label_26fb84:
    // 0x26fb84: 0x8e6401e8  lw          $a0, 0x1E8($s3)
    ctx->pc = 0x26fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
label_26fb88:
    // 0x26fb88: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x26fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_26fb8c:
    // 0x26fb8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb90:
    // 0x26fb90: 0xc075272  jal         func_1D49C8
label_26fb94:
    if (ctx->pc == 0x26FB94u) {
        ctx->pc = 0x26FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB90u;
        // 0x26fb94: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB98u;
        goto label_26fb98;
    }
    ctx->pc = 0x26FB90u;
    SET_GPR_U32(ctx, 31, 0x26FB98u);
    ctx->pc = 0x26FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB90u;
    // 0x26fb94: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x26FB90u, 0x26FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB98u;
label_26fb98:
    // 0x26fb98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fb9c:
    // 0x26fb9c: 0xc0899bc  jal         func_2266F0
label_26fba0:
    if (ctx->pc == 0x26FBA0u) {
        ctx->pc = 0x26FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB9Cu;
        // 0x26fba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBA4u;
        goto label_26fba4;
    }
    ctx->pc = 0x26FB9Cu;
    SET_GPR_U32(ctx, 31, 0x26FBA4u);
    ctx->pc = 0x26FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB9Cu;
    // 0x26fba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x26FB9Cu, 0x26FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBA4u;
label_26fba4:
    // 0x26fba4: 0xae500254  sw          $s0, 0x254($s2)
    ctx->pc = 0x26fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 16));
label_26fba8:
    // 0x26fba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fbac:
    // 0x26fbac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26fbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fbb0:
    // 0x26fbb0: 0xc0984bc  jal         func_2612F0
label_26fbb4:
    if (ctx->pc == 0x26FBB4u) {
        ctx->pc = 0x26FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBB0u;
        // 0x26fbb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBB8u;
        goto label_26fbb8;
    }
    ctx->pc = 0x26FBB0u;
    SET_GPR_U32(ctx, 31, 0x26FBB8u);
    ctx->pc = 0x26FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBB0u;
    // 0x26fbb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x26FBB0u, 0x26FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBB8u;
label_26fbb8:
    // 0x26fbb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fbbc:
    // 0x26fbbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26fbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26fbc0:
    // 0x26fbc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26fbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26fbc4:
    // 0x26fbc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26fbc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26fbc8:
    // 0x26fbc8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x26fbc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_26fbcc:
    // 0x26fbcc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x26fbccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26fbd0:
    // 0x26fbd0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x26fbd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_26fbd4:
    // 0x26fbd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26fbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26fbd8:
    // 0x26fbd8: 0x3e00008  jr          $ra
label_26fbdc:
    if (ctx->pc == 0x26FBDCu) {
        ctx->pc = 0x26FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBD8u;
        // 0x26fbdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBE0u;
        goto label_fallthrough_0x26fbd8;
    }
    ctx->pc = 0x26FBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBD8u;
        // 0x26fbdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26fbd8:
    ctx->pc = 0x26FBE0u;
}
