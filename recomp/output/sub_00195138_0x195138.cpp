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

// Function: sub_00195138
// Address: 0x195138 - 0x195280
void sub_00195138_0x195138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195138_0x195138");
#endif

    switch (ctx->pc) {
        case 0x195150u: goto label_195150;
        case 0x195164u: goto label_195164;
        case 0x1951b4u: goto label_1951b4;
        case 0x1951c4u: goto label_1951c4;
        case 0x1951ccu: goto label_1951cc;
        case 0x1951e0u: goto label_1951e0;
        case 0x1951f0u: goto label_1951f0;
        case 0x195208u: goto label_195208;
        case 0x195210u: goto label_195210;
        case 0x195240u: goto label_195240;
        case 0x195248u: goto label_195248;
        default: break;
    }

    ctx->pc = 0x195138u;

    // 0x195138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19513c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19513cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x195140: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x195140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x195144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195148: 0xc061a12  jal         func_186848
    ctx->pc = 0x195148u;
    SET_GPR_U32(ctx, 31, 0x195150u);
    ctx->pc = 0x19514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195148u;
    // 0x19514c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x195148u, 0x195150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195150u;
label_195150:
    // 0x195150: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x195150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x195154: 0x244601e0  addiu       $a2, $v0, 0x1E0
    ctx->pc = 0x195154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x195158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19515c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x19515Cu;
    SET_GPR_U32(ctx, 31, 0x195164u);
    ctx->pc = 0x195160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19515Cu;
    // 0x195160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x19515Cu, 0x195164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195164u;
label_195164:
    // 0x195164: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x195164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195168: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x195168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19516c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x19516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x195170: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x195170u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x195174: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x195174u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x195178: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x195178u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x19517c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19517cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x195180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195184: 0x0  nop
    ctx->pc = 0x195184u;
    // NOP
    // 0x195188: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19518c: 0x0  nop
    ctx->pc = 0x19518cu;
    // NOP
    // 0x195190: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x195190u;
    {
        const bool branch_taken_0x195190 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195190u;
        // 0x195194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195190) {
            ctx->pc = 0x19526Cu;
            goto label_19526c;
        }
    }
    ctx->pc = 0x195198u;
    // 0x195198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19519c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19519cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1951a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1951a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1951a4: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x1951a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1951a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1951a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1951ac: 0xc0f72e0  jal         func_3DCB80
    ctx->pc = 0x1951ACu;
    SET_GPR_U32(ctx, 31, 0x1951B4u);
    ctx->pc = 0x1951B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951ACu;
    // 0x1951b0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCB80u, 0x1951ACu, 0x1951B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951B4u;
label_1951b4:
    // 0x1951b4: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1951b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x1951b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1951b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951bc: 0xc0f72e0  jal         func_3DCB80
    ctx->pc = 0x1951BCu;
    SET_GPR_U32(ctx, 31, 0x1951C4u);
    ctx->pc = 0x1951C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951BCu;
    // 0x1951c0: 0x24a5f140  addiu       $a1, $a1, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCB80u, 0x1951BCu, 0x1951C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951C4u;
label_1951c4:
    // 0x1951c4: 0xc061a12  jal         func_186848
    ctx->pc = 0x1951C4u;
    SET_GPR_U32(ctx, 31, 0x1951CCu);
    ctx->pc = 0x1951C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951C4u;
    // 0x1951c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1951C4u, 0x1951CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951CCu;
label_1951cc:
    // 0x1951cc: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x1951ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1951d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1951d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1951d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951d8: 0xc070af2  jal         func_1C2BC8
    ctx->pc = 0x1951D8u;
    SET_GPR_U32(ctx, 31, 0x1951E0u);
    ctx->pc = 0x1951DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951D8u;
    // 0x1951dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2BC8u, 0x1951D8u, 0x1951E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951E0u;
label_1951e0:
    // 0x1951e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1951e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1951e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951e8: 0xc0654a2  jal         func_195288
    ctx->pc = 0x1951E8u;
    SET_GPR_U32(ctx, 31, 0x1951F0u);
    ctx->pc = 0x1951ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951E8u;
    // 0x1951ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195288u, 0x1951E8u, 0x1951F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951F0u;
label_1951f0:
    // 0x1951f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1951F0u;
    {
        const bool branch_taken_0x1951f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F0u;
        // 0x1951f4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951f0) {
            ctx->pc = 0x19522Cu;
            goto label_19522c;
        }
    }
    ctx->pc = 0x1951F8u;
    // 0x1951f8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1951f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1951FCu;
    {
        const bool branch_taken_0x1951fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951FCu;
        // 0x195200: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951fc) {
            ctx->pc = 0x195220u;
            goto label_195220;
        }
    }
    ctx->pc = 0x195204u;
    // 0x195204: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x195204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_195208:
    // 0x195208: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x195208u;
    SET_GPR_U32(ctx, 31, 0x195210u);
    ctx->pc = 0x19520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195208u;
    // 0x19520c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x195208u, 0x195210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195210u;
label_195210:
    // 0x195210: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195214: 0x0  nop
    ctx->pc = 0x195214u;
    // NOP
    // 0x195218: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x195218u;
    {
        const bool branch_taken_0x195218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195218) {
            ctx->pc = 0x19521Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195218u;
            // 0x19521c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195208;
        }
    }
    ctx->pc = 0x195220u;
label_195220:
    // 0x195220: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x195220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x195224: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x195224u;
    {
        const bool branch_taken_0x195224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195224u;
        // 0x195228: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195224) {
            ctx->pc = 0x195260u;
            goto label_195260;
        }
    }
    ctx->pc = 0x19522Cu;
label_19522c:
    // 0x19522c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x19522cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195230: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195230u;
    {
        const bool branch_taken_0x195230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195230u;
        // 0x195234: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195230) {
            ctx->pc = 0x195258u;
            goto label_195258;
        }
    }
    ctx->pc = 0x195238u;
    // 0x195238: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x195238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19523c: 0x0  nop
    ctx->pc = 0x19523cu;
    // NOP
label_195240:
    // 0x195240: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x195240u;
    SET_GPR_U32(ctx, 31, 0x195248u);
    ctx->pc = 0x195244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195240u;
    // 0x195244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x195240u, 0x195248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195248u;
label_195248:
    // 0x195248: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19524c: 0x0  nop
    ctx->pc = 0x19524cu;
    // NOP
    // 0x195250: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x195250u;
    {
        const bool branch_taken_0x195250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195250) {
            ctx->pc = 0x195254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195250u;
            // 0x195254: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195240;
        }
    }
    ctx->pc = 0x195258u;
label_195258:
    // 0x195258: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x195258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x19525c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19525cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195260:
    // 0x195260: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x195260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x195264: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x195264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x195268: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x195268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_19526c:
    // 0x19526c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19526cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195270: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x195270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195274: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195278: 0x3e00008  jr          $ra
    ctx->pc = 0x195278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195278u;
        // 0x19527c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195280u;
}
