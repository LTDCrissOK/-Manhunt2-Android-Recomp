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

// Function: sub_00337BA0
// Address: 0x337ba0 - 0x337c18
void sub_00337BA0_0x337ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337BA0_0x337ba0");
#endif

    switch (ctx->pc) {
        case 0x337bd0u: goto label_337bd0;
        default: break;
    }

    ctx->pc = 0x337ba0u;

    // 0x337ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x337ba4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337ba8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x337ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x337bac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x337bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x337bb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x337bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x337bb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x337bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337bbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x337bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337bc0: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x337bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337bc4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x337bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337bc8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337BC8u;
    SET_GPR_U32(ctx, 31, 0x337BD0u);
    ctx->pc = 0x337BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337BC8u;
    // 0x337bcc: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337BC8u, 0x337BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BD0u;
label_337bd0:
    // 0x337bd0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x337bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337bd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x337bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337bd8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x337bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337bdc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x337bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337be0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337be4: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x337be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x337be8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x337be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337bec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x337becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x337bf0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x337bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x337bf4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x337bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x337bf8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x337bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x337bfc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x337bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x337c00: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x337c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x337c04: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x337c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x337c08: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x337c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x337c0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x337c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337c10: 0x3e00008  jr          $ra
    ctx->pc = 0x337C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C10u;
        // 0x337c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337C18u;
}
