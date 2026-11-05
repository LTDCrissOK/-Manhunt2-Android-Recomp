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

// Function: sub_002879B8
// Address: 0x2879b8 - 0x287af8
void sub_002879B8_0x2879b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002879B8_0x2879b8");
#endif

    switch (ctx->pc) {
        case 0x2879c8u: goto label_2879c8;
        case 0x2879d8u: goto label_2879d8;
        case 0x2879e8u: goto label_2879e8;
        case 0x287a80u: goto label_287a80;
        case 0x287aa8u: goto label_287aa8;
        case 0x287ae4u: goto label_287ae4;
        default: break;
    }

    ctx->pc = 0x2879b8u;

    // 0x2879b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2879bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2879bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2879c0: 0xc0a2012  jal         func_288048
    ctx->pc = 0x2879C0u;
    SET_GPR_U32(ctx, 31, 0x2879C8u);
    ctx->pc = 0x2879C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2879C0u;
    // 0x2879c4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288048u, 0x2879C0u, 0x2879C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879C8u;
label_2879c8:
    // 0x2879c8: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2879C8u;
    {
        const bool branch_taken_0x2879c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2879CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879C8u;
        // 0x2879cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879c8) {
            ctx->pc = 0x287AE8u;
            goto label_287ae8;
        }
    }
    ctx->pc = 0x2879D0u;
    // 0x2879d0: 0xc0a1faa  jal         func_287EA8
    ctx->pc = 0x2879D0u;
    SET_GPR_U32(ctx, 31, 0x2879D8u);
    ctx->pc = 0x287EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EA8u, 0x2879D0u, 0x2879D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879D8u;
label_2879d8:
    // 0x2879d8: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2879D8u;
    {
        const bool branch_taken_0x2879d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2879DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879D8u;
        // 0x2879dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879d8) {
            ctx->pc = 0x287AE8u;
            goto label_287ae8;
        }
    }
    ctx->pc = 0x2879E0u;
    // 0x2879e0: 0xc0a1da8  jal         func_2876A0
    ctx->pc = 0x2879E0u;
    SET_GPR_U32(ctx, 31, 0x2879E8u);
    ctx->pc = 0x2876A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2876A0u, 0x2879E0u, 0x2879E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879E8u;
label_2879e8:
    // 0x2879e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2879E8u;
    {
        const bool branch_taken_0x2879e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879E8u;
        // 0x2879ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879e8) {
            ctx->pc = 0x2879F4u;
            goto label_2879f4;
        }
    }
    ctx->pc = 0x2879F0u;
    // 0x2879f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2879f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2879f4:
    // 0x2879f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2879f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2879f8: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2879f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2879fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2879FCu;
    {
        const bool branch_taken_0x2879fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879FCu;
        // 0x287a00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879fc) {
            ctx->pc = 0x287A1Cu;
            goto label_287a1c;
        }
    }
    ctx->pc = 0x287A04u;
    // 0x287a04: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x287a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x287a08: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287a0c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x287a10: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x287a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x287a14: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287A14u;
    {
        const bool branch_taken_0x287a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287a14) {
            ctx->pc = 0x287A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287A14u;
            // 0x287a18: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287A24u;
            goto label_287a24;
        }
    }
    ctx->pc = 0x287A1Cu;
label_287a1c:
    // 0x287a1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287A1Cu;
    {
        const bool branch_taken_0x287a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A1Cu;
        // 0x287a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a1c) {
            ctx->pc = 0x287A28u;
            goto label_287a28;
        }
    }
    ctx->pc = 0x287A24u;
label_287a24:
    // 0x287a24: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x287a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_287a28:
    // 0x287a28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x287A28u;
    {
        const bool branch_taken_0x287a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A28u;
        // 0x287a2c: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a28) {
            ctx->pc = 0x287A68u;
            goto label_287a68;
        }
    }
    ctx->pc = 0x287A30u;
    // 0x287a30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287A30u;
    {
        const bool branch_taken_0x287a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A30u;
        // 0x287a34: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a30) {
            ctx->pc = 0x287A4Cu;
            goto label_287a4c;
        }
    }
    ctx->pc = 0x287A38u;
    // 0x287a38: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287a3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x287a40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x287a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x287a44: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287A44u;
    {
        const bool branch_taken_0x287a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287a44) {
            ctx->pc = 0x287A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287A44u;
            // 0x287a48: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287A54u;
            goto label_287a54;
        }
    }
    ctx->pc = 0x287A4Cu;
label_287a4c:
    // 0x287a4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287A4Cu;
    {
        const bool branch_taken_0x287a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A4Cu;
        // 0x287a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a4c) {
            ctx->pc = 0x287A58u;
            goto label_287a58;
        }
    }
    ctx->pc = 0x287A54u;
label_287a54:
    // 0x287a54: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x287a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_287a58:
    // 0x287a58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287A58u;
    {
        const bool branch_taken_0x287a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A58u;
        // 0x287a5c: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a58) {
            ctx->pc = 0x287A6Cu;
            goto label_287a6c;
        }
    }
    ctx->pc = 0x287A60u;
    // 0x287a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287a64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_287a68:
    // 0x287a68: 0x8c82aa88  lw          $v0, -0x5578($a0)
    ctx->pc = 0x287a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
label_287a6c:
    // 0x287a6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287A6Cu;
    {
        const bool branch_taken_0x287a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A6Cu;
        // 0x287a70: 0x240903fb  addiu       $t1, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a6c) {
            ctx->pc = 0x287A88u;
            goto label_287a88;
        }
    }
    ctx->pc = 0x287A74u;
    // 0x287a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x287A78u;
    {
        const bool branch_taken_0x287a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A78u;
        // 0x287a7c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a78) {
            ctx->pc = 0x287ACCu;
            goto label_287acc;
        }
    }
    ctx->pc = 0x287A80u;
label_287a80:
    // 0x287a80: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x287A80u;
    {
        const bool branch_taken_0x287a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A80u;
        // 0x287a84: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a80) {
            ctx->pc = 0x287ACCu;
            goto label_287acc;
        }
    }
    ctx->pc = 0x287A88u;
label_287a88:
    // 0x287a88: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x287a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x287a8c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x287a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x287a90: 0x24482480  addiu       $t0, $v0, 0x2480
    ctx->pc = 0x287a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x287a94: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x287a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x287a98: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x287a98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287aa0: 0x24660078  addiu       $a2, $v1, 0x78
    ctx->pc = 0x287aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x287aa4: 0x0  nop
    ctx->pc = 0x287aa4u;
    // NOP
label_287aa8:
    // 0x287aa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x287aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287aac: 0x5049fff4  beql        $v0, $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x287AACu;
    {
        const bool branch_taken_0x287aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x287aac) {
            ctx->pc = 0x287AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287AACu;
            // 0x287ab0: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287a80;
        }
    }
    ctx->pc = 0x287AB4u;
    // 0x287ab4: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x287AB4u;
    {
        const bool branch_taken_0x287ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x287AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AB4u;
        // 0x287ab8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ab4) {
            ctx->pc = 0x287AC8u;
            goto label_287ac8;
        }
    }
    ctx->pc = 0x287ABCu;
    // 0x287abc: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x287abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x287ac0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x287AC0u;
    {
        const bool branch_taken_0x287ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AC0u;
        // 0x287ac4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ac0) {
            ctx->pc = 0x287AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287aa8;
        }
    }
    ctx->pc = 0x287AC8u;
label_287ac8:
    // 0x287ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287acc:
    // 0x287acc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287ACCu;
    {
        const bool branch_taken_0x287acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287ACCu;
        // 0x287ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287acc) {
            ctx->pc = 0x287AD8u;
            goto label_287ad8;
        }
    }
    ctx->pc = 0x287AD4u;
    // 0x287ad4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_287ad8:
    // 0x287ad8: 0x24a5a4d0  addiu       $a1, $a1, -0x5B30
    ctx->pc = 0x287ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943952));
    // 0x287adc: 0xc0a1f2a  jal         func_287CA8
    ctx->pc = 0x287ADCu;
    SET_GPR_U32(ctx, 31, 0x287AE4u);
    ctx->pc = 0x287AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287ADCu;
    // 0x287ae0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CA8u, 0x287ADCu, 0x287AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AE4u;
label_287ae4:
    // 0x287ae4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x287ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_287ae8:
    // 0x287ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287aec: 0x3e00008  jr          $ra
    ctx->pc = 0x287AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AECu;
        // 0x287af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287AF4u;
    // 0x287af4: 0x0  nop
    ctx->pc = 0x287af4u;
    // NOP
    ctx->pc = 0x287af8u;
}
