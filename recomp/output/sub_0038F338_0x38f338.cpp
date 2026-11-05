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

// Function: sub_0038F338
// Address: 0x38f338 - 0x38f3d0
void sub_0038F338_0x38f338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F338_0x38f338");
#endif

    switch (ctx->pc) {
        case 0x38f374u: goto label_38f374;
        default: break;
    }

    ctx->pc = 0x38f338u;

    // 0x38f338: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38f338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38f33c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38f340: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38f340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f344: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38f348: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38f34c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x38f34cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f350: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38f350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38f354: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x38f354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f358: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f35c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38f35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38f364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f368: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38f36c: 0xc0e3c9a  jal         func_38F268
    ctx->pc = 0x38F36Cu;
    SET_GPR_U32(ctx, 31, 0x38F374u);
    ctx->pc = 0x38F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F36Cu;
    // 0x38f370: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F268u, 0x38F36Cu, 0x38F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F374u;
label_38f374:
    // 0x38f374: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x38f374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x38f378: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38f37c: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x38f37cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x38f380: 0x3c039fff  lui         $v1, 0x9FFF
    ctx->pc = 0x38f380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40959 << 16));
    // 0x38f384: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x38f384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x38f388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38f388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38f38c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x38f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x38f390: 0x2439024  and         $s2, $s2, $v1
    ctx->pc = 0x38f390u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x38f394: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x38f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x38f398: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38f398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38f39c: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x38f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x38f3a0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x38f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x38f3a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x38f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x38f3a8: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x38f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x38f3ac: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x38f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x38f3b0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38f3b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38f3b4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38f3b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38f3b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38f3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38f3bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38f3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38f3c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38f3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3C8u;
        // 0x38f3cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F3D0u;
}
