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

// Function: sub_00367210
// Address: 0x367210 - 0x3672a8
void sub_00367210_0x367210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367210_0x367210");
#endif

    switch (ctx->pc) {
        case 0x36727cu: goto label_36727c;
        default: break;
    }

    ctx->pc = 0x367210u;

    // 0x367210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367214: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x367214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x367218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x367218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36721c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x36721cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367220: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x367220u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x367224: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x367224u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x367228: 0xc600cb68  lwc1        $f0, -0x3498($s0)
    ctx->pc = 0x367228u;
    { uint32_t bits = FAST_READ32(0x3FCB68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36722c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x36722cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367230: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x367230u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x367234: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x367234u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x367238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x367238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36723c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x367240: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x367240u;
    {
        const bool branch_taken_0x367240 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x367244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367240u;
        // 0x367244: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367240) {
            ctx->pc = 0x367288u;
            goto label_367288;
        }
    }
    ctx->pc = 0x367248u;
    // 0x367248: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x367248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36724c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x36724cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x367250: 0x8c65cb3c  lw          $a1, -0x34C4($v1)
    ctx->pc = 0x367250u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FCB3Cu));
    // 0x367254: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x367254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x367258: 0x8c46cb38  lw          $a2, -0x34C8($v0)
    ctx->pc = 0x367258u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FCB38u));
    // 0x36725c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x36725cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x367260: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x367260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x367264: 0xe46ecb6c  swc1        $f14, -0x3494($v1)
    ctx->pc = 0x367264u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FCB6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCB6Cu, _value); } while (0); }
    // 0x367268: 0xac86cb60  sw          $a2, -0x34A0($a0)
    ctx->pc = 0x367268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3FCB60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCB60u, _value); } while (0);
    // 0x36726c: 0xac45cb64  sw          $a1, -0x349C($v0)
    ctx->pc = 0x36726cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FCB64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCB64u, _value); } while (0);
    // 0x367270: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x367270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367274: 0xc0d9c16  jal         func_367058
    ctx->pc = 0x367274u;
    SET_GPR_U32(ctx, 31, 0x36727Cu);
    ctx->pc = 0x367278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367274u;
    // 0x367278: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367058u, 0x367274u, 0x36727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36727Cu;
label_36727c:
    // 0x36727c: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x36727cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x367280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x367280u;
    {
        const bool branch_taken_0x367280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367280u;
        // 0x367284: 0xe600cb68  swc1        $f0, -0x3498($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294953832), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367280) {
            ctx->pc = 0x36728Cu;
            goto label_36728c;
        }
    }
    ctx->pc = 0x367288u;
label_367288:
    // 0x367288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36728c:
    // 0x36728c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36728cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x367290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x367294: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x367294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x367298: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x367298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36729c: 0x3e00008  jr          $ra
    ctx->pc = 0x36729Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3672A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36729Cu;
        // 0x3672a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36729Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3672A4u;
    // 0x3672a4: 0x0  nop
    ctx->pc = 0x3672a4u;
    // NOP
    ctx->pc = 0x3672a8u;
}
