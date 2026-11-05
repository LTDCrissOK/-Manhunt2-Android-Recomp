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

// Function: sub_0016EF60
// Address: 0x16ef60 - 0x16efd8
void sub_0016EF60_0x16ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EF60_0x16ef60");
#endif

    switch (ctx->pc) {
        case 0x16ef7cu: goto label_16ef7c;
        case 0x16efacu: goto label_16efac;
        default: break;
    }

    ctx->pc = 0x16ef60u;

    // 0x16ef60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ef64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ef68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ef6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16ef6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ef74: 0xc05a618  jal         func_169860
    ctx->pc = 0x16EF74u;
    SET_GPR_U32(ctx, 31, 0x16EF7Cu);
    ctx->pc = 0x16EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EF74u;
    // 0x16ef78: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16EF74u, 0x16EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF7Cu;
label_16ef7c:
    // 0x16ef7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16ef7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef80: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x16EF80u;
    {
        const bool branch_taken_0x16ef80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF80u;
        // 0x16ef84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef80) {
            ctx->pc = 0x16EFC0u;
            goto label_16efc0;
        }
    }
    ctx->pc = 0x16EF88u;
    // 0x16ef88: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16ef8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16ef90: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16ef94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ef98: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16ef9c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EF9Cu;
    {
        const bool branch_taken_0x16ef9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF9Cu;
        // 0x16efa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef9c) {
            ctx->pc = 0x16EFC0u;
            goto label_16efc0;
        }
    }
    ctx->pc = 0x16EFA4u;
    // 0x16efa4: 0xc043e1e  jal         func_10F878
    ctx->pc = 0x16EFA4u;
    SET_GPR_U32(ctx, 31, 0x16EFACu);
    ctx->pc = 0x10F878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F878u, 0x16EFA4u, 0x16EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFACu;
label_16efac:
    // 0x16efac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EFACu;
    {
        const bool branch_taken_0x16efac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFACu;
        // 0x16efb0: 0x511026  xor         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efac) {
            ctx->pc = 0x16EFBCu;
            goto label_16efbc;
        }
    }
    ctx->pc = 0x16EFB4u;
    // 0x16efb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16EFB4u;
    {
        const bool branch_taken_0x16efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFB4u;
        // 0x16efb8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efb4) {
            ctx->pc = 0x16EFC0u;
            goto label_16efc0;
        }
    }
    ctx->pc = 0x16EFBCu;
label_16efbc:
    // 0x16efbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16efbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16efc0:
    // 0x16efc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16efc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16efc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16efc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16efc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16efc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16efcc: 0x3e00008  jr          $ra
    ctx->pc = 0x16EFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFCCu;
        // 0x16efd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EFD4u;
    // 0x16efd4: 0x0  nop
    ctx->pc = 0x16efd4u;
    // NOP
    ctx->pc = 0x16efd8u;
}
