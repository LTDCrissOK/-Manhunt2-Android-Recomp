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

// Function: sub_002383E8
// Address: 0x2383e8 - 0x2388e8
void sub_002383E8_0x2383e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002383E8_0x2383e8");
#endif

    switch (ctx->pc) {
        case 0x23842cu: goto label_23842c;
        case 0x238434u: goto label_238434;
        case 0x23843cu: goto label_23843c;
        case 0x238448u: goto label_238448;
        case 0x238488u: goto label_238488;
        case 0x2384a8u: goto label_2384a8;
        case 0x2384d0u: goto label_2384d0;
        case 0x2384e0u: goto label_2384e0;
        case 0x2384ecu: goto label_2384ec;
        case 0x2384f4u: goto label_2384f4;
        case 0x238510u: goto label_238510;
        case 0x238570u: goto label_238570;
        case 0x238584u: goto label_238584;
        case 0x238638u: goto label_238638;
        case 0x238640u: goto label_238640;
        case 0x238708u: goto label_238708;
        case 0x2387d4u: goto label_2387d4;
        case 0x2387dcu: goto label_2387dc;
        case 0x2388b0u: goto label_2388b0;
        default: break;
    }

    ctx->pc = 0x2383e8u;

    // 0x2383e8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2383e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2383ec: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x2383ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x2383f0: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x2383f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x2383f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2383f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383f8: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x2383f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x2383fc: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x2383fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x238400: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x238400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x238404: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x238404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x238408: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x238408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x23840c: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x23840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x238410: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x238410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x238414: 0x14400129  bnez        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x238414u;
    {
        const bool branch_taken_0x238414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238414u;
        // 0x238418: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238414) {
            ctx->pc = 0x2388BCu;
            goto label_2388bc;
        }
    }
    ctx->pc = 0x23841Cu;
    // 0x23841c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238420: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x238420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238424: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x238424u;
    SET_GPR_U32(ctx, 31, 0x23842Cu);
    ctx->pc = 0x238428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238424u;
    // 0x238428: 0x8c730018  lw          $s3, 0x18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x238424u, 0x23842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23842Cu;
label_23842c:
    // 0x23842c: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x23842Cu;
    SET_GPR_U32(ctx, 31, 0x238434u);
    ctx->pc = 0x238430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23842Cu;
    // 0x238430: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x23842Cu, 0x238434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238434u;
label_238434:
    // 0x238434: 0xc079686  jal         func_1E5A18
    ctx->pc = 0x238434u;
    SET_GPR_U32(ctx, 31, 0x23843Cu);
    ctx->pc = 0x1E5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5A18u, 0x238434u, 0x23843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23843Cu;
label_23843c:
    // 0x23843c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238440: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x238440u;
    SET_GPR_U32(ctx, 31, 0x238448u);
    ctx->pc = 0x238444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238440u;
    // 0x238444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x238440u, 0x238448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238448u;
label_238448:
    // 0x238448: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x238448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x23844c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x238450: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x238450u;
    {
        const bool branch_taken_0x238450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238450) {
            ctx->pc = 0x238454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238450u;
            // 0x238454: 0x8e2300c4  lw          $v1, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238494u;
            goto label_238494;
        }
    }
    ctx->pc = 0x238458u;
    // 0x238458: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x238458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23845c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23845cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238460: 0x0  nop
    ctx->pc = 0x238460u;
    // NOP
    // 0x238464: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238468: 0x0  nop
    ctx->pc = 0x238468u;
    // NOP
    // 0x23846c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23846Cu;
    {
        const bool branch_taken_0x23846c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23846Cu;
        // 0x238470: 0x24053210  addiu       $a1, $zero, 0x3210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23846c) {
            ctx->pc = 0x238490u;
            goto label_238490;
        }
    }
    ctx->pc = 0x238474u;
    // 0x238474: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x238474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x238478: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x238478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23847c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x23847cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238480: 0xc079830  jal         func_1E60C0
    ctx->pc = 0x238480u;
    SET_GPR_U32(ctx, 31, 0x238488u);
    ctx->pc = 0x238484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238480u;
    // 0x238484: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E60C0u, 0x238480u, 0x238488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238488u;
label_238488:
    // 0x238488: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x238488u;
    {
        const bool branch_taken_0x238488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238488u;
        // 0x23848c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238488) {
            ctx->pc = 0x2384D4u;
            goto label_2384d4;
        }
    }
    ctx->pc = 0x238490u;
label_238490:
    // 0x238490: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x238490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_238494:
    // 0x238494: 0x24053000  addiu       $a1, $zero, 0x3000
    ctx->pc = 0x238494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x238498: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x238498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23849c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x23849cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2384a0: 0xc079830  jal         func_1E60C0
    ctx->pc = 0x2384A0u;
    SET_GPR_U32(ctx, 31, 0x2384A8u);
    ctx->pc = 0x2384A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384A0u;
    // 0x2384a4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E60C0u, 0x2384A0u, 0x2384A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384A8u;
label_2384a8:
    // 0x2384a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2384a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2384ac: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2384ACu;
    {
        const bool branch_taken_0x2384ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2384ac) {
            ctx->pc = 0x2384B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2384ACu;
            // 0x2384b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2384D8u;
            goto label_2384d8;
        }
    }
    ctx->pc = 0x2384B4u;
    // 0x2384b4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2384b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2384b8: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2384b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x2384bc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2384bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2384c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2384C0u;
    {
        const bool branch_taken_0x2384c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2384c0) {
            ctx->pc = 0x2384C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2384C0u;
            // 0x2384c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2384D8u;
            goto label_2384d8;
        }
    }
    ctx->pc = 0x2384C8u;
    // 0x2384c8: 0xc076bce  jal         func_1DAF38
    ctx->pc = 0x2384C8u;
    SET_GPR_U32(ctx, 31, 0x2384D0u);
    ctx->pc = 0x2384CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384C8u;
    // 0x2384cc: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAF38u, 0x2384C8u, 0x2384D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384D0u;
label_2384d0:
    // 0x2384d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2384d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2384d4:
    // 0x2384d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2384d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2384d8:
    // 0x2384d8: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x2384D8u;
    SET_GPR_U32(ctx, 31, 0x2384E0u);
    ctx->pc = 0x2384DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384D8u;
    // 0x2384dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2384D8u, 0x2384E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384E0u;
label_2384e0:
    // 0x2384e0: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x2384e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2384e4: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x2384E4u;
    SET_GPR_U32(ctx, 31, 0x2384ECu);
    ctx->pc = 0x2384E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384E4u;
    // 0x2384e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x2384E4u, 0x2384ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384ECu;
label_2384ec:
    // 0x2384ec: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2384ECu;
    SET_GPR_U32(ctx, 31, 0x2384F4u);
    ctx->pc = 0x2384F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384ECu;
    // 0x2384f0: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2384ECu, 0x2384F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384F4u;
label_2384f4:
    // 0x2384f4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2384F4u;
    {
        const bool branch_taken_0x2384f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384F4u;
        // 0x2384f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384f4) {
            ctx->pc = 0x238590u;
            goto label_238590;
        }
    }
    ctx->pc = 0x2384FCu;
    // 0x2384fc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2384fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x238500: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x238500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x238504: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238508: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x238508u;
    {
        const bool branch_taken_0x238508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238508u;
        // 0x23850c: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238508) {
            ctx->pc = 0x238568u;
            goto label_238568;
        }
    }
    ctx->pc = 0x238510u;
label_238510:
    // 0x238510: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x238510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x238514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x238518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23851c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23851Cu;
    {
        const bool branch_taken_0x23851c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23851c) {
            ctx->pc = 0x23857Cu;
            goto label_23857c;
        }
    }
    ctx->pc = 0x238524u;
    // 0x238524: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x238524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x238528: 0x38440008  xori        $a0, $v0, 0x8
    ctx->pc = 0x238528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x23852c: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23852Cu;
    {
        const bool branch_taken_0x23852c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23852c) {
            ctx->pc = 0x23857Cu;
            goto label_23857c;
        }
    }
    ctx->pc = 0x238534u;
    // 0x238534: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x238534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x238538: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x238538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x23853c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23853cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x238540: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x238540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x238544: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x238544u;
    {
        const bool branch_taken_0x238544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238544u;
        // 0x238548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238544) {
            ctx->pc = 0x23857Cu;
            goto label_23857c;
        }
    }
    ctx->pc = 0x23854Cu;
    // 0x23854c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x23854cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x238550: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x238550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238554: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x238554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238558: 0x0  nop
    ctx->pc = 0x238558u;
    // NOP
    // 0x23855c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x23855Cu;
    {
        const bool branch_taken_0x23855c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23855c) {
            ctx->pc = 0x23857Cu;
            goto label_23857c;
        }
    }
    ctx->pc = 0x238564u;
    // 0x238564: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_238568:
    // 0x238568: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x238568u;
    SET_GPR_U32(ctx, 31, 0x238570u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x238568u, 0x238570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238570u;
label_238570:
    // 0x238570: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x238570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x238574: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x238574u;
    {
        const bool branch_taken_0x238574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238574u;
        // 0x238578: 0x8e4391dc  lw          $v1, -0x6E24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238574) {
            ctx->pc = 0x238510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238510;
        }
    }
    ctx->pc = 0x23857Cu;
label_23857c:
    // 0x23857c: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x23857Cu;
    SET_GPR_U32(ctx, 31, 0x238584u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x23857Cu, 0x238584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238584u;
label_238584:
    // 0x238584: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x238584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x238588: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x238588u;
    {
        const bool branch_taken_0x238588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238588u;
        // 0x23858c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238588) {
            ctx->pc = 0x2388C0u;
            goto label_2388c0;
        }
    }
    ctx->pc = 0x238590u;
label_238590:
    // 0x238590: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x238590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x238594: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x238594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x238598: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x238598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x23859c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2385a0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2385a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2385a4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2385a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2385a8: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x2385a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2385ac: 0x26630030  addiu       $v1, $s3, 0x30
    ctx->pc = 0x2385acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2385b0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2385b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2385b4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2385b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2385b8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2385b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2385bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2385bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2385c0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2385c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2385c4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2385c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2385c8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2385c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2385cc: 0x26920030  addiu       $s2, $s4, 0x30
    ctx->pc = 0x2385ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2385d0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2385d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2385d4: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x2385d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2385d8: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x2385d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2385dc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2385dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2385e0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2385e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2385e4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2385e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2385e8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2385e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2385ec: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2385ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2385f0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2385f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2385f4: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x2385f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2385f8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2385f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2385fc: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2385fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x238600: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x238600u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x238604: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x238604u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238608: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x238608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23860c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x23860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x238610: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x238610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238614: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x238614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x238618: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x238618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23861c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x23861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238620: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x238620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238624: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x238624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x238628: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x238628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23862c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x23862cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x238630: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x238630u;
    SET_GPR_U32(ctx, 31, 0x238638u);
    ctx->pc = 0x238634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238630u;
    // 0x238634: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x238630u, 0x238638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238638u;
label_238638:
    // 0x238638: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x238638u;
    SET_GPR_U32(ctx, 31, 0x238640u);
    ctx->pc = 0x23863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238638u;
    // 0x23863c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x238638u, 0x238640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238640u;
label_238640:
    // 0x238640: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x238640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238644: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x238644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x238648: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x238648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23864c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x23864cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x238650: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x238650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x238654: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x238654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x238658: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x238658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x23865c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23865cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x238660: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x238660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238664: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x238664u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x238668: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x238668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23866c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x23866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238670: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x238670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238674: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x238674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x238678: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x238678u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23867c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23867cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x238680: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x238680u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x238684: 0x0  nop
    ctx->pc = 0x238684u;
    // NOP
    // 0x238688: 0x0  nop
    ctx->pc = 0x238688u;
    // NOP
    // 0x23868c: 0x46000044  c1          0x44
    ctx->pc = 0x23868cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x238690: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x238690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x238694: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x238694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238698: 0x0  nop
    ctx->pc = 0x238698u;
    // NOP
    // 0x23869c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x23869cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2386a0: 0x0  nop
    ctx->pc = 0x2386a0u;
    // NOP
    // 0x2386a4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2386A4u;
    {
        const bool branch_taken_0x2386a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2386A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386A4u;
        // 0x2386a8: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386a4) {
            ctx->pc = 0x2386D0u;
            goto label_2386d0;
        }
    }
    ctx->pc = 0x2386ACu;
    // 0x2386ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2386acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2386b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2386b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2386b4: 0x0  nop
    ctx->pc = 0x2386b4u;
    // NOP
    // 0x2386b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2386b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2386bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2386bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2386c0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2386c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2386c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2386c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2386c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2386c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2386cc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2386ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2386d0:
    // 0x2386d0: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2386d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2386d4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2386d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x2386d8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2386d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x2386dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2386dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2386e0: 0x0  nop
    ctx->pc = 0x2386e0u;
    // NOP
    // 0x2386e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2386e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2386e8: 0x0  nop
    ctx->pc = 0x2386e8u;
    // NOP
    // 0x2386ec: 0x45010074  bc1t        . + 4 + (0x74 << 2)
    ctx->pc = 0x2386ECu;
    {
        const bool branch_taken_0x2386ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2386F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386ECu;
        // 0x2386f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386ec) {
            ctx->pc = 0x2388C0u;
            goto label_2388c0;
        }
    }
    ctx->pc = 0x2386F4u;
    // 0x2386f4: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2386f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2386f8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2386fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2386fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238700: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x238700u;
    SET_GPR_U32(ctx, 31, 0x238708u);
    ctx->pc = 0x238704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238700u;
    // 0x238704: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x238700u, 0x238708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238708u;
label_238708:
    // 0x238708: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x238708u;
    {
        const bool branch_taken_0x238708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238708u;
        // 0x23870c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238708) {
            ctx->pc = 0x2388C0u;
            goto label_2388c0;
        }
    }
    ctx->pc = 0x238710u;
    // 0x238710: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x238710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x238714: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x238714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x238718: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x238718u;
    {
        const bool branch_taken_0x238718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238718u;
        // 0x23871c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238718) {
            ctx->pc = 0x2388C0u;
            goto label_2388c0;
        }
    }
    ctx->pc = 0x238720u;
    // 0x238720: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x238720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x238724: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x238724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x238728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23872c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x23872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x238730: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x238730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x238734: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x238734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x238738: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x238738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23873c: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x23873cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x238740: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x238740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x238744: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x238744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x238748: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x238748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23874c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x23874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x238750: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x238750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238754: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x238754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238758: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x238758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23875c: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x23875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238760: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x238760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x238764: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x238764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x238768: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x238768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23876c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x23876cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x238770: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x238770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238774: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x238774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x238778: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x238778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x23877c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x23877cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x238780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238784: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x238784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x238788: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x238788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x23878c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x23878cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x238790: 0xe7b4003c  swc1        $f20, 0x3C($sp)
    ctx->pc = 0x238790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x238794: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x238794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x238798: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x238798u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23879c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23879cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2387a0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2387a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2387a4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2387a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2387a8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2387a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2387ac: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2387acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2387b0: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2387b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2387b4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2387b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2387b8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2387b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2387bc: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x2387bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2387c0: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x2387c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2387c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2387c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2387c8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2387c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2387cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2387CCu;
    SET_GPR_U32(ctx, 31, 0x2387D4u);
    ctx->pc = 0x2387D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387CCu;
    // 0x2387d0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2387CCu, 0x2387D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387D4u;
label_2387d4:
    // 0x2387d4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2387D4u;
    SET_GPR_U32(ctx, 31, 0x2387DCu);
    ctx->pc = 0x2387D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387D4u;
    // 0x2387d8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2387D4u, 0x2387DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387DCu;
label_2387dc:
    // 0x2387dc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2387dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2387e0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2387e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2387e4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2387e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2387e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2387ec: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2387ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2387f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2387f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2387f4: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x2387f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x2387f8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2387f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2387fc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2387fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238800: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x238800u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x238804: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x238804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x238808: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x238808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23880c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x23880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238810: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x238810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x238814: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x238814u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x238818: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x238818u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23881c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x23881cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x238820: 0x0  nop
    ctx->pc = 0x238820u;
    // NOP
    // 0x238824: 0x0  nop
    ctx->pc = 0x238824u;
    // NOP
    // 0x238828: 0x46000044  c1          0x44
    ctx->pc = 0x238828u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x23882c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x23882cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x238830: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x238830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238834: 0x0  nop
    ctx->pc = 0x238834u;
    // NOP
    // 0x238838: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x238838u;
    {
        const bool branch_taken_0x238838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238838u;
        // 0x23883c: 0xe7a10110  swc1        $f1, 0x110($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238838) {
            ctx->pc = 0x238864u;
            goto label_238864;
        }
    }
    ctx->pc = 0x238840u;
    // 0x238840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238848: 0x0  nop
    ctx->pc = 0x238848u;
    // NOP
    // 0x23884c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23884cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x238850: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x238850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x238854: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x238854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x238858: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x238858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23885c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23885cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x238860: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x238860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
label_238864:
    // 0x238864: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x238864u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238868: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x238868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23886c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x23886cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x238870: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x238870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x238874: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x238874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x238878: 0xa3a400b0  sb          $a0, 0xB0($sp)
    ctx->pc = 0x238878u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 4));
    // 0x23887c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x23887cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x238880: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x238880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x238884: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x238884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x238888: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x238888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23888c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x23888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x238890: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x238890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238894: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x238894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x238898: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x238898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23889c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388a0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2388a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2388a4: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2388a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x2388a8: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x2388A8u;
    SET_GPR_U32(ctx, 31, 0x2388B0u);
    ctx->pc = 0x2388ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388A8u;
    // 0x2388ac: 0xe7a100a4  swc1        $f1, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x2388A8u, 0x2388B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388B0u;
label_2388b0:
    // 0x2388b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2388b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2388B4u;
    {
        const bool branch_taken_0x2388b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2388B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388B4u;
        // 0x2388b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2388b4) {
            ctx->pc = 0x2388C0u;
            goto label_2388c0;
        }
    }
    ctx->pc = 0x2388BCu;
label_2388bc:
    // 0x2388bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2388bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2388c0:
    // 0x2388c0: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x2388c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2388c4: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x2388c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2388c8: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x2388c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2388cc: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x2388ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2388d0: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x2388d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2388d4: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x2388d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2388d8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2388d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2388dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2388DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2388E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388DCu;
        // 0x2388e0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2388DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2388E4u;
    // 0x2388e4: 0x0  nop
    ctx->pc = 0x2388e4u;
    // NOP
    ctx->pc = 0x2388e8u;
}
