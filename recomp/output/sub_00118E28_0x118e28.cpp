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

// Function: sub_00118E28
// Address: 0x118e28 - 0x118ef4
void sub_00118E28_0x118e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118E28_0x118e28");
#endif

    switch (ctx->pc) {
        case 0x118ef0u: goto label_118ef0;
        default: break;
    }

    ctx->pc = 0x118e28u;

    // 0x118e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118e2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118e34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x118e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118e3c: 0x2e220019  sltiu       $v0, $s1, 0x19
    ctx->pc = 0x118e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x118e40: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x118E40u;
    {
        const bool branch_taken_0x118e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E40u;
        // 0x118e44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e40) {
            ctx->pc = 0x118EF4u;
            return;
        }
    }
    ctx->pc = 0x118E48u;
    // 0x118e48: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x118e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x118e4c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x118e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x118e50: 0x2442b5e0  addiu       $v0, $v0, -0x4A20
    ctx->pc = 0x118e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948320));
    // 0x118e54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118e58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118e5c: 0x800008  jr          $a0
    ctx->pc = 0x118E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118E64u: goto label_118e64;
            case 0x118E6Cu: goto label_118e6c;
            case 0x118E74u: goto label_118e74;
            case 0x118E7Cu: goto label_118e7c;
            case 0x118E84u: goto label_118e84;
            case 0x118E8Cu: goto label_118e8c;
            case 0x118E94u: goto label_118e94;
            case 0x118E9Cu: goto label_118e9c;
            case 0x118EA4u: goto label_118ea4;
            case 0x118EACu: goto label_118eac;
            case 0x118EB4u: goto label_118eb4;
            case 0x118EBCu: goto label_118ebc;
            case 0x118EC4u: goto label_118ec4;
            case 0x118ECCu: goto label_118ecc;
            case 0x118ED4u: goto label_118ed4;
            case 0x118EDCu: goto label_118edc;
            case 0x118EE4u: goto label_118ee4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118E64u;
label_118e64:
    // 0x118e64: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x118E64u;
    {
        const bool branch_taken_0x118e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E64u;
        // 0x118e68: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e64) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118E6Cu;
label_118e6c:
    // 0x118e6c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x118E6Cu;
    {
        const bool branch_taken_0x118e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E6Cu;
        // 0x118e70: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e6c) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118E74u;
label_118e74:
    // 0x118e74: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x118E74u;
    {
        const bool branch_taken_0x118e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E74u;
        // 0x118e78: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e74) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118E7Cu;
label_118e7c:
    // 0x118e7c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x118E7Cu;
    {
        const bool branch_taken_0x118e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E7Cu;
        // 0x118e80: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e7c) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118E84u;
label_118e84:
    // 0x118e84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x118E84u;
    {
        const bool branch_taken_0x118e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E84u;
        // 0x118e88: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e84) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118E8Cu;
label_118e8c:
    // 0x118e8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x118E8Cu;
    {
        const bool branch_taken_0x118e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E8Cu;
        // 0x118e90: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e8c) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118E94u;
label_118e94:
    // 0x118e94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x118E94u;
    {
        const bool branch_taken_0x118e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E94u;
        // 0x118e98: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e94) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118E9Cu;
label_118e9c:
    // 0x118e9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x118E9Cu;
    {
        const bool branch_taken_0x118e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E9Cu;
        // 0x118ea0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e9c) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118EA4u;
label_118ea4:
    // 0x118ea4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118EA4u;
    {
        const bool branch_taken_0x118ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EA4u;
        // 0x118ea8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ea4) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118EACu;
label_118eac:
    // 0x118eac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x118EACu;
    {
        const bool branch_taken_0x118eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EACu;
        // 0x118eb0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118eac) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118EB4u;
label_118eb4:
    // 0x118eb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x118EB4u;
    {
        const bool branch_taken_0x118eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EB4u;
        // 0x118eb8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118eb4) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118EBCu;
label_118ebc:
    // 0x118ebc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118EBCu;
    {
        const bool branch_taken_0x118ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EBCu;
        // 0x118ec0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ebc) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118EC4u;
label_118ec4:
    // 0x118ec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x118EC4u;
    {
        const bool branch_taken_0x118ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EC4u;
        // 0x118ec8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ec4) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118ECCu;
label_118ecc:
    // 0x118ecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118ECCu;
    {
        const bool branch_taken_0x118ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118ECCu;
        // 0x118ed0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ecc) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118ED4u;
label_118ed4:
    // 0x118ed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118ED4u;
    {
        const bool branch_taken_0x118ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118ED4u;
        // 0x118ed8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ed4) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118EDCu;
label_118edc:
    // 0x118edc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118EDCu;
    {
        const bool branch_taken_0x118edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EDCu;
        // 0x118ee0: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118edc) {
            ctx->pc = 0x118EE8u;
            goto label_118ee8;
        }
    }
    ctx->pc = 0x118EE4u;
label_118ee4:
    // 0x118ee4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x118ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_118ee8:
    // 0x118ee8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x118EE8u;
    SET_GPR_U32(ctx, 31, 0x118EF0u);
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x118EE8u, 0x118EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118EF0u;
label_118ef0:
    // 0x118ef0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x118ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x118ef4u;
}
