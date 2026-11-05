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

// Function: sub_00157F38
// Address: 0x157f38 - 0x1580b0
void sub_00157F38_0x157f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157F38_0x157f38");
#endif

    switch (ctx->pc) {
        case 0x158014u: goto label_158014;
        case 0x158044u: goto label_158044;
        case 0x15804cu: goto label_15804c;
        case 0x158068u: goto label_158068;
        default: break;
    }

    ctx->pc = 0x157f38u;

    // 0x157f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x157f3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157f40: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x157f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x157f44: 0x8c82032c  lw          $v0, 0x32C($a0)
    ctx->pc = 0x157f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x157f48: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x157F48u;
    {
        const bool branch_taken_0x157f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F48u;
        // 0x157f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f48) {
            ctx->pc = 0x15809Cu;
            goto label_15809c;
        }
    }
    ctx->pc = 0x157F50u;
    // 0x157f50: 0x908202a8  lbu         $v0, 0x2A8($a0)
    ctx->pc = 0x157f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x157f54: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x157F54u;
    {
        const bool branch_taken_0x157f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F54u;
        // 0x157f58: 0x2488022c  addiu       $t0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f54) {
            ctx->pc = 0x158054u;
            goto label_158054;
        }
    }
    ctx->pc = 0x157F5Cu;
    // 0x157f5c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157F5Cu;
    {
        const bool branch_taken_0x157f5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F5Cu;
        // 0x157f60: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f5c) {
            ctx->pc = 0x157F6Cu;
            goto label_157f6c;
        }
    }
    ctx->pc = 0x157F64u;
    // 0x157f64: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x157F64u;
    {
        const bool branch_taken_0x157f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F64u;
        // 0x157f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f64) {
            ctx->pc = 0x15809Cu;
            goto label_15809c;
        }
    }
    ctx->pc = 0x157F6Cu;
label_157f6c:
    // 0x157f6c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x157f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x157f70: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x157f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f74: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x157f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x157f78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x157f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157f7c: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x157f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x157f80: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x157F80u;
    {
        const bool branch_taken_0x157f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f80) {
            ctx->pc = 0x157F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F80u;
            // 0x157f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15809Cu;
            goto label_15809c;
        }
    }
    ctx->pc = 0x157F88u;
    // 0x157f88: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x157f8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x157f90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x157f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157f94: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x157f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x157f98: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x157F98u;
    {
        const bool branch_taken_0x157f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157f98) {
            ctx->pc = 0x157F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F98u;
            // 0x157f9c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157FA8u;
            goto label_157fa8;
        }
    }
    ctx->pc = 0x157FA0u;
    // 0x157fa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157FA0u;
    {
        const bool branch_taken_0x157fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FA0u;
        // 0x157fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fa0) {
            ctx->pc = 0x157FB0u;
            goto label_157fb0;
        }
    }
    ctx->pc = 0x157FA8u;
label_157fa8:
    // 0x157fa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x157fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157fac: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x157facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_157fb0:
    // 0x157fb0: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x157FB0u;
    {
        const bool branch_taken_0x157fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FB0u;
        // 0x157fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fb0) {
            ctx->pc = 0x15809Cu;
            goto label_15809c;
        }
    }
    ctx->pc = 0x157FB8u;
    // 0x157fb8: 0x8c820304  lw          $v0, 0x304($a0)
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 772)));
    // 0x157fbc: 0x24c39a08  addiu       $v1, $a2, -0x65F8
    ctx->pc = 0x157fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x157fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x157fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x157fc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157fc8: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x157fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x157fcc: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x157FCCu;
    {
        const bool branch_taken_0x157fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fcc) {
            ctx->pc = 0x157FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157FCCu;
            // 0x157fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15809Cu;
            goto label_15809c;
        }
    }
    ctx->pc = 0x157FD4u;
    // 0x157fd4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x157fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x157fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x157fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x157fdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x157fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157fe0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x157fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x157fe4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x157FE4u;
    {
        const bool branch_taken_0x157fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157fe4) {
            ctx->pc = 0x157FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157FE4u;
            // 0x157fe8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157FF4u;
            goto label_157ff4;
        }
    }
    ctx->pc = 0x157FECu;
    // 0x157fec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157FECu;
    {
        const bool branch_taken_0x157fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FECu;
        // 0x157ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fec) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157FF4u;
label_157ff4:
    // 0x157ff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x157ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157ff8: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x157ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_157ffc:
    // 0x157ffc: 0x10c00027  beqz        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x157FFCu;
    {
        const bool branch_taken_0x157ffc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FFCu;
        // 0x158000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ffc) {
            ctx->pc = 0x15809Cu;
            goto label_15809c;
        }
    }
    ctx->pc = 0x158004u;
    // 0x158004: 0xc4940310  lwc1        $f20, 0x310($a0)
    ctx->pc = 0x158004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x158008: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x158008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15800c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15800Cu;
    SET_GPR_U32(ctx, 31, 0x158014u);
    ctx->pc = 0x158010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15800Cu;
    // 0x158010: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15800Cu, 0x158014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158014u;
label_158014:
    // 0x158014: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x158014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158018: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x158018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15801c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x158020: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x158020u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x158024: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x158024u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x158028: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x158028u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15802c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15802cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158030: 0x0  nop
    ctx->pc = 0x158030u;
    // NOP
    // 0x158034: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x158034u;
    {
        const bool branch_taken_0x158034 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x158038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158034u;
        // 0x158038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158034) {
            ctx->pc = 0x15809Cu;
            goto label_15809c;
        }
    }
    ctx->pc = 0x15803Cu;
    // 0x15803c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15803Cu;
    {
        const bool branch_taken_0x15803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15803Cu;
        // 0x158040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15803c) {
            ctx->pc = 0x15809Cu;
            goto label_15809c;
        }
    }
    ctx->pc = 0x158044u;
label_158044:
    // 0x158044: 0xc05352e  jal         func_14D4B8
    ctx->pc = 0x158044u;
    SET_GPR_U32(ctx, 31, 0x15804Cu);
    ctx->pc = 0x14D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D4B8u, 0x158044u, 0x15804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15804Cu;
label_15804c:
    // 0x15804c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15804Cu;
    {
        const bool branch_taken_0x15804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15804Cu;
        // 0x158050: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15804c) {
            ctx->pc = 0x1580A0u;
            goto label_1580a0;
        }
    }
    ctx->pc = 0x158054u;
label_158054:
    // 0x158054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158058: 0x24870228  addiu       $a3, $a0, 0x228
    ctx->pc = 0x158058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x15805c: 0x24090015  addiu       $t1, $zero, 0x15
    ctx->pc = 0x15805cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x158060: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x158060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x158064: 0x0  nop
    ctx->pc = 0x158064u;
    // NOP
label_158068:
    // 0x158068: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x158068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15806c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15806cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158070: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158070u;
    {
        const bool branch_taken_0x158070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158070u;
        // 0x158074: 0x1031021  addu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158070) {
            ctx->pc = 0x158084u;
            goto label_158084;
        }
    }
    ctx->pc = 0x158078u;
    // 0x158078: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x158078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15807c: 0x1069fff1  beq         $v1, $t1, . + 4 + (-0xF << 2)
    ctx->pc = 0x15807Cu;
    {
        const bool branch_taken_0x15807c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x15807c) {
            ctx->pc = 0x158044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158044;
        }
    }
    ctx->pc = 0x158084u;
label_158084:
    // 0x158084: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x158084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x158088: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x158088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15808c: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x15808cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x158090: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x158090u;
    {
        const bool branch_taken_0x158090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158090u;
        // 0x158094: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158090) {
            ctx->pc = 0x158068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158068;
        }
    }
    ctx->pc = 0x158098u;
    // 0x158098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15809c:
    // 0x15809c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1580a0:
    // 0x1580a0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1580a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1580a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1580A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1580A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580A4u;
        // 0x1580a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1580A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1580ACu;
    // 0x1580ac: 0x0  nop
    ctx->pc = 0x1580acu;
    // NOP
    ctx->pc = 0x1580b0u;
}
