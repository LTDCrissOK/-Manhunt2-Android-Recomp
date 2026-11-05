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

// Function: sub_003EEB70
// Address: 0x3eeb70 - 0x3eec00
void sub_003EEB70_0x3eeb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEB70_0x3eeb70");
#endif

    switch (ctx->pc) {
        case 0x3eeb9cu: goto label_3eeb9c;
        case 0x3eebbcu: goto label_3eebbc;
        default: break;
    }

    ctx->pc = 0x3eeb70u;

    // 0x3eeb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eeb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3eeb74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eeb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3eeb78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eeb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3eeb7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eeb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eeb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3eeb84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eeb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3eeb88: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3eeb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eeb8c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EEB8Cu;
    {
        const bool branch_taken_0x3eeb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB8Cu;
        // 0x3eeb90: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb8c) {
            ctx->pc = 0x3EEBB0u;
            goto label_3eebb0;
        }
    }
    ctx->pc = 0x3EEB94u;
    // 0x3eeb94: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EEB94u;
    SET_GPR_U32(ctx, 31, 0x3EEB9Cu);
    ctx->pc = 0x3EEB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEB94u;
    // 0x3eeb98: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EEB94u, 0x3EEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB9Cu;
label_3eeb9c:
    // 0x3eeb9c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3eeb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3eeba0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3eeba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3eeba4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3eeba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3eeba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EEBA8u;
    {
        const bool branch_taken_0x3eeba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEBA8u;
        // 0x3eebac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeba8) {
            ctx->pc = 0x3EEBCCu;
            goto label_3eebcc;
        }
    }
    ctx->pc = 0x3EEBB0u;
label_3eebb0:
    // 0x3eebb0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x3eebb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3eebb4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EEBB4u;
    SET_GPR_U32(ctx, 31, 0x3EEBBCu);
    ctx->pc = 0x3EEBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEBB4u;
    // 0x3eebb8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EEBB4u, 0x3EEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEBBCu;
label_3eebbc:
    // 0x3eebbc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3eebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3eebc0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3eebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3eebc4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x3eebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x3eebc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3eebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3eebcc:
    // 0x3eebcc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3eebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3eebd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eebd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eebd4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3eebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3eebd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eebd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eebdc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3eebdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eebe0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3eebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3eebe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3eebe8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eebec: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x3eebecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eebf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eebf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eebf4: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEBF4u;
        // 0x3eebf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEBFCu;
    // 0x3eebfc: 0x0  nop
    ctx->pc = 0x3eebfcu;
    // NOP
    ctx->pc = 0x3eec00u;
}
