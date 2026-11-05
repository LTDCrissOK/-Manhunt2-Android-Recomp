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

// Function: sub_0013D200
// Address: 0x13d200 - 0x13d310
void sub_0013D200_0x13d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D200_0x13d200");
#endif

    switch (ctx->pc) {
        case 0x13d240u: goto label_13d240;
        case 0x13d270u: goto label_13d270;
        case 0x13d280u: goto label_13d280;
        default: break;
    }

    ctx->pc = 0x13d200u;

    // 0x13d200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13d204: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13d204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13d208: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x13d208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13d20c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13d20cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d210: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13d214: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13d218: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x13d218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d21c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13d220: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d224: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x13d228: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13d228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d22c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13d22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13d230: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13d230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13d238: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13d238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13d23c: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x13d23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_13d240:
    // 0x13d240: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x13d240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13d244: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13D244u;
    {
        const bool branch_taken_0x13d244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D244u;
        // 0x13d248: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d244) {
            ctx->pc = 0x13D2D8u;
            goto label_13d2d8;
        }
    }
    ctx->pc = 0x13D24Cu;
    // 0x13d24c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13d250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d254: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13d254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d258: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13D258u;
    {
        const bool branch_taken_0x13d258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D258u;
        // 0x13d25c: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d258) {
            ctx->pc = 0x13D2C4u;
            goto label_13d2c4;
        }
    }
    ctx->pc = 0x13D260u;
    // 0x13d260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13d260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d268: 0xc04f4c4  jal         func_13D310
    ctx->pc = 0x13D268u;
    SET_GPR_U32(ctx, 31, 0x13D270u);
    ctx->pc = 0x13D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D268u;
    // 0x13d26c: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D310u, 0x13D268u, 0x13D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D270u;
label_13d270:
    // 0x13d270: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13d270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13d274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d278: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x13D278u;
    SET_GPR_U32(ctx, 31, 0x13D280u);
    ctx->pc = 0x13D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D278u;
    // 0x13d27c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x13D278u, 0x13D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D280u;
label_13d280:
    // 0x13d280: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d284: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x13d284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13d288: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x13d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13d28c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13d28cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13d290: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13d290u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x13d294: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x13d294u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13d298: 0x52600009  beql        $s3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13D298u;
    {
        const bool branch_taken_0x13d298 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d298) {
            ctx->pc = 0x13D29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D298u;
            // 0x13d29c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D2C0u;
            goto label_13d2c0;
        }
    }
    ctx->pc = 0x13D2A0u;
    // 0x13d2a0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x13d2a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d2a4: 0x0  nop
    ctx->pc = 0x13d2a4u;
    // NOP
    // 0x13d2a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13D2A8u;
    {
        const bool branch_taken_0x13d2a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2A8u;
        // 0x13d2ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2a8) {
            ctx->pc = 0x13D2B4u;
            goto label_13d2b4;
        }
    }
    ctx->pc = 0x13D2B0u;
    // 0x13d2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d2b4:
    // 0x13d2b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D2B4u;
    {
        const bool branch_taken_0x13d2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2B4u;
        // 0x13d2b8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2b4) {
            ctx->pc = 0x13D2C8u;
            goto label_13d2c8;
        }
    }
    ctx->pc = 0x13D2BCu;
    // 0x13d2bc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x13d2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d2c0:
    // 0x13d2c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13d2c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13d2c4:
    // 0x13d2c4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13d2c8:
    // 0x13d2c8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13d2c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d2cc: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x13d2ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13d2d0: 0x5460ffdb  bnel        $v1, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x13D2D0u;
    {
        const bool branch_taken_0x13d2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d2d0) {
            ctx->pc = 0x13D2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D2D0u;
            // 0x13d2d4: 0x92420009  lbu         $v0, 0x9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d240;
        }
    }
    ctx->pc = 0x13D2D8u;
label_13d2d8:
    // 0x13d2d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x13d2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d2dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13d2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d2e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13d2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d2e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13d2e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d2e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13d2e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d2ec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13d2ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d2f0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13d2f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13d2f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13d2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d2f8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x13d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13d2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2FCu;
        // 0x13d300: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D304u;
    // 0x13d304: 0x0  nop
    ctx->pc = 0x13d304u;
    // NOP
    // 0x13d308: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13d30c: 0x0  nop
    ctx->pc = 0x13d30cu;
    // NOP
    ctx->pc = 0x13d310u;
}
