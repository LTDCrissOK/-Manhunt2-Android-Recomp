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

// Function: sub_00185448
// Address: 0x185448 - 0x1854c8
void sub_00185448_0x185448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185448_0x185448");
#endif

    switch (ctx->pc) {
        case 0x185460u: goto label_185460;
        case 0x185480u: goto label_185480;
        case 0x1854b0u: goto label_1854b0;
        default: break;
    }

    ctx->pc = 0x185448u;

    // 0x185448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18544c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185458: 0xc0608e8  jal         func_1823A0
    ctx->pc = 0x185458u;
    SET_GPR_U32(ctx, 31, 0x185460u);
    ctx->pc = 0x18545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185458u;
    // 0x18545c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1823A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1823A0u, 0x185458u, 0x185460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185460u;
label_185460:
    // 0x185460: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x185460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x185464: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x185464u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x185468: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x185468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x18546c: 0x2610bf34  addiu       $s0, $s0, -0x40CC
    ctx->pc = 0x18546cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950708));
    // 0x185470: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185474: 0x24a5f8f0  addiu       $a1, $a1, -0x710
    ctx->pc = 0x185474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
    // 0x185478: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185478u;
    SET_GPR_U32(ctx, 31, 0x185480u);
    ctx->pc = 0x18547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185478u;
    // 0x18547c: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185478u, 0x185480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185480u;
label_185480:
    // 0x185480: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x185480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x185484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185488: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x185488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x18548c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18548cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x185490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x185490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185494: 0xe44cffb4  swc1        $f12, -0x4C($v0)
    ctx->pc = 0x185494u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967220), bits); }
    // 0x185498: 0x2610fe8c  addiu       $s0, $s0, -0x174
    ctx->pc = 0x185498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966924));
    // 0x18549c: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x18549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1854a0: 0xe46cffb8  swc1        $f12, -0x48($v1)
    ctx->pc = 0x1854a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967224), bits); }
    // 0x1854a4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1854a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1854a8: 0xc060498  jal         func_181260
    ctx->pc = 0x1854A8u;
    SET_GPR_U32(ctx, 31, 0x1854B0u);
    ctx->pc = 0x1854ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854A8u;
    // 0x1854ac: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x1854A8u, 0x1854B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854B0u;
label_1854b0:
    // 0x1854b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1854b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1854b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1854b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1854b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1854b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1854bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1854BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1854C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854BCu;
        // 0x1854c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1854BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1854C4u;
    // 0x1854c4: 0x0  nop
    ctx->pc = 0x1854c4u;
    // NOP
    ctx->pc = 0x1854c8u;
}
