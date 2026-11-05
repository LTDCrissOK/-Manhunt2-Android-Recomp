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

// Function: sub_002D73F8
// Address: 0x2d73f8 - 0x2d7478
void sub_002D73F8_0x2d73f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D73F8_0x2d73f8");
#endif

    switch (ctx->pc) {
        case 0x2d7418u: goto label_2d7418;
        default: break;
    }

    ctx->pc = 0x2d73f8u;

    // 0x2d73f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d73f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d73fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d73fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7400: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d7408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d740c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d7410: 0xc040d5c  jal         func_103570
    ctx->pc = 0x2D7410u;
    SET_GPR_U32(ctx, 31, 0x2D7418u);
    ctx->pc = 0x2D7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7410u;
    // 0x2d7414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103570u, 0x2D7410u, 0x2D7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7418u;
label_2d7418:
    // 0x2d7418: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7418u;
    {
        const bool branch_taken_0x2d7418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7418) {
            ctx->pc = 0x2D741Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7418u;
            // 0x2d741c: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7440u;
            goto label_2d7440;
        }
    }
    ctx->pc = 0x2D7420u;
    // 0x2d7420: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7424: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d7424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d7428: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d742c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d742cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d7430: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7434: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d7434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d7438: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7438u;
    {
        const bool branch_taken_0x2d7438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7438u;
        // 0x2d743c: 0xc441000c  lwc1        $f1, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7438) {
            ctx->pc = 0x2D7458u;
            goto label_2d7458;
        }
    }
    ctx->pc = 0x2D7440u;
label_2d7440:
    // 0x2d7440: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d7440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d7444: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2d7444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7448: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d7448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d744c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2d744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7450: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d7450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d7454: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2d7454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d7458:
    // 0x2d7458: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2d7458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d745c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d745cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d746c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D746Cu;
        // 0x2d7470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D746Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7474u;
    // 0x2d7474: 0x0  nop
    ctx->pc = 0x2d7474u;
    // NOP
    ctx->pc = 0x2d7478u;
}
