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

// Function: sub_002A7318
// Address: 0x2a7318 - 0x2a7390
void sub_002A7318_0x2a7318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7318_0x2a7318");
#endif

    switch (ctx->pc) {
        case 0x2a7334u: goto label_2a7334;
        case 0x2a7348u: goto label_2a7348;
        case 0x2a7378u: goto label_2a7378;
        default: break;
    }

    ctx->pc = 0x2a7318u;

    // 0x2a7318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a731c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a7320: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a7320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2a7324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a7324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a732c: 0xc0a9f48  jal         func_2A7D20
    ctx->pc = 0x2A732Cu;
    SET_GPR_U32(ctx, 31, 0x2A7334u);
    ctx->pc = 0x2A7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A732Cu;
    // 0x2a7330: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D20u, 0x2A732Cu, 0x2A7334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7334u;
label_2a7334:
    // 0x2a7334: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7338: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a7338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a733c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7340: 0xc0a9f48  jal         func_2A7D20
    ctx->pc = 0x2A7340u;
    SET_GPR_U32(ctx, 31, 0x2A7348u);
    ctx->pc = 0x2A7344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7340u;
    // 0x2a7344: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D20u, 0x2A7340u, 0x2A7348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7348u;
label_2a7348:
    // 0x2a7348: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2a7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a734c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a734cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7350: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2a7350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7354: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a7354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7358: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a7358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a735c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2a735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7360: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a7360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a7364: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2a7364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7368: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a7368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a736c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a736cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a7370: 0xc0a9c6c  jal         func_2A71B0
    ctx->pc = 0x2A7370u;
    SET_GPR_U32(ctx, 31, 0x2A7378u);
    ctx->pc = 0x2A7374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7370u;
    // 0x2a7374: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71B0u, 0x2A7370u, 0x2A7378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7378u;
label_2a7378:
    // 0x2a7378: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a7378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a737c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a737cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a7380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7384: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7384u;
        // 0x2a7388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A738Cu;
    // 0x2a738c: 0x0  nop
    ctx->pc = 0x2a738cu;
    // NOP
    ctx->pc = 0x2a7390u;
}
