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

// Function: sub_001007B8
// Address: 0x1007b8 - 0x100ae8
void sub_001007B8_0x1007b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001007B8_0x1007b8");
#endif

    switch (ctx->pc) {
        case 0x1007b8u: goto label_1007b8;
        case 0x1007bcu: goto label_1007bc;
        case 0x1007c0u: goto label_1007c0;
        case 0x1007c4u: goto label_1007c4;
        case 0x1007c8u: goto label_1007c8;
        case 0x1007ccu: goto label_1007cc;
        case 0x1007d0u: goto label_1007d0;
        case 0x1007d4u: goto label_1007d4;
        case 0x1007d8u: goto label_1007d8;
        case 0x1007dcu: goto label_1007dc;
        case 0x1007e0u: goto label_1007e0;
        case 0x1007e4u: goto label_1007e4;
        case 0x1007e8u: goto label_1007e8;
        case 0x1007ecu: goto label_1007ec;
        case 0x1007f0u: goto label_1007f0;
        case 0x1007f4u: goto label_1007f4;
        case 0x1007f8u: goto label_1007f8;
        case 0x1007fcu: goto label_1007fc;
        case 0x100800u: goto label_100800;
        case 0x100804u: goto label_100804;
        case 0x100808u: goto label_100808;
        case 0x10080cu: goto label_10080c;
        case 0x100810u: goto label_100810;
        case 0x100814u: goto label_100814;
        case 0x100818u: goto label_100818;
        case 0x10081cu: goto label_10081c;
        case 0x100820u: goto label_100820;
        case 0x100824u: goto label_100824;
        case 0x100828u: goto label_100828;
        case 0x10082cu: goto label_10082c;
        case 0x100830u: goto label_100830;
        case 0x100834u: goto label_100834;
        case 0x100838u: goto label_100838;
        case 0x10083cu: goto label_10083c;
        case 0x100840u: goto label_100840;
        case 0x100844u: goto label_100844;
        case 0x100848u: goto label_100848;
        case 0x10084cu: goto label_10084c;
        case 0x100850u: goto label_100850;
        case 0x100854u: goto label_100854;
        case 0x100858u: goto label_100858;
        case 0x10085cu: goto label_10085c;
        case 0x100860u: goto label_100860;
        case 0x100864u: goto label_100864;
        case 0x100868u: goto label_100868;
        case 0x10086cu: goto label_10086c;
        case 0x100870u: goto label_100870;
        case 0x100874u: goto label_100874;
        case 0x100878u: goto label_100878;
        case 0x10087cu: goto label_10087c;
        case 0x100880u: goto label_100880;
        case 0x100884u: goto label_100884;
        case 0x100888u: goto label_100888;
        case 0x10088cu: goto label_10088c;
        case 0x100890u: goto label_100890;
        case 0x100894u: goto label_100894;
        case 0x100898u: goto label_100898;
        case 0x10089cu: goto label_10089c;
        case 0x1008a0u: goto label_1008a0;
        case 0x1008a4u: goto label_1008a4;
        case 0x1008a8u: goto label_1008a8;
        case 0x1008acu: goto label_1008ac;
        case 0x1008b0u: goto label_1008b0;
        case 0x1008b4u: goto label_1008b4;
        case 0x1008b8u: goto label_1008b8;
        case 0x1008bcu: goto label_1008bc;
        case 0x1008c0u: goto label_1008c0;
        case 0x1008c4u: goto label_1008c4;
        case 0x1008c8u: goto label_1008c8;
        case 0x1008ccu: goto label_1008cc;
        case 0x1008d0u: goto label_1008d0;
        case 0x1008d4u: goto label_1008d4;
        case 0x1008d8u: goto label_1008d8;
        case 0x1008dcu: goto label_1008dc;
        case 0x1008e0u: goto label_1008e0;
        case 0x1008e4u: goto label_1008e4;
        case 0x1008e8u: goto label_1008e8;
        case 0x1008ecu: goto label_1008ec;
        case 0x1008f0u: goto label_1008f0;
        case 0x1008f4u: goto label_1008f4;
        case 0x1008f8u: goto label_1008f8;
        case 0x1008fcu: goto label_1008fc;
        case 0x100900u: goto label_100900;
        case 0x100904u: goto label_100904;
        case 0x100908u: goto label_100908;
        case 0x10090cu: goto label_10090c;
        case 0x100910u: goto label_100910;
        case 0x100914u: goto label_100914;
        case 0x100918u: goto label_100918;
        case 0x10091cu: goto label_10091c;
        case 0x100920u: goto label_100920;
        case 0x100924u: goto label_100924;
        case 0x100928u: goto label_100928;
        case 0x10092cu: goto label_10092c;
        case 0x100930u: goto label_100930;
        case 0x100934u: goto label_100934;
        case 0x100938u: goto label_100938;
        case 0x10093cu: goto label_10093c;
        case 0x100940u: goto label_100940;
        case 0x100944u: goto label_100944;
        case 0x100948u: goto label_100948;
        case 0x10094cu: goto label_10094c;
        case 0x100950u: goto label_100950;
        case 0x100954u: goto label_100954;
        case 0x100958u: goto label_100958;
        case 0x10095cu: goto label_10095c;
        case 0x100960u: goto label_100960;
        case 0x100964u: goto label_100964;
        case 0x100968u: goto label_100968;
        case 0x10096cu: goto label_10096c;
        case 0x100970u: goto label_100970;
        case 0x100974u: goto label_100974;
        case 0x100978u: goto label_100978;
        case 0x10097cu: goto label_10097c;
        case 0x100980u: goto label_100980;
        case 0x100984u: goto label_100984;
        case 0x100988u: goto label_100988;
        case 0x10098cu: goto label_10098c;
        case 0x100990u: goto label_100990;
        case 0x100994u: goto label_100994;
        case 0x100998u: goto label_100998;
        case 0x10099cu: goto label_10099c;
        case 0x1009a0u: goto label_1009a0;
        case 0x1009a4u: goto label_1009a4;
        case 0x1009a8u: goto label_1009a8;
        case 0x1009acu: goto label_1009ac;
        case 0x1009b0u: goto label_1009b0;
        case 0x1009b4u: goto label_1009b4;
        case 0x1009b8u: goto label_1009b8;
        case 0x1009bcu: goto label_1009bc;
        case 0x1009c0u: goto label_1009c0;
        case 0x1009c4u: goto label_1009c4;
        case 0x1009c8u: goto label_1009c8;
        case 0x1009ccu: goto label_1009cc;
        case 0x1009d0u: goto label_1009d0;
        case 0x1009d4u: goto label_1009d4;
        case 0x1009d8u: goto label_1009d8;
        case 0x1009dcu: goto label_1009dc;
        case 0x1009e0u: goto label_1009e0;
        case 0x1009e4u: goto label_1009e4;
        case 0x1009e8u: goto label_1009e8;
        case 0x1009ecu: goto label_1009ec;
        case 0x1009f0u: goto label_1009f0;
        case 0x1009f4u: goto label_1009f4;
        case 0x1009f8u: goto label_1009f8;
        case 0x1009fcu: goto label_1009fc;
        case 0x100a00u: goto label_100a00;
        case 0x100a04u: goto label_100a04;
        case 0x100a08u: goto label_100a08;
        case 0x100a0cu: goto label_100a0c;
        case 0x100a10u: goto label_100a10;
        case 0x100a14u: goto label_100a14;
        case 0x100a18u: goto label_100a18;
        case 0x100a1cu: goto label_100a1c;
        case 0x100a20u: goto label_100a20;
        case 0x100a24u: goto label_100a24;
        case 0x100a28u: goto label_100a28;
        case 0x100a2cu: goto label_100a2c;
        case 0x100a30u: goto label_100a30;
        case 0x100a34u: goto label_100a34;
        case 0x100a38u: goto label_100a38;
        case 0x100a3cu: goto label_100a3c;
        case 0x100a40u: goto label_100a40;
        case 0x100a44u: goto label_100a44;
        case 0x100a48u: goto label_100a48;
        case 0x100a4cu: goto label_100a4c;
        case 0x100a50u: goto label_100a50;
        case 0x100a54u: goto label_100a54;
        case 0x100a58u: goto label_100a58;
        case 0x100a5cu: goto label_100a5c;
        case 0x100a60u: goto label_100a60;
        case 0x100a64u: goto label_100a64;
        case 0x100a68u: goto label_100a68;
        case 0x100a6cu: goto label_100a6c;
        case 0x100a70u: goto label_100a70;
        case 0x100a74u: goto label_100a74;
        case 0x100a78u: goto label_100a78;
        case 0x100a7cu: goto label_100a7c;
        case 0x100a80u: goto label_100a80;
        case 0x100a84u: goto label_100a84;
        case 0x100a88u: goto label_100a88;
        case 0x100a8cu: goto label_100a8c;
        case 0x100a90u: goto label_100a90;
        case 0x100a94u: goto label_100a94;
        case 0x100a98u: goto label_100a98;
        case 0x100a9cu: goto label_100a9c;
        case 0x100aa0u: goto label_100aa0;
        case 0x100aa4u: goto label_100aa4;
        case 0x100aa8u: goto label_100aa8;
        case 0x100aacu: goto label_100aac;
        case 0x100ab0u: goto label_100ab0;
        case 0x100ab4u: goto label_100ab4;
        case 0x100ab8u: goto label_100ab8;
        case 0x100abcu: goto label_100abc;
        case 0x100ac0u: goto label_100ac0;
        case 0x100ac4u: goto label_100ac4;
        case 0x100ac8u: goto label_100ac8;
        case 0x100accu: goto label_100acc;
        case 0x100ad0u: goto label_100ad0;
        case 0x100ad4u: goto label_100ad4;
        case 0x100ad8u: goto label_100ad8;
        case 0x100adcu: goto label_100adc;
        case 0x100ae0u: goto label_100ae0;
        case 0x100ae4u: goto label_100ae4;
        default: break;
    }

    ctx->pc = 0x1007b8u;

label_1007b8:
    // 0x1007b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1007b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1007bc:
    // 0x1007bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1007bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1007c0:
    // 0x1007c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1007c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1007c4:
    // 0x1007c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1007c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1007c8:
    // 0x1007c8: 0x24502d80  addiu       $s0, $v0, 0x2D80
    ctx->pc = 0x1007c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11648));
label_1007cc:
    // 0x1007cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1007ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1007d0:
    // 0x1007d0: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x1007d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
label_1007d4:
    // 0x1007d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1007d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1007d8:
    // 0x1007d8: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x1007d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
label_1007dc:
    // 0x1007dc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1007dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_1007e0:
    // 0x1007e0: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
label_1007e4:
    // 0x1007e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1007e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1007e8:
    // 0x1007e8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1007e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1007ec:
    // 0x1007ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1007ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1007f0:
    // 0x1007f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1007f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1007f4:
    // 0x1007f4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1007f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1007f8:
    // 0x1007f8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1007f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1007fc:
    // 0x1007fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1007fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_100800:
    // 0x100800: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_100804:
    if (ctx->pc == 0x100804u) {
        ctx->pc = 0x100804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100800u;
        // 0x100804: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100808u;
        goto label_100808;
    }
    ctx->pc = 0x100800u;
    {
        const bool branch_taken_0x100800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100800u;
        // 0x100804: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100800) {
            ctx->pc = 0x100828u;
            goto label_100828;
        }
    }
    ctx->pc = 0x100808u;
label_100808:
    // 0x100808: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x100808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10080c:
    // 0x10080c: 0x0  nop
    ctx->pc = 0x10080cu;
    // NOP
label_100810:
    // 0x100810: 0xc0f61e8  jal         func_3D87A0
label_100814:
    if (ctx->pc == 0x100814u) {
        ctx->pc = 0x100814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100810u;
        // 0x100814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100818u;
        goto label_100818;
    }
    ctx->pc = 0x100810u;
    SET_GPR_U32(ctx, 31, 0x100818u);
    ctx->pc = 0x100814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100810u;
    // 0x100814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x100810u, 0x100818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100818u;
label_100818:
    // 0x100818: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x100818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10081c:
    // 0x10081c: 0x0  nop
    ctx->pc = 0x10081cu;
    // NOP
label_100820:
    // 0x100820: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_100824:
    if (ctx->pc == 0x100824u) {
        ctx->pc = 0x100824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100820u;
        // 0x100824: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100828u;
        goto label_100828;
    }
    ctx->pc = 0x100820u;
    {
        const bool branch_taken_0x100820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100820) {
            ctx->pc = 0x100824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100820u;
            // 0x100824: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100810;
        }
    }
    ctx->pc = 0x100828u;
label_100828:
    // 0x100828: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x100828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_10082c:
    // 0x10082c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10082cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_100830:
    // 0x100830: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x100830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_100834:
    // 0x100834: 0xc040186  jal         func_100618
label_100838:
    if (ctx->pc == 0x100838u) {
        ctx->pc = 0x100838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100834u;
        // 0x100838: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10083Cu;
        goto label_10083c;
    }
    ctx->pc = 0x100834u;
    SET_GPR_U32(ctx, 31, 0x10083Cu);
    ctx->pc = 0x100838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100834u;
    // 0x100838: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100618u, 0x100834u, 0x10083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10083Cu;
label_10083c:
    // 0x10083c: 0x8e620720  lw          $v0, 0x720($s3)
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1824)));
label_100840:
    // 0x100840: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_100844:
    if (ctx->pc == 0x100844u) {
        ctx->pc = 0x100844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100840u;
        // 0x100844: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100848u;
        goto label_100848;
    }
    ctx->pc = 0x100840u;
    {
        const bool branch_taken_0x100840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100840u;
        // 0x100844: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100840) {
            ctx->pc = 0x100920u;
            goto label_100920;
        }
    }
    ctx->pc = 0x100848u;
label_100848:
    // 0x100848: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x100848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10084c:
    // 0x10084c: 0x8c620724  lw          $v0, 0x724($v1)
    ctx->pc = 0x10084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1828)));
label_100850:
    // 0x100850: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_100854:
    if (ctx->pc == 0x100854u) {
        ctx->pc = 0x100854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100850u;
        // 0x100854: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100858u;
        goto label_100858;
    }
    ctx->pc = 0x100850u;
    {
        const bool branch_taken_0x100850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100850u;
        // 0x100854: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100850) {
            ctx->pc = 0x1008D0u;
            goto label_1008d0;
        }
    }
    ctx->pc = 0x100858u;
label_100858:
    // 0x100858: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x100858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10085c:
    // 0x10085c: 0x2416004c  addiu       $s6, $zero, 0x4C
    ctx->pc = 0x10085cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_100860:
    // 0x100860: 0x2368018  mult        $s0, $s1, $s6
    ctx->pc = 0x100860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_100864:
    // 0x100864: 0x0  nop
    ctx->pc = 0x100864u;
    // NOP
label_100868:
    // 0x100868: 0x8e440720  lw          $a0, 0x720($s2)
    ctx->pc = 0x100868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1824)));
label_10086c:
    // 0x10086c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10086cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_100870:
    // 0x100870: 0xc0413f6  jal         func_104FD8
label_100874:
    if (ctx->pc == 0x100874u) {
        ctx->pc = 0x100874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100870u;
        // 0x100874: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100878u;
        goto label_100878;
    }
    ctx->pc = 0x100870u;
    SET_GPR_U32(ctx, 31, 0x100878u);
    ctx->pc = 0x100874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100870u;
    // 0x100874: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FD8u, 0x100870u, 0x100878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100878u;
label_100878:
    // 0x100878: 0x8e420720  lw          $v0, 0x720($s2)
    ctx->pc = 0x100878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1824)));
label_10087c:
    // 0x10087c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10087cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_100880:
    // 0x100880: 0x2610003c  addiu       $s0, $s0, 0x3C
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_100884:
    // 0x100884: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x100884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_100888:
    // 0x100888: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_10088c:
    if (ctx->pc == 0x10088Cu) {
        ctx->pc = 0x10088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100888u;
        // 0x10088c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100890u;
        goto label_100890;
    }
    ctx->pc = 0x100888u;
    {
        const bool branch_taken_0x100888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100888u;
        // 0x10088c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100888) {
            ctx->pc = 0x1008B0u;
            goto label_1008b0;
        }
    }
    ctx->pc = 0x100890u;
label_100890:
    // 0x100890: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x100890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_100894:
    // 0x100894: 0x0  nop
    ctx->pc = 0x100894u;
    // NOP
label_100898:
    // 0x100898: 0xc0f61e8  jal         func_3D87A0
label_10089c:
    if (ctx->pc == 0x10089Cu) {
        ctx->pc = 0x10089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100898u;
        // 0x10089c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008A0u;
        goto label_1008a0;
    }
    ctx->pc = 0x100898u;
    SET_GPR_U32(ctx, 31, 0x1008A0u);
    ctx->pc = 0x10089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100898u;
    // 0x10089c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x100898u, 0x1008A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008A0u;
label_1008a0:
    // 0x1008a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1008a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1008a4:
    // 0x1008a4: 0x0  nop
    ctx->pc = 0x1008a4u;
    // NOP
label_1008a8:
    // 0x1008a8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1008ac:
    if (ctx->pc == 0x1008ACu) {
        ctx->pc = 0x1008ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008A8u;
        // 0x1008ac: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008B0u;
        goto label_1008b0;
    }
    ctx->pc = 0x1008A8u;
    {
        const bool branch_taken_0x1008a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1008a8) {
            ctx->pc = 0x1008ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1008A8u;
            // 0x1008ac: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100898;
        }
    }
    ctx->pc = 0x1008B0u;
label_1008b0:
    // 0x1008b0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1008b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1008b4:
    // 0x1008b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1008b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1008b8:
    // 0x1008b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1008b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1008bc:
    // 0x1008bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1008bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1008c0:
    // 0x1008c0: 0x8ee20724  lw          $v0, 0x724($s7)
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1828)));
label_1008c4:
    // 0x1008c4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1008c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1008c8:
    // 0x1008c8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1008cc:
    if (ctx->pc == 0x1008CCu) {
        ctx->pc = 0x1008CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008C8u;
        // 0x1008cc: 0x2368018  mult        $s0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008D0u;
        goto label_1008d0;
    }
    ctx->pc = 0x1008C8u;
    {
        const bool branch_taken_0x1008c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1008CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008C8u;
        // 0x1008cc: 0x2368018  mult        $s0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008c8) {
            ctx->pc = 0x100868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100868;
        }
    }
    ctx->pc = 0x1008D0u;
label_1008d0:
    // 0x1008d0: 0x8e650720  lw          $a1, 0x720($s3)
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1824)));
label_1008d4:
    // 0x1008d4: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_1008d8:
    if (ctx->pc == 0x1008D8u) {
        ctx->pc = 0x1008D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008D4u;
        // 0x1008d8: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008DCu;
        goto label_1008dc;
    }
    ctx->pc = 0x1008D4u;
    {
        const bool branch_taken_0x1008d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008D4u;
        // 0x1008d8: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008d4) {
            ctx->pc = 0x10091Cu;
            goto label_10091c;
        }
    }
    ctx->pc = 0x1008DCu;
label_1008dc:
    // 0x1008dc: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_1008e0:
    // 0x1008e0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1008e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1008e4:
    // 0x1008e4: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1008e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1008e8:
    // 0x1008e8: 0x10b0000a  beq         $a1, $s0, . + 4 + (0xA << 2)
label_1008ec:
    if (ctx->pc == 0x1008ECu) {
        ctx->pc = 0x1008ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008E8u;
        // 0x1008ec: 0x8e640720  lw          $a0, 0x720($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008F0u;
        goto label_1008f0;
    }
    ctx->pc = 0x1008E8u;
    {
        const bool branch_taken_0x1008e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x1008ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008E8u;
        // 0x1008ec: 0x8e640720  lw          $a0, 0x720($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008e8) {
            ctx->pc = 0x100914u;
            goto label_100914;
        }
    }
    ctx->pc = 0x1008F0u;
label_1008f0:
    // 0x1008f0: 0x2610ffb4  addiu       $s0, $s0, -0x4C
    ctx->pc = 0x1008f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967220));
label_1008f4:
    // 0x1008f4: 0x0  nop
    ctx->pc = 0x1008f4u;
    // NOP
label_1008f8:
    // 0x1008f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1008f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1008fc:
    // 0x1008fc: 0xc041292  jal         func_104A48
label_100900:
    if (ctx->pc == 0x100900u) {
        ctx->pc = 0x100900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008FCu;
        // 0x100900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100904u;
        goto label_100904;
    }
    ctx->pc = 0x1008FCu;
    SET_GPR_U32(ctx, 31, 0x100904u);
    ctx->pc = 0x100900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1008FCu;
    // 0x100900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A48u, 0x1008FCu, 0x100904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100904u;
label_100904:
    // 0x100904: 0x8e620720  lw          $v0, 0x720($s3)
    ctx->pc = 0x100904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1824)));
label_100908:
    // 0x100908: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
label_10090c:
    if (ctx->pc == 0x10090Cu) {
        ctx->pc = 0x10090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100908u;
        // 0x10090c: 0x2610ffb4  addiu       $s0, $s0, -0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100910u;
        goto label_100910;
    }
    ctx->pc = 0x100908u;
    {
        const bool branch_taken_0x100908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x100908) {
            ctx->pc = 0x10090Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100908u;
            // 0x10090c: 0x2610ffb4  addiu       $s0, $s0, -0x4C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967220));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1008F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1008f8;
        }
    }
    ctx->pc = 0x100910u;
label_100910:
    // 0x100910: 0x8e640720  lw          $a0, 0x720($s3)
    ctx->pc = 0x100910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1824)));
label_100914:
    // 0x100914: 0xc0f528a  jal         func_3D4A28
label_100918:
    if (ctx->pc == 0x100918u) {
        ctx->pc = 0x100918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100914u;
        // 0x100918: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10091Cu;
        goto label_10091c;
    }
    ctx->pc = 0x100914u;
    SET_GPR_U32(ctx, 31, 0x10091Cu);
    ctx->pc = 0x100918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100914u;
    // 0x100918: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x100914u, 0x10091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10091Cu;
label_10091c:
    // 0x10091c: 0xae600720  sw          $zero, 0x720($s3)
    ctx->pc = 0x10091cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1824), GPR_U32(ctx, 0));
label_100920:
    // 0x100920: 0x8ea30708  lw          $v1, 0x708($s5)
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1800)));
label_100924:
    // 0x100924: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_100928:
    if (ctx->pc == 0x100928u) {
        ctx->pc = 0x10092Cu;
        goto label_10092c;
    }
    ctx->pc = 0x100924u;
    {
        const bool branch_taken_0x100924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100924) {
            ctx->pc = 0x100978u;
            goto label_100978;
        }
    }
    ctx->pc = 0x10092Cu;
label_10092c:
    // 0x10092c: 0x13c00012  beqz        $fp, . + 4 + (0x12 << 2)
label_100930:
    if (ctx->pc == 0x100930u) {
        ctx->pc = 0x100934u;
        goto label_100934;
    }
    ctx->pc = 0x10092Cu;
    {
        const bool branch_taken_0x10092c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x10092c) {
            ctx->pc = 0x100978u;
            goto label_100978;
        }
    }
    ctx->pc = 0x100934u;
label_100934:
    // 0x100934: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_100938:
    // 0x100938: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_10093c:
    // 0x10093c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10093cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_100940:
    // 0x100940: 0x1070000a  beq         $v1, $s0, . + 4 + (0xA << 2)
label_100944:
    if (ctx->pc == 0x100944u) {
        ctx->pc = 0x100944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100940u;
        // 0x100944: 0x8ea40708  lw          $a0, 0x708($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100948u;
        goto label_100948;
    }
    ctx->pc = 0x100940u;
    {
        const bool branch_taken_0x100940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x100944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100940u;
        // 0x100944: 0x8ea40708  lw          $a0, 0x708($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100940) {
            ctx->pc = 0x10096Cu;
            goto label_10096c;
        }
    }
    ctx->pc = 0x100948u;
label_100948:
    // 0x100948: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x100948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
label_10094c:
    // 0x10094c: 0x0  nop
    ctx->pc = 0x10094cu;
    // NOP
label_100950:
    // 0x100950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100954:
    // 0x100954: 0xc041448  jal         func_105120
label_100958:
    if (ctx->pc == 0x100958u) {
        ctx->pc = 0x100958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100954u;
        // 0x100958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10095Cu;
        goto label_10095c;
    }
    ctx->pc = 0x100954u;
    SET_GPR_U32(ctx, 31, 0x10095Cu);
    ctx->pc = 0x100958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100954u;
    // 0x100958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105120u, 0x100954u, 0x10095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10095Cu;
label_10095c:
    // 0x10095c: 0x8ea20708  lw          $v0, 0x708($s5)
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1800)));
label_100960:
    // 0x100960: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
label_100964:
    if (ctx->pc == 0x100964u) {
        ctx->pc = 0x100964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100960u;
        // 0x100964: 0x2610ffc0  addiu       $s0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100968u;
        goto label_100968;
    }
    ctx->pc = 0x100960u;
    {
        const bool branch_taken_0x100960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x100960) {
            ctx->pc = 0x100964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100960u;
            // 0x100964: 0x2610ffc0  addiu       $s0, $s0, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100950;
        }
    }
    ctx->pc = 0x100968u;
label_100968:
    // 0x100968: 0x8ea40708  lw          $a0, 0x708($s5)
    ctx->pc = 0x100968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1800)));
label_10096c:
    // 0x10096c: 0xc0f528a  jal         func_3D4A28
label_100970:
    if (ctx->pc == 0x100970u) {
        ctx->pc = 0x100970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10096Cu;
        // 0x100970: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100974u;
        goto label_100974;
    }
    ctx->pc = 0x10096Cu;
    SET_GPR_U32(ctx, 31, 0x100974u);
    ctx->pc = 0x100970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10096Cu;
    // 0x100970: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x10096Cu, 0x100974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100974u;
label_100974:
    // 0x100974: 0xaea00708  sw          $zero, 0x708($s5)
    ctx->pc = 0x100974u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1800), GPR_U32(ctx, 0));
label_100978:
    // 0x100978: 0xc041c2a  jal         func_1070A8
label_10097c:
    if (ctx->pc == 0x10097Cu) {
        ctx->pc = 0x100980u;
        goto label_100980;
    }
    ctx->pc = 0x100978u;
    SET_GPR_U32(ctx, 31, 0x100980u);
    ctx->pc = 0x1070A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1070A8u, 0x100978u, 0x100980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100980u;
label_100980:
    // 0x100980: 0x8e82070c  lw          $v0, 0x70C($s4)
    ctx->pc = 0x100980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1804)));
label_100984:
    // 0x100984: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_100988:
    if (ctx->pc == 0x100988u) {
        ctx->pc = 0x100988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100984u;
        // 0x100988: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10098Cu;
        goto label_10098c;
    }
    ctx->pc = 0x100984u;
    {
        const bool branch_taken_0x100984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100984u;
        // 0x100988: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100984) {
            ctx->pc = 0x100A58u;
            goto label_100a58;
        }
    }
    ctx->pc = 0x10098Cu;
label_10098c:
    // 0x10098c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10098cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100990:
    // 0x100990: 0x8c620704  lw          $v0, 0x704($v1)
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1796)));
label_100994:
    // 0x100994: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_100998:
    if (ctx->pc == 0x100998u) {
        ctx->pc = 0x100998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100994u;
        // 0x100998: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10099Cu;
        goto label_10099c;
    }
    ctx->pc = 0x100994u;
    {
        const bool branch_taken_0x100994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100994u;
        // 0x100998: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100994) {
            ctx->pc = 0x100A04u;
            goto label_100a04;
        }
    }
    ctx->pc = 0x10099Cu;
label_10099c:
    // 0x10099c: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x10099cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1009a0:
    // 0x1009a0: 0xb21818  mult        $v1, $a1, $s2
    ctx->pc = 0x1009a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1009a4:
    // 0x1009a4: 0x0  nop
    ctx->pc = 0x1009a4u;
    // NOP
label_1009a8:
    // 0x1009a8: 0x8e82070c  lw          $v0, 0x70C($s4)
    ctx->pc = 0x1009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1804)));
label_1009ac:
    // 0x1009ac: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1009b0:
    // 0x1009b0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_1009b4:
    if (ctx->pc == 0x1009B4u) {
        ctx->pc = 0x1009B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009B0u;
        // 0x1009b4: 0x24b10001  addiu       $s1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1009B8u;
        goto label_1009b8;
    }
    ctx->pc = 0x1009B0u;
    {
        const bool branch_taken_0x1009b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009B0u;
        // 0x1009b4: 0x24b10001  addiu       $s1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009b0) {
            ctx->pc = 0x1009F0u;
            goto label_1009f0;
        }
    }
    ctx->pc = 0x1009B8u;
label_1009b8:
    // 0x1009b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1009bc:
    // 0x1009bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1009c0:
    if (ctx->pc == 0x1009C0u) {
        ctx->pc = 0x1009C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009BCu;
        // 0x1009c0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1009C4u;
        goto label_1009c4;
    }
    ctx->pc = 0x1009BCu;
    {
        const bool branch_taken_0x1009bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009BCu;
        // 0x1009c0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009bc) {
            ctx->pc = 0x1009E0u;
            goto label_1009e0;
        }
    }
    ctx->pc = 0x1009C4u;
label_1009c4:
    // 0x1009c4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1009c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1009c8:
    // 0x1009c8: 0xc0f61e8  jal         func_3D87A0
label_1009cc:
    if (ctx->pc == 0x1009CCu) {
        ctx->pc = 0x1009CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009C8u;
        // 0x1009cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1009D0u;
        goto label_1009d0;
    }
    ctx->pc = 0x1009C8u;
    SET_GPR_U32(ctx, 31, 0x1009D0u);
    ctx->pc = 0x1009CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009C8u;
    // 0x1009cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1009C8u, 0x1009D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1009D0u;
label_1009d0:
    // 0x1009d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1009d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1009d4:
    // 0x1009d4: 0x0  nop
    ctx->pc = 0x1009d4u;
    // NOP
label_1009d8:
    // 0x1009d8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1009dc:
    if (ctx->pc == 0x1009DCu) {
        ctx->pc = 0x1009DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009D8u;
        // 0x1009dc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1009E0u;
        goto label_1009e0;
    }
    ctx->pc = 0x1009D8u;
    {
        const bool branch_taken_0x1009d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1009d8) {
            ctx->pc = 0x1009DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1009D8u;
            // 0x1009dc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1009C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1009c8;
        }
    }
    ctx->pc = 0x1009E0u;
label_1009e0:
    // 0x1009e0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1009e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1009e4:
    // 0x1009e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1009e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1009e8:
    // 0x1009e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1009e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1009ec:
    // 0x1009ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1009ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1009f0:
    // 0x1009f0: 0x8e620704  lw          $v0, 0x704($s3)
    ctx->pc = 0x1009f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1796)));
label_1009f4:
    // 0x1009f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1009f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1009f8:
    // 0x1009f8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1009f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1009fc:
    // 0x1009fc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_100a00:
    if (ctx->pc == 0x100A00u) {
        ctx->pc = 0x100A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009FCu;
        // 0x100a00: 0xb21818  mult        $v1, $a1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A04u;
        goto label_100a04;
    }
    ctx->pc = 0x1009FCu;
    {
        const bool branch_taken_0x1009fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009FCu;
        // 0x100a00: 0xb21818  mult        $v1, $a1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009fc) {
            ctx->pc = 0x1009A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1009a8;
        }
    }
    ctx->pc = 0x100A04u;
label_100a04:
    // 0x100a04: 0x8e85070c  lw          $a1, 0x70C($s4)
    ctx->pc = 0x100a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1804)));
label_100a08:
    // 0x100a08: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_100a0c:
    if (ctx->pc == 0x100A0Cu) {
        ctx->pc = 0x100A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A08u;
        // 0x100a0c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A10u;
        goto label_100a10;
    }
    ctx->pc = 0x100A08u;
    {
        const bool branch_taken_0x100a08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A08u;
        // 0x100a0c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a08) {
            ctx->pc = 0x100A54u;
            goto label_100a54;
        }
    }
    ctx->pc = 0x100A10u;
label_100a10:
    // 0x100a10: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x100a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_100a14:
    // 0x100a14: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x100a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_100a18:
    // 0x100a18: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x100a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_100a1c:
    // 0x100a1c: 0x10b0000b  beq         $a1, $s0, . + 4 + (0xB << 2)
label_100a20:
    if (ctx->pc == 0x100A20u) {
        ctx->pc = 0x100A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A1Cu;
        // 0x100a20: 0x8e84070c  lw          $a0, 0x70C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A24u;
        goto label_100a24;
    }
    ctx->pc = 0x100A1Cu;
    {
        const bool branch_taken_0x100a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x100A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A1Cu;
        // 0x100a20: 0x8e84070c  lw          $a0, 0x70C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a1c) {
            ctx->pc = 0x100A4Cu;
            goto label_100a4c;
        }
    }
    ctx->pc = 0x100A24u;
label_100a24:
    // 0x100a24: 0x2610ffd8  addiu       $s0, $s0, -0x28
    ctx->pc = 0x100a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
label_100a28:
    // 0x100a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100a2c:
    // 0x100a2c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x100a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_100a30:
    // 0x100a30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x100a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_100a34:
    // 0x100a34: 0x60f809  jalr        $v1
label_100a38:
    if (ctx->pc == 0x100A38u) {
        ctx->pc = 0x100A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A34u;
        // 0x100a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A3Cu;
        goto label_100a3c;
    }
    ctx->pc = 0x100A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100A3Cu);
        ctx->pc = 0x100A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A34u;
        // 0x100a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100A34u, 0x100A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100A3Cu;
label_100a3c:
    // 0x100a3c: 0x8e82070c  lw          $v0, 0x70C($s4)
    ctx->pc = 0x100a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1804)));
label_100a40:
    // 0x100a40: 0x1450fff9  bne         $v0, $s0, . + 4 + (-0x7 << 2)
label_100a44:
    if (ctx->pc == 0x100A44u) {
        ctx->pc = 0x100A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A40u;
        // 0x100a44: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A48u;
        goto label_100a48;
    }
    ctx->pc = 0x100A40u;
    {
        const bool branch_taken_0x100a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x100A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A40u;
        // 0x100a44: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a40) {
            ctx->pc = 0x100A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100a28;
        }
    }
    ctx->pc = 0x100A48u;
label_100a48:
    // 0x100a48: 0x8e84070c  lw          $a0, 0x70C($s4)
    ctx->pc = 0x100a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1804)));
label_100a4c:
    // 0x100a4c: 0xc0f528a  jal         func_3D4A28
label_100a50:
    if (ctx->pc == 0x100A50u) {
        ctx->pc = 0x100A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A4Cu;
        // 0x100a50: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A54u;
        goto label_100a54;
    }
    ctx->pc = 0x100A4Cu;
    SET_GPR_U32(ctx, 31, 0x100A54u);
    ctx->pc = 0x100A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100A4Cu;
    // 0x100a50: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x100A4Cu, 0x100A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A54u;
label_100a54:
    // 0x100a54: 0xae80070c  sw          $zero, 0x70C($s4)
    ctx->pc = 0x100a54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1804), GPR_U32(ctx, 0));
label_100a58:
    // 0x100a58: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x100a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_100a5c:
    // 0x100a5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x100a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_100a60:
    // 0x100a60: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x100a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1792)));
label_100a64:
    // 0x100a64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_100a68:
    if (ctx->pc == 0x100A68u) {
        ctx->pc = 0x100A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A64u;
        // 0x100a68: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A6Cu;
        goto label_100a6c;
    }
    ctx->pc = 0x100A64u;
    {
        const bool branch_taken_0x100a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A64u;
        // 0x100a68: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a64) {
            ctx->pc = 0x100AB0u;
            goto label_100ab0;
        }
    }
    ctx->pc = 0x100A6Cu;
label_100a6c:
    // 0x100a6c: 0x10000009  b           . + 4 + (0x9 << 2)
label_100a70:
    if (ctx->pc == 0x100A70u) {
        ctx->pc = 0x100A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A6Cu;
        // 0x100a70: 0x26302d90  addiu       $s0, $s1, 0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A74u;
        goto label_100a74;
    }
    ctx->pc = 0x100A6Cu;
    {
        const bool branch_taken_0x100a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A6Cu;
        // 0x100a70: 0x26302d90  addiu       $s0, $s1, 0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a6c) {
            ctx->pc = 0x100A94u;
            goto label_100a94;
        }
    }
    ctx->pc = 0x100A74u;
label_100a74:
    // 0x100a74: 0x0  nop
    ctx->pc = 0x100a74u;
    // NOP
label_100a78:
    // 0x100a78: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_100a7c:
    if (ctx->pc == 0x100A7Cu) {
        ctx->pc = 0x100A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A78u;
        // 0x100a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A80u;
        goto label_100a80;
    }
    ctx->pc = 0x100A78u;
    {
        const bool branch_taken_0x100a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A78u;
        // 0x100a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a78) {
            ctx->pc = 0x100A90u;
            goto label_100a90;
        }
    }
    ctx->pc = 0x100A80u;
label_100a80:
    // 0x100a80: 0xc0d7412  jal         func_35D048
label_100a84:
    if (ctx->pc == 0x100A84u) {
        ctx->pc = 0x100A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A80u;
        // 0x100a84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A88u;
        goto label_100a88;
    }
    ctx->pc = 0x100A80u;
    SET_GPR_U32(ctx, 31, 0x100A88u);
    ctx->pc = 0x100A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100A80u;
    // 0x100a84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x100A80u, 0x100A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A88u;
label_100a88:
    // 0x100a88: 0xc0f5222  jal         func_3D4888
label_100a8c:
    if (ctx->pc == 0x100A8Cu) {
        ctx->pc = 0x100A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A88u;
        // 0x100a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A90u;
        goto label_100a90;
    }
    ctx->pc = 0x100A88u;
    SET_GPR_U32(ctx, 31, 0x100A90u);
    ctx->pc = 0x100A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100A88u;
    // 0x100a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x100A88u, 0x100A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A90u;
label_100a90:
    // 0x100a90: 0x26302d90  addiu       $s0, $s1, 0x2D90
    ctx->pc = 0x100a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11664));
label_100a94:
    // 0x100a94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x100a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_100a98:
    // 0x100a98: 0xc0f6348  jal         func_3D8D20
label_100a9c:
    if (ctx->pc == 0x100A9Cu) {
        ctx->pc = 0x100A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A98u;
        // 0x100a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AA0u;
        goto label_100aa0;
    }
    ctx->pc = 0x100A98u;
    SET_GPR_U32(ctx, 31, 0x100AA0u);
    ctx->pc = 0x100A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100A98u;
    // 0x100a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8D20u, 0x100A98u, 0x100AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100AA0u;
label_100aa0:
    // 0x100aa0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_100aa4:
    if (ctx->pc == 0x100AA4u) {
        ctx->pc = 0x100AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA0u;
        // 0x100aa4: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AA8u;
        goto label_100aa8;
    }
    ctx->pc = 0x100AA0u;
    {
        const bool branch_taken_0x100aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100aa0) {
            ctx->pc = 0x100AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100AA0u;
            // 0x100aa4: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100a78;
        }
    }
    ctx->pc = 0x100AA8u;
label_100aa8:
    // 0x100aa8: 0xc0f636a  jal         func_3D8DA8
label_100aac:
    if (ctx->pc == 0x100AACu) {
        ctx->pc = 0x100AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA8u;
        // 0x100aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AB0u;
        goto label_100ab0;
    }
    ctx->pc = 0x100AA8u;
    SET_GPR_U32(ctx, 31, 0x100AB0u);
    ctx->pc = 0x100AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100AA8u;
    // 0x100aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DA8u, 0x100AA8u, 0x100AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100AB0u;
label_100ab0:
    // 0x100ab0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_100ab4:
    // 0x100ab4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x100ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100ab8:
    // 0x100ab8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x100ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_100abc:
    // 0x100abc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x100abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_100ac0:
    // 0x100ac0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x100ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_100ac4:
    // 0x100ac4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x100ac4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_100ac8:
    // 0x100ac8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x100ac8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_100acc:
    // 0x100acc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x100accu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_100ad0:
    // 0x100ad0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x100ad0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_100ad4:
    // 0x100ad4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x100ad4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_100ad8:
    // 0x100ad8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x100ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_100adc:
    // 0x100adc: 0xac800700  sw          $zero, 0x700($a0)
    ctx->pc = 0x100adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1792), GPR_U32(ctx, 0));
label_100ae0:
    // 0x100ae0: 0x3e00008  jr          $ra
label_100ae4:
    if (ctx->pc == 0x100AE4u) {
        ctx->pc = 0x100AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AE0u;
        // 0x100ae4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AE8u;
        goto label_fallthrough_0x100ae0;
    }
    ctx->pc = 0x100AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AE0u;
        // 0x100ae4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x100ae0:
    ctx->pc = 0x100AE8u;
}
