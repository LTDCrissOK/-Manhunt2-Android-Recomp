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

// Function: sub_00152230
// Address: 0x152230 - 0x152430
void sub_00152230_0x152230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152230_0x152230");
#endif

    switch (ctx->pc) {
        case 0x152290u: goto label_152290;
        case 0x1522b8u: goto label_1522b8;
        case 0x1522d4u: goto label_1522d4;
        case 0x1522e8u: goto label_1522e8;
        case 0x1522f0u: goto label_1522f0;
        case 0x152330u: goto label_152330;
        case 0x15235cu: goto label_15235c;
        case 0x152370u: goto label_152370;
        case 0x152378u: goto label_152378;
        case 0x15239cu: goto label_15239c;
        case 0x1523ccu: goto label_1523cc;
        case 0x1523e0u: goto label_1523e0;
        case 0x1523e8u: goto label_1523e8;
        default: break;
    }

    ctx->pc = 0x152230u;

    // 0x152230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x152230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x152234: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x152234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x152238: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x152238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x15223c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15223cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152240: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x152240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x152244: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x152244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x152248: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x152248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x15224c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x15224cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x152250: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x152250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x152254: 0x8c9008c0  lw          $s0, 0x8C0($a0)
    ctx->pc = 0x152254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2240)));
    // 0x152258: 0x16300003  bne         $s1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152258u;
    {
        const bool branch_taken_0x152258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x15225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152258u;
        // 0x15225c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152258) {
            ctx->pc = 0x152268u;
            goto label_152268;
        }
    }
    ctx->pc = 0x152260u;
    // 0x152260: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x152260u;
    {
        const bool branch_taken_0x152260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152260u;
        // 0x152264: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152260) {
            ctx->pc = 0x15240Cu;
            goto label_15240c;
        }
    }
    ctx->pc = 0x152268u;
label_152268:
    // 0x152268: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x152268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x15226c: 0x245202d8  addiu       $s2, $v0, 0x2D8
    ctx->pc = 0x15226cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x152270: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x152270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152274: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x152274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152278: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x152278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x15227c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x15227cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x152280: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x152280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x152284: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x152284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x152288: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x152288u;
    SET_GPR_U32(ctx, 31, 0x152290u);
    ctx->pc = 0x15228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152288u;
    // 0x15228c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x152288u, 0x152290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152290u;
label_152290:
    // 0x152290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152294: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x152294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152298: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x152298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x15229c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522a0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1522a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1522a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1522a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522a8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1522a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1522ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1522acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1522b0: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x1522B0u;
    SET_GPR_U32(ctx, 31, 0x1522B8u);
    ctx->pc = 0x1522B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1522B0u;
    // 0x1522b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x1522B0u, 0x1522B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522B8u;
label_1522b8:
    // 0x1522b8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1522B8u;
    {
        const bool branch_taken_0x1522b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1522BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522B8u;
        // 0x1522bc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522b8) {
            ctx->pc = 0x152308u;
            goto label_152308;
        }
    }
    ctx->pc = 0x1522C0u;
    // 0x1522c0: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x1522c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x1522c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1522c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522c8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1522c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522cc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1522CCu;
    SET_GPR_U32(ctx, 31, 0x1522D4u);
    ctx->pc = 0x1522D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1522CCu;
    // 0x1522d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1522CCu, 0x1522D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522D4u;
label_1522d4:
    // 0x1522d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1522d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1522d8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1522D8u;
    {
        const bool branch_taken_0x1522d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522D8u;
        // 0x1522dc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522d8) {
            ctx->pc = 0x1523F8u;
            goto label_1523f8;
        }
    }
    ctx->pc = 0x1522E0u;
    // 0x1522e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1522e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1522e4: 0x0  nop
    ctx->pc = 0x1522e4u;
    // NOP
label_1522e8:
    // 0x1522e8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1522E8u;
    SET_GPR_U32(ctx, 31, 0x1522F0u);
    ctx->pc = 0x1522ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1522E8u;
    // 0x1522ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1522E8u, 0x1522F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522F0u;
label_1522f0:
    // 0x1522f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1522f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1522f4: 0x0  nop
    ctx->pc = 0x1522f4u;
    // NOP
    // 0x1522f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1522F8u;
    {
        const bool branch_taken_0x1522f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1522f8) {
            ctx->pc = 0x1522FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1522F8u;
            // 0x1522fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1522E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1522e8;
        }
    }
    ctx->pc = 0x152300u;
    // 0x152300: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x152300u;
    {
        const bool branch_taken_0x152300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152300u;
        // 0x152304: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152300) {
            ctx->pc = 0x1523FCu;
            goto label_1523fc;
        }
    }
    ctx->pc = 0x152308u;
label_152308:
    // 0x152308: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x152308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15230c: 0xc45489d0  lwc1        $f20, -0x7630($v0)
    ctx->pc = 0x15230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152314: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x152314u;
    {
        const bool branch_taken_0x152314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152314u;
        // 0x152318: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152314) {
            ctx->pc = 0x152320u;
            goto label_152320;
        }
    }
    ctx->pc = 0x15231Cu;
    // 0x15231c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_152320:
    // 0x152320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152324: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x152324u;
    {
        const bool branch_taken_0x152324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152324u;
        // 0x152328: 0x3c100044  lui         $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152324) {
            ctx->pc = 0x1523B4u;
            goto label_1523b4;
        }
    }
    ctx->pc = 0x15232Cu;
    // 0x15232c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x15232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_152330:
    // 0x152330: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x152330u;
    {
        const bool branch_taken_0x152330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152330u;
        // 0x152334: 0xc600a568  lwc1        $f0, -0x5A98($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152330) {
            ctx->pc = 0x15233Cu;
            goto label_15233c;
        }
    }
    ctx->pc = 0x152338u;
    // 0x152338: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x152338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15233c:
    // 0x15233c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x15233cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152340: 0x0  nop
    ctx->pc = 0x152340u;
    // NOP
    // 0x152344: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x152344u;
    {
        const bool branch_taken_0x152344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152344u;
        // 0x152348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152344) {
            ctx->pc = 0x152390u;
            goto label_152390;
        }
    }
    ctx->pc = 0x15234Cu;
    // 0x15234c: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x15234cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x152350: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x152350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152354: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x152354u;
    SET_GPR_U32(ctx, 31, 0x15235Cu);
    ctx->pc = 0x152358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152354u;
    // 0x152358: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x152354u, 0x15235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15235Cu;
label_15235c:
    // 0x15235c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x152360: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x152360u;
    {
        const bool branch_taken_0x152360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152360u;
        // 0x152364: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152360) {
            ctx->pc = 0x1523F8u;
            goto label_1523f8;
        }
    }
    ctx->pc = 0x152368u;
    // 0x152368: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x152368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15236c: 0x0  nop
    ctx->pc = 0x15236cu;
    // NOP
label_152370:
    // 0x152370: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x152370u;
    SET_GPR_U32(ctx, 31, 0x152378u);
    ctx->pc = 0x152374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152370u;
    // 0x152374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x152370u, 0x152378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152378u;
label_152378:
    // 0x152378: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x152378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15237c: 0x0  nop
    ctx->pc = 0x15237cu;
    // NOP
    // 0x152380: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x152380u;
    {
        const bool branch_taken_0x152380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152380) {
            ctx->pc = 0x152384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152380u;
            // 0x152384: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152370;
        }
    }
    ctx->pc = 0x152388u;
    // 0x152388: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x152388u;
    {
        const bool branch_taken_0x152388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152388u;
        // 0x15238c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152388) {
            ctx->pc = 0x1523FCu;
            goto label_1523fc;
        }
    }
    ctx->pc = 0x152390u;
label_152390:
    // 0x152390: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x152390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152394: 0xc041180  jal         func_104600
    ctx->pc = 0x152394u;
    SET_GPR_U32(ctx, 31, 0x15239Cu);
    ctx->pc = 0x152398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152394u;
    // 0x152398: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104600u, 0x152394u, 0x15239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15239Cu;
label_15239c:
    // 0x15239c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x15239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1523a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1523A0u;
    {
        const bool branch_taken_0x1523a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1523A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523A0u;
        // 0x1523a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523a0) {
            ctx->pc = 0x1523ACu;
            goto label_1523ac;
        }
    }
    ctx->pc = 0x1523A8u;
    // 0x1523a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1523a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1523ac:
    // 0x1523ac: 0x5460ffe0  bnel        $v1, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1523ACu;
    {
        const bool branch_taken_0x1523ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1523ac) {
            ctx->pc = 0x1523B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1523ACu;
            // 0x1523b0: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152330;
        }
    }
    ctx->pc = 0x1523B4u;
label_1523b4:
    // 0x1523b4: 0x268202d8  addiu       $v0, $s4, 0x2D8
    ctx->pc = 0x1523b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 728));
    // 0x1523b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1523b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523bc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1523bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1523c0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1523c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523c4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1523C4u;
    SET_GPR_U32(ctx, 31, 0x1523CCu);
    ctx->pc = 0x1523C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523C4u;
    // 0x1523c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1523C4u, 0x1523CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523CCu;
label_1523cc:
    // 0x1523cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1523ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1523d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1523D0u;
    {
        const bool branch_taken_0x1523d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1523D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523D0u;
        // 0x1523d4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523d0) {
            ctx->pc = 0x1523F8u;
            goto label_1523f8;
        }
    }
    ctx->pc = 0x1523D8u;
    // 0x1523d8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1523d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1523dc: 0x0  nop
    ctx->pc = 0x1523dcu;
    // NOP
label_1523e0:
    // 0x1523e0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1523E0u;
    SET_GPR_U32(ctx, 31, 0x1523E8u);
    ctx->pc = 0x1523E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523E0u;
    // 0x1523e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1523E0u, 0x1523E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523E8u;
label_1523e8:
    // 0x1523e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1523e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1523ec: 0x0  nop
    ctx->pc = 0x1523ecu;
    // NOP
    // 0x1523f0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1523F0u;
    {
        const bool branch_taken_0x1523f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1523f0) {
            ctx->pc = 0x1523F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1523F0u;
            // 0x1523f4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1523E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1523e0;
        }
    }
    ctx->pc = 0x1523F8u;
label_1523f8:
    // 0x1523f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1523f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1523fc:
    // 0x1523fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1523fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152400: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x152400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x152404: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x152404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x152408: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x152408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_15240c:
    // 0x15240c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x15240cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152410: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x152410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x152414: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x152414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152418: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x152418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15241c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x15241cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152420: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x152420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152424: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x152424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152428: 0x3e00008  jr          $ra
    ctx->pc = 0x152428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152428u;
        // 0x15242c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152430u;
}
