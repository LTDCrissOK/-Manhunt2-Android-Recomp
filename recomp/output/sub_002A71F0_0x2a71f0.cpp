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

// Function: sub_002A71F0
// Address: 0x2a71f0 - 0x2a7288
void sub_002A71F0_0x2a71f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A71F0_0x2a71f0");
#endif

    switch (ctx->pc) {
        case 0x2a7210u: goto label_2a7210;
        case 0x2a7224u: goto label_2a7224;
        case 0x2a723cu: goto label_2a723c;
        case 0x2a726cu: goto label_2a726c;
        default: break;
    }

    ctx->pc = 0x2a71f0u;

    // 0x2a71f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a71f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a71f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a71f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a71f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a71f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2a71fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a71fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7200: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a7204: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a7204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7208: 0xc0a9f48  jal         func_2A7D20
    ctx->pc = 0x2A7208u;
    SET_GPR_U32(ctx, 31, 0x2A7210u);
    ctx->pc = 0x2A720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7208u;
    // 0x2a720c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D20u, 0x2A7208u, 0x2A7210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7210u;
label_2a7210:
    // 0x2a7210: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2a7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7214: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a7214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a7218: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a7218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a721c: 0xc0a9f48  jal         func_2A7D20
    ctx->pc = 0x2A721Cu;
    SET_GPR_U32(ctx, 31, 0x2A7224u);
    ctx->pc = 0x2A7220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A721Cu;
    // 0x2a7220: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D20u, 0x2A721Cu, 0x2A7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7224u;
label_2a7224:
    // 0x2a7224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7228: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a7228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a722c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7230: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x2a7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7234: 0xc0a9c6c  jal         func_2A71B0
    ctx->pc = 0x2A7234u;
    SET_GPR_U32(ctx, 31, 0x2A723Cu);
    ctx->pc = 0x2A7238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7234u;
    // 0x2a7238: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71B0u, 0x2A7234u, 0x2A723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A723Cu;
label_2a723c:
    // 0x2a723c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2a723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7240: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a7240u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a7244: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2a7244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a724c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7250: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a7250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7254: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2a7254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7258: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a7258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a725c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a725cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a7260: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a7260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a7264: 0xc0a9c6c  jal         func_2A71B0
    ctx->pc = 0x2A7264u;
    SET_GPR_U32(ctx, 31, 0x2A726Cu);
    ctx->pc = 0x2A7268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7264u;
    // 0x2a7268: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71B0u, 0x2A7264u, 0x2A726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A726Cu;
label_2a726c:
    // 0x2a726c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a726cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7270: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a7270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7274: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a7274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7278: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2a7278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a727c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A727Cu;
        // 0x2a7280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A727Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7284u;
    // 0x2a7284: 0x0  nop
    ctx->pc = 0x2a7284u;
    // NOP
    ctx->pc = 0x2a7288u;
}
