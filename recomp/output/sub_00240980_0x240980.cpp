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

// Function: sub_00240980
// Address: 0x240980 - 0x240ba8
void sub_00240980_0x240980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240980_0x240980");
#endif

    switch (ctx->pc) {
        case 0x24099cu: goto label_24099c;
        case 0x2409c0u: goto label_2409c0;
        case 0x2409e8u: goto label_2409e8;
        case 0x2409f8u: goto label_2409f8;
        case 0x240a08u: goto label_240a08;
        case 0x240aa0u: goto label_240aa0;
        case 0x240b24u: goto label_240b24;
        case 0x240b64u: goto label_240b64;
        case 0x240b88u: goto label_240b88;
        case 0x240b94u: goto label_240b94;
        default: break;
    }

    ctx->pc = 0x240980u;

    // 0x240980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24098c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24098cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240994: 0xc06b640  jal         func_1AD900
    ctx->pc = 0x240994u;
    SET_GPR_U32(ctx, 31, 0x24099Cu);
    ctx->pc = 0x240998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240994u;
    // 0x240998: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x240994u, 0x24099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24099Cu;
label_24099c:
    // 0x24099c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24099Cu;
    {
        const bool branch_taken_0x24099c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24099Cu;
        // 0x2409a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24099c) {
            ctx->pc = 0x2409ECu;
            goto label_2409ec;
        }
    }
    ctx->pc = 0x2409A4u;
    // 0x2409a4: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x2409a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2409a8: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x2409a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x2409ac: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2409ACu;
    {
        const bool branch_taken_0x2409ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2409B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409ACu;
        // 0x2409b0: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409ac) {
            ctx->pc = 0x2409DCu;
            goto label_2409dc;
        }
    }
    ctx->pc = 0x2409B4u;
    // 0x2409b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2409b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409b8: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x2409b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
    // 0x2409bc: 0x0  nop
    ctx->pc = 0x2409bcu;
    // NOP
label_2409c0:
    // 0x2409c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2409c4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2409C4u;
    {
        const bool branch_taken_0x2409c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2409C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409C4u;
        // 0x2409c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409c4) {
            ctx->pc = 0x2409DCu;
            goto label_2409dc;
        }
    }
    ctx->pc = 0x2409CCu;
    // 0x2409cc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2409ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2409d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2409D0u;
    {
        const bool branch_taken_0x2409d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2409D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409D0u;
        // 0x2409d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409d0) {
            ctx->pc = 0x2409C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2409c0;
        }
    }
    ctx->pc = 0x2409D8u;
    // 0x2409d8: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x2409d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_2409dc:
    // 0x2409dc: 0x24a55a90  addiu       $a1, $a1, 0x5A90
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23184));
    // 0x2409e0: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x2409E0u;
    SET_GPR_U32(ctx, 31, 0x2409E8u);
    ctx->pc = 0x2409E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409E0u;
    // 0x2409e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2409E0u, 0x2409E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409E8u;
label_2409e8:
    // 0x2409e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2409e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2409ec:
    // 0x2409ec: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2409ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2409f0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2409F0u;
    SET_GPR_U32(ctx, 31, 0x2409F8u);
    ctx->pc = 0x2409F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409F0u;
    // 0x2409f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2409F0u, 0x2409F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409F8u;
label_2409f8:
    // 0x2409f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2409f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2409fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a00: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x240A00u;
    SET_GPR_U32(ctx, 31, 0x240A08u);
    ctx->pc = 0x240A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A00u;
    // 0x240a04: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240A00u, 0x240A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A08u;
label_240a08:
    // 0x240a08: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x240a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x240a0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a14: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x240a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
    // 0x240a18: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x240a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x240a1c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x240a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x240a20: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x240a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x240a24: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x240a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x240a28: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x240a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x240a2c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x240a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x240a30: 0x8c7100b4  lw          $s1, 0xB4($v1)
    ctx->pc = 0x240a30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x240a34: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x240A34u;
    {
        const bool branch_taken_0x240a34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x240A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A34u;
        // 0x240a38: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a34) {
            ctx->pc = 0x240A78u;
            goto label_240a78;
        }
    }
    ctx->pc = 0x240A3Cu;
    // 0x240a3c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x240a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x240a40: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x240a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x240a44: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x240A44u;
    {
        const bool branch_taken_0x240a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a44) {
            ctx->pc = 0x240A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240A44u;
            // 0x240a48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240A78u;
            goto label_240a78;
        }
    }
    ctx->pc = 0x240A4Cu;
    // 0x240a4c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x240a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x240a50: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x240a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x240a54: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240A54u;
    {
        const bool branch_taken_0x240a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A54u;
        // 0x240a58: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a54) {
            ctx->pc = 0x240A78u;
            goto label_240a78;
        }
    }
    ctx->pc = 0x240A5Cu;
    // 0x240a5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x240A5Cu;
    {
        const bool branch_taken_0x240a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A5Cu;
        // 0x240a60: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a5c) {
            ctx->pc = 0x240A78u;
            goto label_240a78;
        }
    }
    ctx->pc = 0x240A64u;
    // 0x240a64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240A64u;
    {
        const bool branch_taken_0x240a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A64u;
        // 0x240a68: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a64) {
            ctx->pc = 0x240A78u;
            goto label_240a78;
        }
    }
    ctx->pc = 0x240A6Cu;
    // 0x240a6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240A6Cu;
    {
        const bool branch_taken_0x240a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A6Cu;
        // 0x240a70: 0x2482fdc5  addiu       $v0, $a0, -0x23B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966725));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a6c) {
            ctx->pc = 0x240A7Cu;
            goto label_240a7c;
        }
    }
    ctx->pc = 0x240A74u;
    // 0x240a74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240a78:
    // 0x240a78: 0x2482fdc5  addiu       $v0, $a0, -0x23B
    ctx->pc = 0x240a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966725));
label_240a7c:
    // 0x240a7c: 0x2c42004e  sltiu       $v0, $v0, 0x4E
    ctx->pc = 0x240a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
    // 0x240a80: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x240A80u;
    {
        const bool branch_taken_0x240a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a80) {
            ctx->pc = 0x240B2Cu;
            goto label_240b2c;
        }
    }
    ctx->pc = 0x240A88u;
    // 0x240a88: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x240a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x240a8c: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x240a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x240a90: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x240A90u;
    {
        const bool branch_taken_0x240a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a90) {
            ctx->pc = 0x240A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240A90u;
            // 0x240a94: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x240AC4u;
            goto label_240ac4;
        }
    }
    ctx->pc = 0x240A98u;
    // 0x240a98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a9c: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x240a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_240aa0:
    // 0x240aa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240aa4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x240AA4u;
    {
        const bool branch_taken_0x240aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240aa4) {
            ctx->pc = 0x240AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240AA4u;
            // 0x240aa8: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x240AC4u;
            goto label_240ac4;
        }
    }
    ctx->pc = 0x240AACu;
    // 0x240aac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x240aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x240ab0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x240ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x240ab4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x240AB4u;
    {
        const bool branch_taken_0x240ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AB4u;
        // 0x240ab8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ab4) {
            ctx->pc = 0x240AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240aa0;
        }
    }
    ctx->pc = 0x240ABCu;
    // 0x240abc: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x240ac0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x240ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_240ac4:
    // 0x240ac4: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x240ac8: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x240ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x240acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240ad0: 0x0  nop
    ctx->pc = 0x240ad0u;
    // NOP
    // 0x240ad4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x240ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240ad8: 0x0  nop
    ctx->pc = 0x240ad8u;
    // NOP
    // 0x240adc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x240ADCu;
    {
        const bool branch_taken_0x240adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240adc) {
            ctx->pc = 0x240B14u;
            goto label_240b14;
        }
    }
    ctx->pc = 0x240AE4u;
    // 0x240ae4: 0x8e02056c  lw          $v0, 0x56C($s0)
    ctx->pc = 0x240ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x240ae8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x240AE8u;
    {
        const bool branch_taken_0x240ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ae8) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240AF0u;
    // 0x240af0: 0x8e020550  lw          $v0, 0x550($s0)
    ctx->pc = 0x240af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x240af4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x240AF4u;
    {
        const bool branch_taken_0x240af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240af4) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240AFCu;
    // 0x240afc: 0x8e020554  lw          $v0, 0x554($s0)
    ctx->pc = 0x240afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x240b00: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x240B00u;
    {
        const bool branch_taken_0x240b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240b00) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B08u;
    // 0x240b08: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x240b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x240b0c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x240B0Cu;
    {
        const bool branch_taken_0x240b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B0Cu;
        // 0x240b10: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b0c) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B14u;
label_240b14:
    // 0x240b14: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x240B14u;
    {
        const bool branch_taken_0x240b14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B14u;
        // 0x240b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b14) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B1Cu;
    // 0x240b1c: 0xc08dc16  jal         func_237058
    ctx->pc = 0x240B1Cu;
    SET_GPR_U32(ctx, 31, 0x240B24u);
    ctx->pc = 0x240B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B1Cu;
    // 0x240b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x240B1Cu, 0x240B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B24u;
label_240b24:
    // 0x240b24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x240B24u;
    {
        const bool branch_taken_0x240b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240b24) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B2Cu;
label_240b2c:
    // 0x240b2c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x240B2Cu;
    {
        const bool branch_taken_0x240b2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B2Cu;
        // 0x240b30: 0x2402025e  addiu       $v0, $zero, 0x25E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 606));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b2c) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B34u;
    // 0x240b34: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x240B34u;
    {
        const bool branch_taken_0x240b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x240B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B34u;
        // 0x240b38: 0x2402025f  addiu       $v0, $zero, 0x25F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 607));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b34) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B3Cu;
    // 0x240b3c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x240B3Cu;
    {
        const bool branch_taken_0x240b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x240B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B3Cu;
        // 0x240b40: 0x24020289  addiu       $v0, $zero, 0x289 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 649));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b3c) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B44u;
    // 0x240b44: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240B44u;
    {
        const bool branch_taken_0x240b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x240B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B44u;
        // 0x240b48: 0x2402028a  addiu       $v0, $zero, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b44) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B4Cu;
    // 0x240b4c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240B4Cu;
    {
        const bool branch_taken_0x240b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x240B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B4Cu;
        // 0x240b50: 0x2402028b  addiu       $v0, $zero, 0x28B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 651));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b4c) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B54u;
    // 0x240b54: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240B54u;
    {
        const bool branch_taken_0x240b54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x240B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B54u;
        // 0x240b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b54) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240B5Cu;
    // 0x240b5c: 0xc08dc16  jal         func_237058
    ctx->pc = 0x240B5Cu;
    SET_GPR_U32(ctx, 31, 0x240B64u);
    ctx->pc = 0x240B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B5Cu;
    // 0x240b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x240B5Cu, 0x240B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B64u;
label_240b64:
    // 0x240b64: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x240B64u;
    {
        const bool branch_taken_0x240b64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x240B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B64u;
        // 0x240b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b64) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B6Cu;
    // 0x240b6c: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x240b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x240b70: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x240b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x240b74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x240B74u;
    {
        const bool branch_taken_0x240b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240b74) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B7Cu;
    // 0x240b7c: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x240b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x240b80: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x240B80u;
    SET_GPR_U32(ctx, 31, 0x240B88u);
    ctx->pc = 0x240B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B80u;
    // 0x240b84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x240B80u, 0x240B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B88u;
label_240b88:
    // 0x240b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240b8c:
    // 0x240b8c: 0xc08a15a  jal         func_228568
    ctx->pc = 0x240B8Cu;
    SET_GPR_U32(ctx, 31, 0x240B94u);
    ctx->pc = 0x240B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B8Cu;
    // 0x240b90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x240B8Cu, 0x240B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B94u;
label_240b94:
    // 0x240b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x240BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BA0u;
        // 0x240ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240BA8u;
}
