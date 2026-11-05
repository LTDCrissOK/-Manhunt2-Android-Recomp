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

// Function: sub_0016F478
// Address: 0x16f478 - 0x16f520
void sub_0016F478_0x16f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F478_0x16f478");
#endif

    switch (ctx->pc) {
        case 0x16f49cu: goto label_16f49c;
        case 0x16f4bcu: goto label_16f4bc;
        case 0x16f4c8u: goto label_16f4c8;
        case 0x16f4d8u: goto label_16f4d8;
        case 0x16f4e8u: goto label_16f4e8;
        case 0x16f4f8u: goto label_16f4f8;
        case 0x16f508u: goto label_16f508;
        default: break;
    }

    ctx->pc = 0x16f478u;

    // 0x16f478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f47c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16f47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16f480: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x16f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16f484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f488: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16f48c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16f48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16f490: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x16f490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x16f494: 0xc05bb28  jal         func_16ECA0
    ctx->pc = 0x16F494u;
    SET_GPR_U32(ctx, 31, 0x16F49Cu);
    ctx->pc = 0x16F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F494u;
    // 0x16f498: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ECA0u, 0x16F494u, 0x16F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F49Cu;
label_16f49c:
    // 0x16f49c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16f49cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f4a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F4A0u;
    {
        const bool branch_taken_0x16f4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4A0u;
        // 0x16f4a4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4a0) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F4A8u;
    // 0x16f4a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f4ac: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16f4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f4b4: 0xc043996  jal         func_10E658
    ctx->pc = 0x16F4B4u;
    SET_GPR_U32(ctx, 31, 0x16F4BCu);
    ctx->pc = 0x16F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4B4u;
    // 0x16f4b8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x16F4B4u, 0x16F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F4BCu;
label_16f4bc:
    // 0x16f4bc: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x16f4bcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16f4c0:
    // 0x16f4c0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16F4C0u;
    SET_GPR_U32(ctx, 31, 0x16F4C8u);
    ctx->pc = 0x16F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4C0u;
    // 0x16f4c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16F4C0u, 0x16F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F4C8u;
label_16f4c8:
    // 0x16f4c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F4C8u;
    {
        const bool branch_taken_0x16f4c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4C8u;
        // 0x16f4cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4c8) {
            ctx->pc = 0x16F4F0u;
            goto label_16f4f0;
        }
    }
    ctx->pc = 0x16F4D0u;
    // 0x16f4d0: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x16F4D0u;
    SET_GPR_U32(ctx, 31, 0x16F4D8u);
    ctx->pc = 0x16F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4D0u;
    // 0x16f4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x16F4D0u, 0x16F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F4D8u;
label_16f4d8:
    // 0x16f4d8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x16f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x16f4dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f4e0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16F4E0u;
    SET_GPR_U32(ctx, 31, 0x16F4E8u);
    ctx->pc = 0x16F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4E0u;
    // 0x16f4e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16F4E0u, 0x16F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F4E8u;
label_16f4e8:
    // 0x16f4e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16F4E8u;
    {
        const bool branch_taken_0x16f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4E8u;
        // 0x16f4ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4e8) {
            ctx->pc = 0x16F50Cu;
            goto label_16f50c;
        }
    }
    ctx->pc = 0x16F4F0u;
label_16f4f0:
    // 0x16f4f0: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x16F4F0u;
    SET_GPR_U32(ctx, 31, 0x16F4F8u);
    ctx->pc = 0x16F4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4F0u;
    // 0x16f4f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x16F4F0u, 0x16F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F4F8u;
label_16f4f8:
    // 0x16f4f8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x16f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x16f4fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f500: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16F500u;
    SET_GPR_U32(ctx, 31, 0x16F508u);
    ctx->pc = 0x16F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F500u;
    // 0x16f504: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16F500u, 0x16F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F508u;
label_16f508:
    // 0x16f508: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16f508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16f50c:
    // 0x16f50c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16f50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f510: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16f510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f514: 0x3e00008  jr          $ra
    ctx->pc = 0x16F514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F514u;
        // 0x16f518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F51Cu;
    // 0x16f51c: 0x0  nop
    ctx->pc = 0x16f51cu;
    // NOP
    ctx->pc = 0x16f520u;
}
