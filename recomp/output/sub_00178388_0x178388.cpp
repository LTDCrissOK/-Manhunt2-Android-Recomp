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

// Function: sub_00178388
// Address: 0x178388 - 0x1783f0
void sub_00178388_0x178388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178388_0x178388");
#endif

    switch (ctx->pc) {
        case 0x1783a8u: goto label_1783a8;
        case 0x1783b4u: goto label_1783b4;
        default: break;
    }

    ctx->pc = 0x178388u;

    // 0x178388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17838c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178394: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17839c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1783a0: 0xc05e06c  jal         func_1781B0
    ctx->pc = 0x1783A0u;
    SET_GPR_U32(ctx, 31, 0x1783A8u);
    ctx->pc = 0x1783A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783A0u;
    // 0x1783a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1781B0u, 0x1783A0u, 0x1783A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783A8u;
label_1783a8:
    // 0x1783a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1783a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783ac: 0xc05e144  jal         func_178510
    ctx->pc = 0x1783ACu;
    SET_GPR_U32(ctx, 31, 0x1783B4u);
    ctx->pc = 0x1783B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783ACu;
    // 0x1783b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178510u, 0x1783ACu, 0x1783B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783B4u;
label_1783b4:
    // 0x1783b4: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1783b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1783b8: 0xac52001c  sw          $s2, 0x1C($v0)
    ctx->pc = 0x1783b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
    // 0x1783bc: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1783c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1783c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1783c4: 0xac7200d8  sw          $s2, 0xD8($v1)
    ctx->pc = 0x1783c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 18));
    // 0x1783c8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1783c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783cc: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x1783ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x1783d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1783d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1783d4: 0x92220158  lbu         $v0, 0x158($s1)
    ctx->pc = 0x1783d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1783d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1783d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1783dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1783dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1783e0: 0xa2220158  sb          $v0, 0x158($s1)
    ctx->pc = 0x1783e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 344), (uint8_t)GPR_U32(ctx, 2));
    // 0x1783e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1783e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1783e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1783E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1783ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783E8u;
        // 0x1783ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1783E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1783F0u;
}
