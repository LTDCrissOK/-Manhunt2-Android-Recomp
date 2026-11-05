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

// Function: sub_0015DE80
// Address: 0x15de80 - 0x15e220
void sub_0015DE80_0x15de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DE80_0x15de80");
#endif

    switch (ctx->pc) {
        case 0x15dee4u: goto label_15dee4;
        case 0x15df14u: goto label_15df14;
        case 0x15df20u: goto label_15df20;
        case 0x15df30u: goto label_15df30;
        case 0x15df48u: goto label_15df48;
        case 0x15dfb0u: goto label_15dfb0;
        case 0x15dfc0u: goto label_15dfc0;
        case 0x15dfccu: goto label_15dfcc;
        case 0x15e018u: goto label_15e018;
        case 0x15e024u: goto label_15e024;
        case 0x15e084u: goto label_15e084;
        case 0x15e0c8u: goto label_15e0c8;
        case 0x15e0dcu: goto label_15e0dc;
        case 0x15e11cu: goto label_15e11c;
        case 0x15e128u: goto label_15e128;
        case 0x15e134u: goto label_15e134;
        case 0x15e170u: goto label_15e170;
        case 0x15e17cu: goto label_15e17c;
        case 0x15e1a4u: goto label_15e1a4;
        case 0x15e1b0u: goto label_15e1b0;
        case 0x15e1ccu: goto label_15e1cc;
        case 0x15e1f0u: goto label_15e1f0;
        default: break;
    }

    ctx->pc = 0x15de80u;

    // 0x15de80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15de84: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15de88: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15de88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x15de8c: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x15de90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15de90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15de94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15de94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de98: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x15de98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15de9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15de9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15dea0: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x15dea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15dea4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15dea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x15dea8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15dea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x15deac: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15deacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x15deb0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15deb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x15deb4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15deb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x15deb8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x15deb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x15debc: 0x91a821  addu        $s5, $a0, $s1
    ctx->pc = 0x15debcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x15dec0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x15dec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x15dec4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15dec8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x15dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x15decc: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x15deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x15ded0: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x15ded4: 0x8eb70320  lw          $s7, 0x320($s5)
    ctx->pc = 0x15ded4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
    // 0x15ded8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x15ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15dedc: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x15DEDCu;
    SET_GPR_U32(ctx, 31, 0x15DEE4u);
    ctx->pc = 0x15DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DEDCu;
    // 0x15dee0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15DEDCu, 0x15DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEE4u;
label_15dee4:
    // 0x15dee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15dee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dee8: 0x120000c1  beqz        $s0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x15DEE8u;
    {
        const bool branch_taken_0x15dee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEE8u;
        // 0x15deec: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dee8) {
            ctx->pc = 0x15E1F0u;
            goto label_15e1f0;
        }
    }
    ctx->pc = 0x15DEF0u;
    // 0x15def0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15def4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x15def4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15def8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x15def8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x15defc: 0x8e130008  lw          $s3, 0x8($s0)
    ctx->pc = 0x15defcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15df00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15df04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DF04u;
    {
        const bool branch_taken_0x15df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF04u;
        // 0x15df08: 0x8e160010  lw          $s6, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df04) {
            ctx->pc = 0x15DF18u;
            goto label_15df18;
        }
    }
    ctx->pc = 0x15DF0Cu;
    // 0x15df0c: 0xc0f70d8  jal         func_3DC360
    ctx->pc = 0x15DF0Cu;
    SET_GPR_U32(ctx, 31, 0x15DF14u);
    ctx->pc = 0x15DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF0Cu;
    // 0x15df10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC360u, 0x15DF0Cu, 0x15DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF14u;
label_15df14:
    // 0x15df14: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x15df14u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15df18:
    // 0x15df18: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x15DF18u;
    SET_GPR_U32(ctx, 31, 0x15DF20u);
    ctx->pc = 0x15DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF18u;
    // 0x15df1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15DF18u, 0x15DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF20u;
label_15df20:
    // 0x15df20: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15df24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15df24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df28: 0xc042128  jal         func_1084A0
    ctx->pc = 0x15DF28u;
    SET_GPR_U32(ctx, 31, 0x15DF30u);
    ctx->pc = 0x15DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF28u;
    // 0x15df2c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15DF28u, 0x15DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF30u;
label_15df30:
    // 0x15df30: 0x12c000af  beqz        $s6, . + 4 + (0xAF << 2)
    ctx->pc = 0x15DF30u;
    {
        const bool branch_taken_0x15df30 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF30u;
        // 0x15df34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df30) {
            ctx->pc = 0x15E1F0u;
            goto label_15e1f0;
        }
    }
    ctx->pc = 0x15DF38u;
    // 0x15df38: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x15df3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15df3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df40: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15DF40u;
    SET_GPR_U32(ctx, 31, 0x15DF48u);
    ctx->pc = 0x15DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF40u;
    // 0x15df44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15DF40u, 0x15DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF48u;
label_15df48:
    // 0x15df48: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15df4c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15df50: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15df54: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15df54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15df58: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15df58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15df5c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15df5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15df60: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x15df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15df64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15df68: 0x0  nop
    ctx->pc = 0x15df68u;
    // NOP
    // 0x15df6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15DF6Cu;
    {
        const bool branch_taken_0x15df6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15df6c) {
            ctx->pc = 0x15DF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DF6Cu;
            // 0x15df70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DF74u;
            goto label_15df74;
        }
    }
    ctx->pc = 0x15DF74u;
label_15df74:
    // 0x15df74: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x15DF74u;
    {
        const bool branch_taken_0x15df74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF74u;
        // 0x15df78: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df74) {
            ctx->pc = 0x15E0E4u;
            goto label_15e0e4;
        }
    }
    ctx->pc = 0x15DF7Cu;
    // 0x15df7c: 0x12430002  beq         $s2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15DF7Cu;
    {
        const bool branch_taken_0x15df7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x15DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF7Cu;
        // 0x15df80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df7c) {
            ctx->pc = 0x15DF88u;
            goto label_15df88;
        }
    }
    ctx->pc = 0x15DF84u;
    // 0x15df84: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x15df84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15df88:
    // 0x15df88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15DF88u;
    {
        const bool branch_taken_0x15df88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF88u;
        // 0x15df8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df88) {
            ctx->pc = 0x15DFA8u;
            goto label_15dfa8;
        }
    }
    ctx->pc = 0x15DF90u;
    // 0x15df90: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DF90u;
    {
        const bool branch_taken_0x15df90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x15df90) {
            ctx->pc = 0x15DFA0u;
            goto label_15dfa0;
        }
    }
    ctx->pc = 0x15DF98u;
    // 0x15df98: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x15df98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15df9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15dfa0:
    // 0x15dfa0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15DFA0u;
    {
        const bool branch_taken_0x15dfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFA0u;
        // 0x15dfa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfa0) {
            ctx->pc = 0x15DFD4u;
            goto label_15dfd4;
        }
    }
    ctx->pc = 0x15DFA8u;
label_15dfa8:
    // 0x15dfa8: 0xc056f6a  jal         func_15BDA8
    ctx->pc = 0x15DFA8u;
    SET_GPR_U32(ctx, 31, 0x15DFB0u);
    ctx->pc = 0x15DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DFA8u;
    // 0x15dfac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BDA8u, 0x15DFA8u, 0x15DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFB0u;
label_15dfb0:
    // 0x15dfb0: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x15DFB0u;
    {
        const bool branch_taken_0x15dfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFB0u;
        // 0x15dfb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfb0) {
            ctx->pc = 0x15E1F0u;
            goto label_15e1f0;
        }
    }
    ctx->pc = 0x15DFB8u;
    // 0x15dfb8: 0xc0573f0  jal         func_15CFC0
    ctx->pc = 0x15DFB8u;
    SET_GPR_U32(ctx, 31, 0x15DFC0u);
    ctx->pc = 0x15DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DFB8u;
    // 0x15dfbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CFC0u, 0x15DFB8u, 0x15DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFC0u;
label_15dfc0:
    // 0x15dfc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15dfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfc4: 0xc0570d0  jal         func_15C340
    ctx->pc = 0x15DFC4u;
    SET_GPR_U32(ctx, 31, 0x15DFCCu);
    ctx->pc = 0x15DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DFC4u;
    // 0x15dfc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C340u, 0x15DFC4u, 0x15DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFCCu;
label_15dfcc:
    // 0x15dfcc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x15DFCCu;
    {
        const bool branch_taken_0x15dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFCCu;
        // 0x15dfd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfcc) {
            ctx->pc = 0x15E12Cu;
            goto label_15e12c;
        }
    }
    ctx->pc = 0x15DFD4u;
label_15dfd4:
    // 0x15dfd4: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DFD4u;
    {
        const bool branch_taken_0x15dfd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x15DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFD4u;
        // 0x15dfd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfd4) {
            ctx->pc = 0x15DFE4u;
            goto label_15dfe4;
        }
    }
    ctx->pc = 0x15DFDCu;
    // 0x15dfdc: 0x2a420000  slti        $v0, $s2, 0x0
    ctx->pc = 0x15dfdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15dfe0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15dfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15dfe4:
    // 0x15dfe4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x15DFE4u;
    {
        const bool branch_taken_0x15dfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dfe4) {
            ctx->pc = 0x15DFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DFE4u;
            // 0x15dfe8: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E03Cu;
            goto label_15e03c;
        }
    }
    ctx->pc = 0x15DFECu;
    // 0x15dfec: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DFECu;
    {
        const bool branch_taken_0x15dfec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x15dfec) {
            ctx->pc = 0x15DFFCu;
            goto label_15dffc;
        }
    }
    ctx->pc = 0x15DFF4u;
    // 0x15dff4: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x15dff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15dff8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15dffc:
    // 0x15dffc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15DFFCu;
    {
        const bool branch_taken_0x15dffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFFCu;
        // 0x15e000: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dffc) {
            ctx->pc = 0x15E03Cu;
            goto label_15e03c;
        }
    }
    ctx->pc = 0x15E004u;
    // 0x15e004: 0x8eb0033c  lw          $s0, 0x33C($s5)
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 828)));
    // 0x15e008: 0x5200007a  beql        $s0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x15E008u;
    {
        const bool branch_taken_0x15e008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e008) {
            ctx->pc = 0x15E00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E008u;
            // 0x15e00c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E010u;
    // 0x15e010: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15E010u;
    SET_GPR_U32(ctx, 31, 0x15E018u);
    ctx->pc = 0x15E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E010u;
    // 0x15e014: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15E010u, 0x15E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E018u;
label_15e018:
    // 0x15e018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e01c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15E01Cu;
    SET_GPR_U32(ctx, 31, 0x15E024u);
    ctx->pc = 0x15E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E01Cu;
    // 0x15e020: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15E01Cu, 0x15E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E024u;
label_15e024:
    // 0x15e024: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x15E024u;
    {
        const bool branch_taken_0x15e024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e024) {
            ctx->pc = 0x15E028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E024u;
            // 0x15e028: 0xaea00340  sw          $zero, 0x340($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 832), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E1BCu;
            goto label_15e1bc;
        }
    }
    ctx->pc = 0x15E02Cu;
    // 0x15e02c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e030: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e034: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x15E034u;
    {
        const bool branch_taken_0x15e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E034u;
        // 0x15e038: 0xaea20330  sw          $v0, 0x330($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e034) {
            ctx->pc = 0x15E1C4u;
            goto label_15e1c4;
        }
    }
    ctx->pc = 0x15E03Cu;
label_15e03c:
    // 0x15e03c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e040: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x15e040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15e044: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15e044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e048: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15e048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e04c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x15e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x15e050: 0xac670330  sw          $a3, 0x330($v1)
    ctx->pc = 0x15e050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 7));
    // 0x15e054: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15e054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e058: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x15e058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x15e05c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15e060: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e064: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15e064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15e068: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e06c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15e06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15e070: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e074: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15e074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15e078: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x15e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e07c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15E07Cu;
    SET_GPR_U32(ctx, 31, 0x15E084u);
    ctx->pc = 0x15E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E07Cu;
    // 0x15e080: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15E07Cu, 0x15E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E084u;
label_15e084:
    // 0x15e084: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x15e084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15e088: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x15e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e08c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e090: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x15e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15e094: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15e094u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15e098: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15e098u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15e09c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15e09cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15e0a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x15e0a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15e0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e0a8: 0x0  nop
    ctx->pc = 0x15e0a8u;
    // NOP
    // 0x15e0ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15e0acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e0b0: 0x0  nop
    ctx->pc = 0x15e0b0u;
    // NOP
    // 0x15e0b4: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
    ctx->pc = 0x15E0B4u;
    {
        const bool branch_taken_0x15e0b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0B4u;
        // 0x15e0b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0b4) {
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E0BCu;
    // 0x15e0bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0c0: 0xc0573f0  jal         func_15CFC0
    ctx->pc = 0x15E0C0u;
    SET_GPR_U32(ctx, 31, 0x15E0C8u);
    ctx->pc = 0x15E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E0C0u;
    // 0x15e0c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CFC0u, 0x15E0C0u, 0x15E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0C8u;
label_15e0c8:
    // 0x15e0c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0d0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15e0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0d4: 0xc05727e  jal         func_15C9F8
    ctx->pc = 0x15E0D4u;
    SET_GPR_U32(ctx, 31, 0x15E0DCu);
    ctx->pc = 0x15E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E0D4u;
    // 0x15e0d8: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C9F8u, 0x15E0D4u, 0x15E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0DCu;
label_15e0dc:
    // 0x15e0dc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x15E0DCu;
    {
        const bool branch_taken_0x15e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0DCu;
        // 0x15e0e0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0dc) {
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E0E4u;
label_15e0e4:
    // 0x15e0e4: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E0E4u;
    {
        const bool branch_taken_0x15e0e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0E4u;
        // 0x15e0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0e4) {
            ctx->pc = 0x15E0F4u;
            goto label_15e0f4;
        }
    }
    ctx->pc = 0x15E0ECu;
    // 0x15e0ec: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x15e0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15e0f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15e0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15e0f4:
    // 0x15e0f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E0F4u;
    {
        const bool branch_taken_0x15e0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0F4u;
        // 0x15e0f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0f4) {
            ctx->pc = 0x15E114u;
            goto label_15e114;
        }
    }
    ctx->pc = 0x15E0FCu;
    // 0x15e0fc: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E0FCu;
    {
        const bool branch_taken_0x15e0fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e0fc) {
            ctx->pc = 0x15E10Cu;
            goto label_15e10c;
        }
    }
    ctx->pc = 0x15E104u;
    // 0x15e104: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x15e104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15e108: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15e108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15e10c:
    // 0x15e10c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E10Cu;
    {
        const bool branch_taken_0x15e10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E10Cu;
        // 0x15e110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e10c) {
            ctx->pc = 0x15E13Cu;
            goto label_15e13c;
        }
    }
    ctx->pc = 0x15E114u;
label_15e114:
    // 0x15e114: 0xc0573f0  jal         func_15CFC0
    ctx->pc = 0x15E114u;
    SET_GPR_U32(ctx, 31, 0x15E11Cu);
    ctx->pc = 0x15E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E114u;
    // 0x15e118: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CFC0u, 0x15E114u, 0x15E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E11Cu;
label_15e11c:
    // 0x15e11c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e120: 0xc057150  jal         func_15C540
    ctx->pc = 0x15E120u;
    SET_GPR_U32(ctx, 31, 0x15E128u);
    ctx->pc = 0x15E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E120u;
    // 0x15e124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C540u, 0x15E120u, 0x15E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E128u;
label_15e128:
    // 0x15e128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e12c:
    // 0x15e12c: 0xc058064  jal         func_160190
    ctx->pc = 0x15E12Cu;
    SET_GPR_U32(ctx, 31, 0x15E134u);
    ctx->pc = 0x15E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E12Cu;
    // 0x15e130: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160190u, 0x15E12Cu, 0x15E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E134u;
label_15e134:
    // 0x15e134: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x15E134u;
    {
        const bool branch_taken_0x15e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E134u;
        // 0x15e138: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e134) {
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E13Cu;
label_15e13c:
    // 0x15e13c: 0x12430002  beq         $s2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E13Cu;
    {
        const bool branch_taken_0x15e13c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E13Cu;
        // 0x15e140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e13c) {
            ctx->pc = 0x15E148u;
            goto label_15e148;
        }
    }
    ctx->pc = 0x15E144u;
    // 0x15e144: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x15e144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15e148:
    // 0x15e148: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E148u;
    {
        const bool branch_taken_0x15e148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E148u;
        // 0x15e14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e148) {
            ctx->pc = 0x15E168u;
            goto label_15e168;
        }
    }
    ctx->pc = 0x15E150u;
    // 0x15e150: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E150u;
    {
        const bool branch_taken_0x15e150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e150) {
            ctx->pc = 0x15E160u;
            goto label_15e160;
        }
    }
    ctx->pc = 0x15E158u;
    // 0x15e158: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x15e158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15e15c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15e15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15e160:
    // 0x15e160: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E160u;
    {
        const bool branch_taken_0x15e160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E160u;
        // 0x15e164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e160) {
            ctx->pc = 0x15E190u;
            goto label_15e190;
        }
    }
    ctx->pc = 0x15E168u;
label_15e168:
    // 0x15e168: 0xc0573f0  jal         func_15CFC0
    ctx->pc = 0x15E168u;
    SET_GPR_U32(ctx, 31, 0x15E170u);
    ctx->pc = 0x15E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E168u;
    // 0x15e16c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CFC0u, 0x15E168u, 0x15E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E170u;
label_15e170:
    // 0x15e170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e174: 0xc0571c6  jal         func_15C718
    ctx->pc = 0x15E174u;
    SET_GPR_U32(ctx, 31, 0x15E17Cu);
    ctx->pc = 0x15E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E174u;
    // 0x15e178: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C718u, 0x15E174u, 0x15E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E17Cu;
label_15e17c:
    // 0x15e17c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15e180: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x15e180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15e184: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x15e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15e188: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x15E188u;
    {
        const bool branch_taken_0x15e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E188u;
        // 0x15e18c: 0xac400384  sw          $zero, 0x384($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e188) {
            ctx->pc = 0x15E1F0u;
            goto label_15e1f0;
        }
    }
    ctx->pc = 0x15E190u;
label_15e190:
    // 0x15e190: 0x8eb0033c  lw          $s0, 0x33C($s5)
    ctx->pc = 0x15e190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 828)));
    // 0x15e194: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x15E194u;
    {
        const bool branch_taken_0x15e194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e194) {
            ctx->pc = 0x15E198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E194u;
            // 0x15e198: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E19Cu;
    // 0x15e19c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15E19Cu;
    SET_GPR_U32(ctx, 31, 0x15E1A4u);
    ctx->pc = 0x15E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E19Cu;
    // 0x15e1a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15E19Cu, 0x15E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1A4u;
label_15e1a4:
    // 0x15e1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1a8: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15E1A8u;
    SET_GPR_U32(ctx, 31, 0x15E1B0u);
    ctx->pc = 0x15E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1A8u;
    // 0x15e1ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15E1A8u, 0x15E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1B0u;
label_15e1b0:
    // 0x15e1b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15E1B0u;
    {
        const bool branch_taken_0x15e1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1B0u;
        // 0x15e1b4: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1b0) {
            ctx->pc = 0x15E1D4u;
            goto label_15e1d4;
        }
    }
    ctx->pc = 0x15E1B8u;
    // 0x15e1b8: 0xaea00340  sw          $zero, 0x340($s5)
    ctx->pc = 0x15e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 832), GPR_U32(ctx, 0));
label_15e1bc:
    // 0x15e1bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1c0: 0xaea0033c  sw          $zero, 0x33C($s5)
    ctx->pc = 0x15e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 828), GPR_U32(ctx, 0));
label_15e1c4:
    // 0x15e1c4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15E1C4u;
    SET_GPR_U32(ctx, 31, 0x15E1CCu);
    ctx->pc = 0x15E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1C4u;
    // 0x15e1c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15E1C4u, 0x15E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1CCu;
label_15e1cc:
    // 0x15e1cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15E1CCu;
    {
        const bool branch_taken_0x15e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1CCu;
        // 0x15e1d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1cc) {
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E1D4u;
label_15e1d4:
    // 0x15e1d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1d8: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x15e1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15e1dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e1e0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x15e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15e1e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e1e8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15E1E8u;
    SET_GPR_U32(ctx, 31, 0x15E1F0u);
    ctx->pc = 0x15E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1E8u;
    // 0x15e1ec: 0xac430330  sw          $v1, 0x330($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 816), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15E1E8u, 0x15E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1F0u;
label_15e1f0:
    // 0x15e1f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15e1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15e1f4:
    // 0x15e1f4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15e1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e1f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15e1f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e1fc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15e1fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e200: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15e200u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e204: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15e204u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15e208: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15e208u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e20c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x15e20cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15e210: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x15e210u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e214: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x15e214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15e218: 0x3e00008  jr          $ra
    ctx->pc = 0x15E218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E218u;
        // 0x15e21c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E220u;
}
