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

// Function: sub_001C9F60
// Address: 0x1c9f60 - 0x1ca02c
void sub_001C9F60_0x1c9f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9F60_0x1c9f60");
#endif

    switch (ctx->pc) {
        case 0x1c9f94u: goto label_1c9f94;
        case 0x1c9fb0u: goto label_1c9fb0;
        default: break;
    }

    ctx->pc = 0x1c9f60u;

    // 0x1c9f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9f68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f70: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1c9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c9f74: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x1c9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1c9f78: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x1c9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x1c9f7c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9F7Cu;
    {
        const bool branch_taken_0x1c9f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f7c) {
            ctx->pc = 0x1C9FA8u;
            goto label_1c9fa8;
        }
    }
    ctx->pc = 0x1C9F84u;
    // 0x1c9f84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9f88: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1c9f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1c9f8c: 0xc09855c  jal         func_261570
    ctx->pc = 0x1C9F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9F94u);
    ctx->pc = 0x1C9F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F8Cu;
    // 0x1c9f90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261570u, 0x1C9F8Cu, 0x1C9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F94u;
label_1c9f94:
    // 0x1c9f94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9F94u;
    {
        const bool branch_taken_0x1c9f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f94) {
            ctx->pc = 0x1C9FA8u;
            goto label_1c9fa8;
        }
    }
    ctx->pc = 0x1C9F9Cu;
    // 0x1c9f9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9fa0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c9fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c9fa4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c9fa8:
    // 0x1c9fa8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1C9FA8u;
    SET_GPR_U32(ctx, 31, 0x1C9FB0u);
    ctx->pc = 0x1C9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FA8u;
    // 0x1c9fac: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1C9FA8u, 0x1C9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FB0u;
label_1c9fb0:
    // 0x1c9fb0: 0x2443ffd8  addiu       $v1, $v0, -0x28
    ctx->pc = 0x1c9fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1c9fb4: 0x2c62005c  sltiu       $v0, $v1, 0x5C
    ctx->pc = 0x1c9fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x1c9fb8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C9FB8u;
    {
        const bool branch_taken_0x1c9fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FB8u;
        // 0x1c9fbc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fb8) {
            ctx->pc = 0x1CA038u;
            return;
        }
    }
    ctx->pc = 0x1C9FC0u;
    // 0x1c9fc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9fc4: 0x2442cbc0  addiu       $v0, $v0, -0x3440
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953920));
    // 0x1c9fc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9fcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c9fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9fd0: 0x800008  jr          $a0
    ctx->pc = 0x1C9FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9FD8u: goto label_1c9fd8;
            case 0x1C9FE4u: goto label_1c9fe4;
            case 0x1C9FF0u: goto label_1c9ff0;
            case 0x1C9FFCu: goto label_1c9ffc;
            case 0x1CA008u: goto label_1ca008;
            case 0x1CA014u: goto label_1ca014;
            case 0x1CA020u: goto label_1ca020;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9FD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9FD8u;
label_1c9fd8:
    // 0x1c9fd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9fdc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1c9fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1c9fe0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c9fe4:
    // 0x1c9fe4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9fe8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9FE8u;
    {
        const bool branch_taken_0x1c9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FE8u;
        // 0x1c9fec: 0x3442000a  ori         $v0, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fe8) {
            ctx->pc = 0x1CA034u;
            return;
        }
    }
    ctx->pc = 0x1C9FF0u;
label_1c9ff0:
    // 0x1c9ff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9ff4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C9FF4u;
    {
        const bool branch_taken_0x1c9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FF4u;
        // 0x1c9ff8: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ff4) {
            ctx->pc = 0x1CA034u;
            return;
        }
    }
    ctx->pc = 0x1C9FFCu;
label_1c9ffc:
    // 0x1c9ffc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca000: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CA000u;
    {
        const bool branch_taken_0x1ca000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA000u;
        // 0x1ca004: 0x34420024  ori         $v0, $v0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca000) {
            ctx->pc = 0x1CA034u;
            return;
        }
    }
    ctx->pc = 0x1CA008u;
label_1ca008:
    // 0x1ca008: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca00c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA00Cu;
    {
        const bool branch_taken_0x1ca00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA00Cu;
        // 0x1ca010: 0x34420aa1  ori         $v0, $v0, 0xAA1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2721);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca00c) {
            ctx->pc = 0x1CA034u;
            return;
        }
    }
    ctx->pc = 0x1CA014u;
label_1ca014:
    // 0x1ca014: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca018: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA018u;
    {
        const bool branch_taken_0x1ca018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA018u;
        // 0x1ca01c: 0x344208a1  ori         $v0, $v0, 0x8A1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2209);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca018) {
            ctx->pc = 0x1CA034u;
            return;
        }
    }
    ctx->pc = 0x1CA020u;
label_1ca020:
    // 0x1ca020: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca024: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA024u;
    {
        const bool branch_taken_0x1ca024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA024u;
        // 0x1ca028: 0x34420042  ori         $v0, $v0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca024) {
            ctx->pc = 0x1CA034u;
            return;
        }
    }
    ctx->pc = 0x1CA02Cu;
}
