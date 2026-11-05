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

// Function: sub_00257898
// Address: 0x257898 - 0x257940
void sub_00257898_0x257898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257898_0x257898");
#endif

    switch (ctx->pc) {
        case 0x257928u: goto label_257928;
        default: break;
    }

    ctx->pc = 0x257898u;

    // 0x257898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25789c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2578a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2578a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2578a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2578a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2578a8: 0x920210c4  lbu         $v0, 0x10C4($s0)
    ctx->pc = 0x2578a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4292)));
    // 0x2578ac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2578ACu;
    {
        const bool branch_taken_0x2578ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578ACu;
        // 0x2578b0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578ac) {
            ctx->pc = 0x25792Cu;
            goto label_25792c;
        }
    }
    ctx->pc = 0x2578B4u;
    // 0x2578b4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2578b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2578b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2578B8u;
    {
        const bool branch_taken_0x2578b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2578BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578B8u;
        // 0x2578bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578b8) {
            ctx->pc = 0x2578D4u;
            goto label_2578d4;
        }
    }
    ctx->pc = 0x2578C0u;
    // 0x2578c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2578c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2578c4: 0x0  nop
    ctx->pc = 0x2578c4u;
    // NOP
    // 0x2578c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2578c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2578cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2578CCu;
    {
        const bool branch_taken_0x2578cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2578cc) {
            ctx->pc = 0x2578ECu;
            goto label_2578ec;
        }
    }
    ctx->pc = 0x2578D4u;
label_2578d4:
    // 0x2578d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2578d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2578d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2578d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2578dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2578dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2578e0: 0x0  nop
    ctx->pc = 0x2578e0u;
    // NOP
    // 0x2578e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2578e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2578e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2578e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2578ec:
    // 0x2578ec: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2578ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2578f0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2578f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2578f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2578f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2578f8: 0xc60110c0  lwc1        $f1, 0x10C0($s0)
    ctx->pc = 0x2578f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2578fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2578fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257900: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257904: 0x0  nop
    ctx->pc = 0x257904u;
    // NOP
    // 0x257908: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x257908u;
    {
        const bool branch_taken_0x257908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257908u;
        // 0x25790c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257908) {
            ctx->pc = 0x25792Cu;
            goto label_25792c;
        }
    }
    ctx->pc = 0x257910u;
    // 0x257910: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x257910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x257914: 0xa20210c5  sb          $v0, 0x10C5($s0)
    ctx->pc = 0x257914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4293), (uint8_t)GPR_U32(ctx, 2));
    // 0x257918: 0x24a55490  addiu       $a1, $a1, 0x5490
    ctx->pc = 0x257918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21648));
    // 0x25791c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257920: 0xc089fca  jal         func_227F28
    ctx->pc = 0x257920u;
    SET_GPR_U32(ctx, 31, 0x257928u);
    ctx->pc = 0x257924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257920u;
    // 0x257924: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F28u, 0x257920u, 0x257928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257928u;
label_257928:
    // 0x257928: 0xa20010c4  sb          $zero, 0x10C4($s0)
    ctx->pc = 0x257928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4292), (uint8_t)GPR_U32(ctx, 0));
label_25792c:
    // 0x25792c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25792cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257930: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x257930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257934: 0x3e00008  jr          $ra
    ctx->pc = 0x257934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257934u;
        // 0x257938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25793Cu;
    // 0x25793c: 0x0  nop
    ctx->pc = 0x25793cu;
    // NOP
    ctx->pc = 0x257940u;
}
