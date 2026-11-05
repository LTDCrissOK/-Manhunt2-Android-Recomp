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

// Function: sub_00352608
// Address: 0x352608 - 0x352668
void sub_00352608_0x352608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352608_0x352608");
#endif

    switch (ctx->pc) {
        case 0x352624u: goto label_352624;
        default: break;
    }

    ctx->pc = 0x352608u;

    // 0x352608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35260c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x352610: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x352610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x352614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x352618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35261c: 0xc0d1534  jal         func_3454D0
    ctx->pc = 0x35261Cu;
    SET_GPR_U32(ctx, 31, 0x352624u);
    ctx->pc = 0x352620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35261Cu;
    // 0x352620: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3454D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3454D0u, 0x35261Cu, 0x352624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352624u;
label_352624:
    // 0x352624: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x352624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x352628: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x352628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x35262c: 0x24634500  addiu       $v1, $v1, 0x4500
    ctx->pc = 0x35262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17664));
    // 0x352630: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x352630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x352634: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x352634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x352638: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x352638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35263c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35263cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352640: 0x8e230140  lw          $v1, 0x140($s1)
    ctx->pc = 0x352640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x352644: 0xae030140  sw          $v1, 0x140($s0)
    ctx->pc = 0x352644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 3));
    // 0x352648: 0xc6200144  lwc1        $f0, 0x144($s1)
    ctx->pc = 0x352648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35264c: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x35264cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x352650: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x352650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x352654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x352654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x352658: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x352658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x35265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352660: 0x3e00008  jr          $ra
    ctx->pc = 0x352660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352660u;
        // 0x352664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352668u;
}
