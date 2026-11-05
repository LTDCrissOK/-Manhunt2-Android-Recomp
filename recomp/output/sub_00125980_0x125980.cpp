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

// Function: sub_00125980
// Address: 0x125980 - 0x125a58
void sub_00125980_0x125980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125980_0x125980");
#endif

    switch (ctx->pc) {
        case 0x1259dcu: goto label_1259dc;
        default: break;
    }

    ctx->pc = 0x125980u;

    // 0x125980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125984: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x125984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x125988: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x125988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12598c: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x12598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x125990: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x125990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x125994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12599c: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x489C1Cu));
    // 0x1259a0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1259A0u;
    {
        const bool branch_taken_0x1259a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259A0u;
        // 0x1259a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259a0) {
            ctx->pc = 0x125A3Cu;
            goto label_125a3c;
        }
    }
    ctx->pc = 0x1259A8u;
    // 0x1259a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1259a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1259ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1259acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1259b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1259b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1259b4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1259b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1259b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1259B8u;
    {
        const bool branch_taken_0x1259b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1259b8) {
            ctx->pc = 0x1259BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1259B8u;
            // 0x1259bc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1259C8u;
            goto label_1259c8;
        }
    }
    ctx->pc = 0x1259C0u;
    // 0x1259c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1259C0u;
    {
        const bool branch_taken_0x1259c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259C0u;
        // 0x1259c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259c0) {
            ctx->pc = 0x1259D0u;
            goto label_1259d0;
        }
    }
    ctx->pc = 0x1259C8u;
label_1259c8:
    // 0x1259c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1259c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1259cc: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x1259ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1259d0:
    // 0x1259d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1259d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259d4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1259D4u;
    SET_GPR_U32(ctx, 31, 0x1259DCu);
    ctx->pc = 0x1259D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1259D4u;
    // 0x1259d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1259D4u, 0x1259DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1259DCu;
label_1259dc:
    // 0x1259dc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1259dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1259e0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1259e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1259e4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1259e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1259e8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1259e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1259ec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1259ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1259f0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1259f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1259f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1259f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1259f8: 0x8e040828  lw          $a0, 0x828($s0)
    ctx->pc = 0x1259f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x1259fc: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x1259fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x125a00: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x125A00u;
    {
        const bool branch_taken_0x125a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x125A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A00u;
        // 0x125a04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a00) {
            ctx->pc = 0x125A28u;
            goto label_125a28;
        }
    }
    ctx->pc = 0x125A08u;
    // 0x125a08: 0xc6000860  lwc1        $f0, 0x860($s0)
    ctx->pc = 0x125a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125a0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125a10: 0x0  nop
    ctx->pc = 0x125a10u;
    // NOP
    // 0x125a14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x125A14u;
    {
        const bool branch_taken_0x125a14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x125A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A14u;
        // 0x125a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a14) {
            ctx->pc = 0x125A20u;
            goto label_125a20;
        }
    }
    ctx->pc = 0x125A1Cu;
    // 0x125a1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125a20:
    // 0x125a20: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x125A20u;
    {
        const bool branch_taken_0x125a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a20) {
            ctx->pc = 0x125A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125A20u;
            // 0x125a24: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125A40u;
            goto label_125a40;
        }
    }
    ctx->pc = 0x125A28u;
label_125a28:
    // 0x125a28: 0xe6010860  swc1        $f1, 0x860($s0)
    ctx->pc = 0x125a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2144), bits); }
    // 0x125a2c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x125a2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x125a30: 0xfa010850  sqc2        $vf1, 0x850($s0)
    ctx->pc = 0x125a30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125a34: 0x8ca2a9d4  lw          $v0, -0x562C($a1)
    ctx->pc = 0x125a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945236)));
    // 0x125a38: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x125a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_125a3c:
    // 0x125a3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x125a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125a40:
    // 0x125a40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x125a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125a44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125a48: 0x3e00008  jr          $ra
    ctx->pc = 0x125A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A48u;
        // 0x125a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125A50u;
    // 0x125a50: 0x0  nop
    ctx->pc = 0x125a50u;
    // NOP
    // 0x125a54: 0x0  nop
    ctx->pc = 0x125a54u;
    // NOP
    ctx->pc = 0x125a58u;
}
