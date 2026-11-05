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

// Function: sub_002D3AC8
// Address: 0x2d3ac8 - 0x2d3b78
void sub_002D3AC8_0x2d3ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3AC8_0x2d3ac8");
#endif

    switch (ctx->pc) {
        case 0x2d3b48u: goto label_2d3b48;
        case 0x2d3b5cu: goto label_2d3b5c;
        default: break;
    }

    ctx->pc = 0x2d3ac8u;

    // 0x2d3ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d3ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d3acc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2d3accu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ad0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d3ad4: 0x1871021  addu        $v0, $t4, $a3
    ctx->pc = 0x2d3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x2d3ad8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2d3ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2d3adc: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x2d3adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2d3ae0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D3AE0u;
    {
        const bool branch_taken_0x2d3ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AE0u;
        // 0x2d3ae4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ae0) {
            ctx->pc = 0x2D3B68u;
            goto label_2d3b68;
        }
    }
    ctx->pc = 0x2D3AE8u;
    // 0x2d3ae8: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D3AE8u;
    {
        const bool branch_taken_0x2d3ae8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ae8) {
            ctx->pc = 0x2D3AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3AE8u;
            // 0x2d3aec: 0x8d8a00a0  lw          $t2, 0xA0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3AF0u;
            goto label_2d3af0;
        }
    }
    ctx->pc = 0x2D3AF0u;
label_2d3af0:
    // 0x2d3af0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2d3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d3af4: 0x2582008c  addiu       $v0, $t4, 0x8C
    ctx->pc = 0x2d3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 140));
    // 0x2d3af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3afc: 0x522c2  srl         $a0, $a1, 11
    ctx->pc = 0x2d3afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 11));
    // 0x2d3b00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d3b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3b04: 0x62ac2  srl         $a1, $a2, 11
    ctx->pc = 0x2d3b04u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 11));
    // 0x2d3b08: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2d3b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2d3b0c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2d3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d3b10: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2d3b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2d3b14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d3b18: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x2d3b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x2d3b1c: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x2d3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x2d3b20: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x2d3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x2d3b24: 0xa3a7001c  sb          $a3, 0x1C($sp)
    ctx->pc = 0x2d3b24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d3b28: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2d3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2d3b2c: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x2d3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x2d3b30: 0xa3a0001d  sb          $zero, 0x1D($sp)
    ctx->pc = 0x2d3b30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3b34: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3B34u;
    {
        const bool branch_taken_0x2d3b34 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B34u;
        // 0x2d3b38: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b34) {
            ctx->pc = 0x2D3B50u;
            goto label_2d3b50;
        }
    }
    ctx->pc = 0x2D3B3Cu;
    // 0x2d3b3c: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x2d3b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b40: 0xc0fb5ea  jal         func_3ED7A8
    ctx->pc = 0x2D3B40u;
    SET_GPR_U32(ctx, 31, 0x2D3B48u);
    ctx->pc = 0x2D3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3B40u;
    // 0x2d3b44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED7A8u, 0x2D3B40u, 0x2D3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B48u;
label_2d3b48:
    // 0x2d3b48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3B48u;
    {
        const bool branch_taken_0x2d3b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B48u;
        // 0x2d3b4c: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b48) {
            ctx->pc = 0x2D3B60u;
            goto label_2d3b60;
        }
    }
    ctx->pc = 0x2D3B50u;
label_2d3b50:
    // 0x2d3b50: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x2d3b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b54: 0xc0fb630  jal         func_3ED8C0
    ctx->pc = 0x2D3B54u;
    SET_GPR_U32(ctx, 31, 0x2D3B5Cu);
    ctx->pc = 0x2D3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3B54u;
    // 0x2d3b58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED8C0u, 0x2D3B54u, 0x2D3B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B5Cu;
label_2d3b5c:
    // 0x2d3b5c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2d3b5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d3b60:
    // 0x2d3b60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3b64: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2d3b64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_2d3b68:
    // 0x2d3b68: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d3b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3b6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d3b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d3b70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B70u;
        // 0x2d3b74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3B78u;
}
