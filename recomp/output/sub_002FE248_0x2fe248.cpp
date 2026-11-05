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

// Function: sub_002FE248
// Address: 0x2fe248 - 0x2fe368
void sub_002FE248_0x2fe248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE248_0x2fe248");
#endif

    switch (ctx->pc) {
        case 0x2fe290u: goto label_2fe290;
        case 0x2fe298u: goto label_2fe298;
        case 0x2fe2c8u: goto label_2fe2c8;
        case 0x2fe2e8u: goto label_2fe2e8;
        case 0x2fe2f0u: goto label_2fe2f0;
        case 0x2fe300u: goto label_2fe300;
        case 0x2fe340u: goto label_2fe340;
        default: break;
    }

    ctx->pc = 0x2fe248u;

    // 0x2fe248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fe248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fe24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fe250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fe254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe25c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fe25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fe260: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fe260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe264: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fe264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fe268: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fe268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fe26c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2fe26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2fe270: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2fe270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2fe274: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2fe274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2fe278: 0xae261410  sw          $a2, 0x1410($s1)
    ctx->pc = 0x2fe278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5136), GPR_U32(ctx, 6));
    // 0x2fe27c: 0xae271414  sw          $a3, 0x1414($s1)
    ctx->pc = 0x2fe27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5140), GPR_U32(ctx, 7));
    // 0x2fe280: 0x1602002f  bne         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2FE280u;
    {
        const bool branch_taken_0x2fe280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE280u;
        // 0x2fe284: 0xa22513f4  sb          $a1, 0x13F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5108), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe280) {
            ctx->pc = 0x2FE340u;
            goto label_2fe340;
        }
    }
    ctx->pc = 0x2FE288u;
    // 0x2fe288: 0xc0bf912  jal         func_2FE448
    ctx->pc = 0x2FE288u;
    SET_GPR_U32(ctx, 31, 0x2FE290u);
    ctx->pc = 0x2FE28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE288u;
    // 0x2fe28c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE448u, 0x2FE288u, 0x2FE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE290u;
label_2fe290:
    // 0x2fe290: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2FE290u;
    SET_GPR_U32(ctx, 31, 0x2FE298u);
    ctx->pc = 0x2FE294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE290u;
    // 0x2fe294: 0xe62013fc  swc1        $f0, 0x13FC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2FE290u, 0x2FE298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE298u;
label_2fe298:
    // 0x2fe298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fe298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe29c: 0x8e2313f0  lw          $v1, 0x13F0($s1)
    ctx->pc = 0x2fe29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5104)));
    // 0x2fe2a0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x2fe2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fe2a4: 0xa22013f5  sb          $zero, 0x13F5($s1)
    ctx->pc = 0x2fe2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5109), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fe2a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2fe2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2fe2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe2b0: 0x0  nop
    ctx->pc = 0x2fe2b0u;
    // NOP
    // 0x2fe2b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fe2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fe2b8: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE2B8u;
    {
        const bool branch_taken_0x2fe2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2B8u;
        // 0x2fe2bc: 0xe62013f8  swc1        $f0, 0x13F8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2b8) {
            ctx->pc = 0x2FE2CCu;
            goto label_2fe2cc;
        }
    }
    ctx->pc = 0x2FE2C0u;
    // 0x2fe2c0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2FE2C0u;
    SET_GPR_U32(ctx, 31, 0x2FE2C8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2FE2C0u, 0x2FE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2C8u;
label_2fe2c8:
    // 0x2fe2c8: 0x30530001  andi        $s3, $v0, 0x1
    ctx->pc = 0x2fe2c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fe2cc:
    // 0x2fe2cc: 0x8e2213f0  lw          $v0, 0x13F0($s1)
    ctx->pc = 0x2fe2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5104)));
    // 0x2fe2d0: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x2fe2d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe2d4: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FE2D4u;
    {
        const bool branch_taken_0x2fe2d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2D4u;
        // 0x2fe2d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2d4) {
            ctx->pc = 0x2FE334u;
            goto label_2fe334;
        }
    }
    ctx->pc = 0x2FE2DCu;
    // 0x2fe2dc: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe2e0: 0x2634140c  addiu       $s4, $s1, 0x140C
    ctx->pc = 0x2fe2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 5132));
    // 0x2fe2e4: 0x26321404  addiu       $s2, $s1, 0x1404
    ctx->pc = 0x2fe2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5124));
label_2fe2e8:
    // 0x2fe2e8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2FE2E8u;
    SET_GPR_U32(ctx, 31, 0x2FE2F0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2FE2E8u, 0x2FE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2F0u;
label_2fe2f0:
    // 0x2fe2f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fe2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe2f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2fe2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2f8: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x2FE2F8u;
    SET_GPR_U32(ctx, 31, 0x2FE300u);
    ctx->pc = 0x2FE2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2F8u;
    // 0x2fe2fc: 0x2203e  dsrl32      $a0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x2FE2F8u, 0x2FE300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE300u;
label_2fe300:
    // 0x2fe300: 0x2761818  mult        $v1, $s3, $s6
    ctx->pc = 0x2fe300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fe304: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fe304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fe308: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fe308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fe30c: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x2fe30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2fe310: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x2fe310u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x2fe314: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fe314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fe318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe31c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2fe31cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2fe320: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2fe320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fe324: 0x8e2213f0  lw          $v0, 0x13F0($s1)
    ctx->pc = 0x2fe324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5104)));
    // 0x2fe328: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2fe328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fe32c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FE32Cu;
    {
        const bool branch_taken_0x2fe32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE32Cu;
        // 0x2fe330: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe32c) {
            ctx->pc = 0x2FE2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe2e8;
        }
    }
    ctx->pc = 0x2FE334u;
label_2fe334:
    // 0x2fe334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe338: 0xc0cda26  jal         func_336898
    ctx->pc = 0x2FE338u;
    SET_GPR_U32(ctx, 31, 0x2FE340u);
    ctx->pc = 0x2FE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE338u;
    // 0x2fe33c: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2FE338u, 0x2FE340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE340u;
label_2fe340:
    // 0x2fe340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe344: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fe344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fe348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe34c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fe34cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fe350: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fe350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe354: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2fe354u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fe358: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2fe358u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe35c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2fe35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2fe360: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE360u;
        // 0x2fe364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE368u;
}
