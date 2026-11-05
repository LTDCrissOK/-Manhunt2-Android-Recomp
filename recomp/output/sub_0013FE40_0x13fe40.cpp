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

// Function: sub_0013FE40
// Address: 0x13fe40 - 0x13ffb8
void sub_0013FE40_0x13fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FE40_0x13fe40");
#endif

    switch (ctx->pc) {
        case 0x13fe64u: goto label_13fe64;
        case 0x13fe70u: goto label_13fe70;
        case 0x13fe84u: goto label_13fe84;
        case 0x13fe98u: goto label_13fe98;
        case 0x13feacu: goto label_13feac;
        case 0x13feb8u: goto label_13feb8;
        case 0x13fec8u: goto label_13fec8;
        case 0x13fed4u: goto label_13fed4;
        case 0x13fef8u: goto label_13fef8;
        case 0x13ff04u: goto label_13ff04;
        case 0x13ff14u: goto label_13ff14;
        case 0x13ff24u: goto label_13ff24;
        case 0x13ff34u: goto label_13ff34;
        case 0x13ff44u: goto label_13ff44;
        case 0x13ff60u: goto label_13ff60;
        case 0x13ff74u: goto label_13ff74;
        case 0x13ff94u: goto label_13ff94;
        case 0x13ffa0u: goto label_13ffa0;
        default: break;
    }

    ctx->pc = 0x13fe40u;

    // 0x13fe40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13fe44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13fe4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13fe50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13fe50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13fe58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13fe5c: 0xc04fe6a  jal         func_13F9A8
    ctx->pc = 0x13FE5Cu;
    SET_GPR_U32(ctx, 31, 0x13FE64u);
    ctx->pc = 0x13FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE5Cu;
    // 0x13fe60: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9A8u, 0x13FE5Cu, 0x13FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE64u;
label_13fe64:
    // 0x13fe64: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13fe64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13fe68: 0xc05007c  jal         func_1401F0
    ctx->pc = 0x13FE68u;
    SET_GPR_U32(ctx, 31, 0x13FE70u);
    ctx->pc = 0x13FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE68u;
    // 0x13fe6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1401F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1401F0u, 0x13FE68u, 0x13FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE70u;
label_13fe70:
    // 0x13fe70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fe70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe74: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x13FE74u;
    {
        const bool branch_taken_0x13fe74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE74u;
        // 0x13fe78: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe74) {
            ctx->pc = 0x13FEA0u;
            goto label_13fea0;
        }
    }
    ctx->pc = 0x13FE7Cu;
    // 0x13fe7c: 0xc04deee  jal         func_137BB8
    ctx->pc = 0x13FE7Cu;
    SET_GPR_U32(ctx, 31, 0x13FE84u);
    ctx->pc = 0x13FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE7Cu;
    // 0x13fe80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BB8u, 0x13FE7Cu, 0x13FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE84u;
label_13fe84:
    // 0x13fe84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13FE84u;
    {
        const bool branch_taken_0x13fe84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fe84) {
            ctx->pc = 0x13FE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FE84u;
            // 0x13fe88: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FEA0u;
            goto label_13fea0;
        }
    }
    ctx->pc = 0x13FE8Cu;
    // 0x13fe8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe90: 0xc04ffee  jal         func_13FFB8
    ctx->pc = 0x13FE90u;
    SET_GPR_U32(ctx, 31, 0x13FE98u);
    ctx->pc = 0x13FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE90u;
    // 0x13fe94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FFB8u, 0x13FE90u, 0x13FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE98u;
label_13fe98:
    // 0x13fe98: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x13FE98u;
    {
        const bool branch_taken_0x13fe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE98u;
        // 0x13fe9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe98) {
            ctx->pc = 0x13FFA4u;
            goto label_13ffa4;
        }
    }
    ctx->pc = 0x13FEA0u;
label_13fea0:
    // 0x13fea0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fea4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13FEA4u;
    SET_GPR_U32(ctx, 31, 0x13FEACu);
    ctx->pc = 0x13FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEA4u;
    // 0x13fea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13FEA4u, 0x13FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEACu;
label_13feac:
    // 0x13feac: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13feacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13feb0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13FEB0u;
    SET_GPR_U32(ctx, 31, 0x13FEB8u);
    ctx->pc = 0x13FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEB0u;
    // 0x13feb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13FEB0u, 0x13FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEB8u;
label_13feb8:
    // 0x13feb8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13feb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13febc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13febcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fec0: 0xc04fe52  jal         func_13F948
    ctx->pc = 0x13FEC0u;
    SET_GPR_U32(ctx, 31, 0x13FEC8u);
    ctx->pc = 0x13FEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEC0u;
    // 0x13fec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F948u, 0x13FEC0u, 0x13FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEC8u;
label_13fec8:
    // 0x13fec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fecc: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13FECCu;
    SET_GPR_U32(ctx, 31, 0x13FED4u);
    ctx->pc = 0x13FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FECCu;
    // 0x13fed0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13FECCu, 0x13FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FED4u;
label_13fed4:
    // 0x13fed4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13fed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fedc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13fedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fee0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x13fee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fee4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x13fee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fee8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13fee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13feec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x13feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13fef0: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13FEF0u;
    SET_GPR_U32(ctx, 31, 0x13FEF8u);
    ctx->pc = 0x13FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEF0u;
    // 0x13fef4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13FEF0u, 0x13FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEF8u;
label_13fef8:
    // 0x13fef8: 0x8e050624  lw          $a1, 0x624($s0)
    ctx->pc = 0x13fef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x13fefc: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x13FEFCu;
    SET_GPR_U32(ctx, 31, 0x13FF04u);
    ctx->pc = 0x13FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEFCu;
    // 0x13ff00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x13FEFCu, 0x13FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF04u;
label_13ff04:
    // 0x13ff04: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FF04u;
    {
        const bool branch_taken_0x13ff04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF04u;
        // 0x13ff08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff04) {
            ctx->pc = 0x13FF2Cu;
            goto label_13ff2c;
        }
    }
    ctx->pc = 0x13FF0Cu;
    // 0x13ff0c: 0xc046104  jal         func_118410
    ctx->pc = 0x13FF0Cu;
    SET_GPR_U32(ctx, 31, 0x13FF14u);
    ctx->pc = 0x13FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF0Cu;
    // 0x13ff10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x13FF0Cu, 0x13FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF14u;
label_13ff14:
    // 0x13ff14: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13ff14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13ff18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff1c: 0xc04fe5e  jal         func_13F978
    ctx->pc = 0x13FF1Cu;
    SET_GPR_U32(ctx, 31, 0x13FF24u);
    ctx->pc = 0x13FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF1Cu;
    // 0x13ff20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F978u, 0x13FF1Cu, 0x13FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF24u;
label_13ff24:
    // 0x13ff24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13FF24u;
    {
        const bool branch_taken_0x13ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF24u;
        // 0x13ff28: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff24) {
            ctx->pc = 0x13FF48u;
            goto label_13ff48;
        }
    }
    ctx->pc = 0x13FF2Cu;
label_13ff2c:
    // 0x13ff2c: 0xc046104  jal         func_118410
    ctx->pc = 0x13FF2Cu;
    SET_GPR_U32(ctx, 31, 0x13FF34u);
    ctx->pc = 0x13FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF2Cu;
    // 0x13ff30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x13FF2Cu, 0x13FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF34u;
label_13ff34:
    // 0x13ff34: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13ff34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13ff38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff3c: 0xc04fe5e  jal         func_13F978
    ctx->pc = 0x13FF3Cu;
    SET_GPR_U32(ctx, 31, 0x13FF44u);
    ctx->pc = 0x13FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF3Cu;
    // 0x13ff40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F978u, 0x13FF3Cu, 0x13FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF44u;
label_13ff44:
    // 0x13ff44: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13ff44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_13ff48:
    // 0x13ff48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ff48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13ff50: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ff54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ff58: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13FF58u;
    SET_GPR_U32(ctx, 31, 0x13FF60u);
    ctx->pc = 0x13FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF58u;
    // 0x13ff5c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13FF58u, 0x13FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF60u;
label_13ff60:
    // 0x13ff60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x13ff64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ff68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff6c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13FF6Cu;
    SET_GPR_U32(ctx, 31, 0x13FF74u);
    ctx->pc = 0x13FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF6Cu;
    // 0x13ff70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13FF6Cu, 0x13FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF74u;
label_13ff74:
    // 0x13ff74: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13ff78: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ff7c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13ff80: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x13ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x13ff84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ff88: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x13ff88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13ff8c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13FF8Cu;
    SET_GPR_U32(ctx, 31, 0x13FF94u);
    ctx->pc = 0x13FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF8Cu;
    // 0x13ff90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13FF8Cu, 0x13FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF94u;
label_13ff94:
    // 0x13ff94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff98: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x13FF98u;
    SET_GPR_U32(ctx, 31, 0x13FFA0u);
    ctx->pc = 0x13FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF98u;
    // 0x13ff9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x13FF98u, 0x13FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFA0u;
label_13ffa0:
    // 0x13ffa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ffa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ffa4:
    // 0x13ffa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ffa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ffa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13ffa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ffac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13ffacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ffb0: 0x3e00008  jr          $ra
    ctx->pc = 0x13FFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFB0u;
        // 0x13ffb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FFB8u;
}
