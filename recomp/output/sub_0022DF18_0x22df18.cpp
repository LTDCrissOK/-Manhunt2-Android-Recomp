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

// Function: sub_0022DF18
// Address: 0x22df18 - 0x22e5e0
void sub_0022DF18_0x22df18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DF18_0x22df18");
#endif

    switch (ctx->pc) {
        case 0x22df5cu: goto label_22df5c;
        case 0x22df6cu: goto label_22df6c;
        case 0x22df80u: goto label_22df80;
        case 0x22df8cu: goto label_22df8c;
        case 0x22df98u: goto label_22df98;
        case 0x22dfa4u: goto label_22dfa4;
        case 0x22dfccu: goto label_22dfcc;
        case 0x22dff0u: goto label_22dff0;
        case 0x22dff8u: goto label_22dff8;
        case 0x22e054u: goto label_22e054;
        case 0x22e070u: goto label_22e070;
        case 0x22e20cu: goto label_22e20c;
        case 0x22e224u: goto label_22e224;
        case 0x22e234u: goto label_22e234;
        case 0x22e274u: goto label_22e274;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e300u: goto label_22e300;
        case 0x22e310u: goto label_22e310;
        case 0x22e31cu: goto label_22e31c;
        case 0x22e344u: goto label_22e344;
        case 0x22e354u: goto label_22e354;
        case 0x22e364u: goto label_22e364;
        case 0x22e374u: goto label_22e374;
        case 0x22e384u: goto label_22e384;
        case 0x22e390u: goto label_22e390;
        case 0x22e39cu: goto label_22e39c;
        case 0x22e3a4u: goto label_22e3a4;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3dcu: goto label_22e3dc;
        case 0x22e454u: goto label_22e454;
        case 0x22e464u: goto label_22e464;
        case 0x22e480u: goto label_22e480;
        case 0x22e490u: goto label_22e490;
        case 0x22e4a4u: goto label_22e4a4;
        case 0x22e4b4u: goto label_22e4b4;
        case 0x22e4c8u: goto label_22e4c8;
        case 0x22e4d8u: goto label_22e4d8;
        case 0x22e500u: goto label_22e500;
        case 0x22e50cu: goto label_22e50c;
        case 0x22e540u: goto label_22e540;
        case 0x22e584u: goto label_22e584;
        case 0x22e594u: goto label_22e594;
        case 0x22e5a4u: goto label_22e5a4;
        case 0x22e5b0u: goto label_22e5b0;
        case 0x22e5bcu: goto label_22e5bc;
        default: break;
    }

    ctx->pc = 0x22df18u;

    // 0x22df18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x22df18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x22df1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x22df20: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x22df20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x22df24: 0x8c62bd64  lw          $v0, -0x429C($v1)
    ctx->pc = 0x22df24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD64u));
    // 0x22df28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22df28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df2c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x22df2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x22df30: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x22df30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x22df34: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x22df34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x22df38: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x22df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x22df3c: 0x1440019f  bnez        $v0, . + 4 + (0x19F << 2)
    ctx->pc = 0x22DF3Cu;
    {
        const bool branch_taken_0x22df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF3Cu;
        // 0x22df40: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df3c) {
            ctx->pc = 0x22E5BCu;
            goto label_22e5bc;
        }
    }
    ctx->pc = 0x22DF44u;
    // 0x22df44: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22df44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x22df48: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x22df4c: 0x54400125  bnel        $v0, $zero, . + 4 + (0x125 << 2)
    ctx->pc = 0x22DF4Cu;
    {
        const bool branch_taken_0x22df4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22df4c) {
            ctx->pc = 0x22DF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DF4Cu;
            // 0x22df50: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E3E4u;
            goto label_22e3e4;
        }
    }
    ctx->pc = 0x22DF54u;
    // 0x22df54: 0xc0894f6  jal         func_2253D8
    ctx->pc = 0x22DF54u;
    SET_GPR_U32(ctx, 31, 0x22DF5Cu);
    ctx->pc = 0x22DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF54u;
    // 0x22df58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x22DF54u, 0x22DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF5Cu;
label_22df5c:
    // 0x22df5c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x22DF5Cu;
    {
        const bool branch_taken_0x22df5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22df5c) {
            ctx->pc = 0x22DF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DF5Cu;
            // 0x22df60: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DFA8u;
            goto label_22dfa8;
        }
    }
    ctx->pc = 0x22DF64u;
    // 0x22df64: 0xc08f684  jal         func_23DA10
    ctx->pc = 0x22DF64u;
    SET_GPR_U32(ctx, 31, 0x22DF6Cu);
    ctx->pc = 0x22DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF64u;
    // 0x22df68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA10u, 0x22DF64u, 0x22DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF6Cu;
label_22df6c:
    // 0x22df6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22DF6Cu;
    {
        const bool branch_taken_0x22df6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF6Cu;
        // 0x22df70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df6c) {
            ctx->pc = 0x22DFA4u;
            goto label_22dfa4;
        }
    }
    ctx->pc = 0x22DF74u;
    // 0x22df74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22df74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df78: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x22DF78u;
    SET_GPR_U32(ctx, 31, 0x22DF80u);
    ctx->pc = 0x22DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF78u;
    // 0x22df7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x22DF78u, 0x22DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF80u;
label_22df80:
    // 0x22df80: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22df80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22df84: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x22DF84u;
    SET_GPR_U32(ctx, 31, 0x22DF8Cu);
    ctx->pc = 0x22DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF84u;
    // 0x22df88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x22DF84u, 0x22DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF8Cu;
label_22df8c:
    // 0x22df8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22df8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df90: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x22DF90u;
    SET_GPR_U32(ctx, 31, 0x22DF98u);
    ctx->pc = 0x22DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF90u;
    // 0x22df94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x22DF90u, 0x22DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF98u;
label_22df98:
    // 0x22df98: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22df98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22df9c: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x22DF9Cu;
    SET_GPR_U32(ctx, 31, 0x22DFA4u);
    ctx->pc = 0x22DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF9Cu;
    // 0x22dfa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x22DF9Cu, 0x22DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFA4u;
label_22dfa4:
    // 0x22dfa4: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x22dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_22dfa8:
    // 0x22dfa8: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x22dfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x22dfac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22dfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22dfb0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x22dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dfb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22dfb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22dfb8: 0x0  nop
    ctx->pc = 0x22dfb8u;
    // NOP
    // 0x22dfbc: 0x45000180  bc1f        . + 4 + (0x180 << 2)
    ctx->pc = 0x22DFBCu;
    {
        const bool branch_taken_0x22dfbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFBCu;
        // 0x22dfc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfbc) {
            ctx->pc = 0x22E5C0u;
            goto label_22e5c0;
        }
    }
    ctx->pc = 0x22DFC4u;
    // 0x22dfc4: 0xc0894f6  jal         func_2253D8
    ctx->pc = 0x22DFC4u;
    SET_GPR_U32(ctx, 31, 0x22DFCCu);
    ctx->pc = 0x22DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFC4u;
    // 0x22dfc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x22DFC4u, 0x22DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFCCu;
label_22dfcc:
    // 0x22dfcc: 0x1440017c  bnez        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x22DFCCu;
    {
        const bool branch_taken_0x22dfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFCCu;
        // 0x22dfd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfcc) {
            ctx->pc = 0x22E5C0u;
            goto label_22e5c0;
        }
    }
    ctx->pc = 0x22DFD4u;
    // 0x22dfd4: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x22dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x22dfd8: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x22dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x22dfdc: 0x14600178  bnez        $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x22DFDCu;
    {
        const bool branch_taken_0x22dfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFDCu;
        // 0x22dfe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfdc) {
            ctx->pc = 0x22E5C0u;
            goto label_22e5c0;
        }
    }
    ctx->pc = 0x22DFE4u;
    // 0x22dfe4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x22dfe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22dfe8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x22DFE8u;
    SET_GPR_U32(ctx, 31, 0x22DFF0u);
    ctx->pc = 0x22DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFE8u;
    // 0x22dfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22DFE8u, 0x22DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFF0u;
label_22dff0:
    // 0x22dff0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x22DFF0u;
    SET_GPR_U32(ctx, 31, 0x22DFF8u);
    ctx->pc = 0x22DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFF0u;
    // 0x22dff4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22DFF0u, 0x22DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFF8u;
label_22dff8:
    // 0x22dff8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x22dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x22dffc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22e000: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x22e000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x22e004: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x22e004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x22e008: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22e008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x22e00c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x22e00cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e010: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x22e010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x22e014: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x22e014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x22e018: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x22e018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x22e01c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x22e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x22e020: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x22e020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x22e024: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22e024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x22e028: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x22e028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e02c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x22e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22e030: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x22e030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x22e034: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x22e034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x22e038: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x22e038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x22e03c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x22e040: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x22e040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e044: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x22e044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22e048: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x22e048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x22e04c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x22E04Cu;
    SET_GPR_U32(ctx, 31, 0x22E054u);
    ctx->pc = 0x22E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E04Cu;
    // 0x22e050: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22E04Cu, 0x22E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E054u;
label_22e054:
    // 0x22e054: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x22e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x22e058: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22e058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22e05c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x22e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x22e060: 0x10800157  beqz        $a0, . + 4 + (0x157 << 2)
    ctx->pc = 0x22E060u;
    {
        const bool branch_taken_0x22e060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E060u;
        // 0x22e064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e060) {
            ctx->pc = 0x22E5C0u;
            goto label_22e5c0;
        }
    }
    ctx->pc = 0x22E068u;
    // 0x22e068: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x22E068u;
    SET_GPR_U32(ctx, 31, 0x22E070u);
    ctx->pc = 0x22E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E068u;
    // 0x22e06c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x22E068u, 0x22E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E070u;
label_22e070:
    // 0x22e070: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x22e070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e074: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x22e074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22e078: 0xa3a40070  sb          $a0, 0x70($sp)
    ctx->pc = 0x22e078u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x22e07c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x22e07cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22e080: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x22e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x22e084: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x22e084u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x22e088: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x22e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x22e08c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x22e08cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22e090: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x22e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22e094: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x22e094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22e098: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22e098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e09c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x22e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22e0a0: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x22e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e0a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22e0a8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x22e0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22e0ac: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x22e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e0b0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22e0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22e0b4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x22e0b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e0b8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x22e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22e0bc: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x22e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x22e0c0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x22e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22e0c4: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x22e0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e0c8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x22e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22e0cc: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x22e0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22e0d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e0d4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22e0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22e0d8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x22e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e0dc: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x22e0dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22e0e0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e0e4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x22e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x22e0e8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x22e0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x22e0ec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x22e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e0f0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x22e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22e0f4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x22e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22e0f8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x22e0f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x22e0fc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x22e0fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x22e100: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x22e100u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x22e104: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x22e104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x22e108: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e10c: 0x0  nop
    ctx->pc = 0x22e10cu;
    // NOP
    // 0x22e110: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22e110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e114: 0x0  nop
    ctx->pc = 0x22e114u;
    // NOP
    // 0x22e118: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22E118u;
    {
        const bool branch_taken_0x22e118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E118u;
        // 0x22e11c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e118) {
            ctx->pc = 0x22E13Cu;
            goto label_22e13c;
        }
    }
    ctx->pc = 0x22E120u;
    // 0x22e120: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x22e124: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x22e124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x22e128: 0xc44196a4  lwc1        $f1, -0x695C($v0)
    ctx->pc = 0x22e128u;
    { uint32_t bits = FAST_READ32(0x3F96A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e12c: 0xc46296a8  lwc1        $f2, -0x6958($v1)
    ctx->pc = 0x22e12cu;
    { uint32_t bits = FAST_READ32(0x3F96A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e130: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x22e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22E134u;
    {
        const bool branch_taken_0x22e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E134u;
        // 0x22e138: 0x46020842  mul.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e134) {
            ctx->pc = 0x22E148u;
            goto label_22e148;
        }
    }
    ctx->pc = 0x22E13Cu;
label_22e13c:
    // 0x22e13c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x22e140: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x22e140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e144: 0xc44196a4  lwc1        $f1, -0x695C($v0)
    ctx->pc = 0x22e144u;
    { uint32_t bits = FAST_READ32(0x3F96A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e148:
    // 0x22e148: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22e14c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22e14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x22e150: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x22e150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e154: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x22e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e158: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x22e158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x22e15c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x22e15cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22e160: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x22e160u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e164: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22e164u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22e168: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x22e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22e16c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x22e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e170: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x22e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22e174: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x22e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22e178: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x22e178u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x22e17c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x22e17cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x22e180: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x22e180u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x22e184: 0x0  nop
    ctx->pc = 0x22e184u;
    // NOP
    // 0x22e188: 0x0  nop
    ctx->pc = 0x22e188u;
    // NOP
    // 0x22e18c: 0x46010084  c1          0x10084
    ctx->pc = 0x22e18cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x22e190: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x22e190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22e194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e198: 0x0  nop
    ctx->pc = 0x22e198u;
    // NOP
    // 0x22e19c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x22e19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e1a0: 0x0  nop
    ctx->pc = 0x22e1a0u;
    // NOP
    // 0x22e1a4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22E1A4u;
    {
        const bool branch_taken_0x22e1a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1A4u;
        // 0x22e1a8: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1a4) {
            ctx->pc = 0x22E1D0u;
            goto label_22e1d0;
        }
    }
    ctx->pc = 0x22E1ACu;
    // 0x22e1ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22e1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e1b4: 0x0  nop
    ctx->pc = 0x22e1b4u;
    // NOP
    // 0x22e1b8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x22e1b8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x22e1bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22e1bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22e1c0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x22e1c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22e1c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x22e1c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x22e1c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x22e1c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22e1cc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x22e1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_22e1d0:
    // 0x22e1d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x22e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e1d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22e1d8: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x22e1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
    // 0x22e1dc: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x22e1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x22e1e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22e1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22e1e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22e1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22e1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1ec: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x22e1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x22e1f0: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22e1f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22e1f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x22e1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1f8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x22e1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22e1fc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x22e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e200: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x22e200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22e204: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x22E204u;
    SET_GPR_U32(ctx, 31, 0x22E20Cu);
    ctx->pc = 0x22E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E204u;
    // 0x22e208: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x22E204u, 0x22E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E20Cu;
label_22e20c:
    // 0x22e20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e210: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x22e210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x22e214: 0xae0291bc  sw          $v0, -0x6E44($s0)
    ctx->pc = 0x22e214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939068), GPR_U32(ctx, 2));
    // 0x22e218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22e218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e21c: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x22E21Cu;
    SET_GPR_U32(ctx, 31, 0x22E224u);
    ctx->pc = 0x22E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E21Cu;
    // 0x22e220: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x22E21Cu, 0x22E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E224u;
label_22e224:
    // 0x22e224: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x22E224u;
    {
        const bool branch_taken_0x22e224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e224) {
            ctx->pc = 0x22E228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E224u;
            // 0x22e228: 0xae4091bc  sw          $zero, -0x6E44($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294939068), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E3D0u;
            goto label_22e3d0;
        }
    }
    ctx->pc = 0x22E22Cu;
    // 0x22e22c: 0xc08b7b0  jal         func_22DEC0
    ctx->pc = 0x22E22Cu;
    SET_GPR_U32(ctx, 31, 0x22E234u);
    ctx->pc = 0x22E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E22Cu;
    // 0x22e230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC0u, 0x22E22Cu, 0x22E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E234u;
label_22e234:
    // 0x22e234: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x22E234u;
    {
        const bool branch_taken_0x22e234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E234u;
        // 0x22e238: 0x2403004d  addiu       $v1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e234) {
            ctx->pc = 0x22E3ACu;
            goto label_22e3ac;
        }
    }
    ctx->pc = 0x22E23Cu;
    // 0x22e23c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x22e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e240: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x22e240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22e244: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x22E244u;
    {
        const bool branch_taken_0x22e244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E244u;
        // 0x22e248: 0x24100013  addiu       $s0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e244) {
            ctx->pc = 0x22E3ACu;
            goto label_22e3ac;
        }
    }
    ctx->pc = 0x22E24Cu;
    // 0x22e24c: 0x10500057  beq         $v0, $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x22E24Cu;
    {
        const bool branch_taken_0x22e24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x22E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E24Cu;
        // 0x22e250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e24c) {
            ctx->pc = 0x22E3ACu;
            goto label_22e3ac;
        }
    }
    ctx->pc = 0x22E254u;
    // 0x22e254: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x22e254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x22e258: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22e258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e25c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e264: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x22e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e268: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x22e268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22e26c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x22E26Cu;
    SET_GPR_U32(ctx, 31, 0x22E274u);
    ctx->pc = 0x22E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E26Cu;
    // 0x22e270: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22E26Cu, 0x22E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E274u;
label_22e274:
    // 0x22e274: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x22e278: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22e27c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x22E27Cu;
    {
        const bool branch_taken_0x22e27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e27c) {
            ctx->pc = 0x22E280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E27Cu;
            // 0x22e280: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E2D4u;
            goto label_22e2d4;
        }
    }
    ctx->pc = 0x22E284u;
    // 0x22e284: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x22e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x22e288: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x22e288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x22e28c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22e290: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x22E290u;
    {
        const bool branch_taken_0x22e290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22e290) {
            ctx->pc = 0x22E294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E290u;
            // 0x22e294: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E2D4u;
            goto label_22e2d4;
        }
    }
    ctx->pc = 0x22E298u;
    // 0x22e298: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x22e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x22e29c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x22e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x22e2a0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E2A0u;
    {
        const bool branch_taken_0x22e2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2A0u;
        // 0x22e2a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2a0) {
            ctx->pc = 0x22E2ACu;
            goto label_22e2ac;
        }
    }
    ctx->pc = 0x22E2A8u;
    // 0x22e2a8: 0x8e2411e4  lw          $a0, 0x11E4($s1)
    ctx->pc = 0x22e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_22e2ac:
    // 0x22e2ac: 0x14700002  bne         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E2ACu;
    {
        const bool branch_taken_0x22e2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x22E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2ACu;
        // 0x22e2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2ac) {
            ctx->pc = 0x22E2B8u;
            goto label_22e2b8;
        }
    }
    ctx->pc = 0x22E2B4u;
    // 0x22e2b4: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x22e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_22e2b8:
    // 0x22e2b8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E2B8u;
    {
        const bool branch_taken_0x22e2b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2B8u;
        // 0x22e2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2b8) {
            ctx->pc = 0x22E2C8u;
            goto label_22e2c8;
        }
    }
    ctx->pc = 0x22E2C0u;
    // 0x22e2c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E2C0u;
    {
        const bool branch_taken_0x22e2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e2c0) {
            ctx->pc = 0x22E2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E2C0u;
            // 0x22e2c4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E2D4u;
            goto label_22e2d4;
        }
    }
    ctx->pc = 0x22E2C8u;
label_22e2c8:
    // 0x22e2c8: 0xc0bc5e2  jal         func_2F1788
    ctx->pc = 0x22E2C8u;
    SET_GPR_U32(ctx, 31, 0x22E2D0u);
    ctx->pc = 0x22E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2C8u;
    // 0x22e2cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x22E2C8u, 0x22E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E2D0u;
label_22e2d0:
    // 0x22e2d0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22e2d4:
    // 0x22e2d4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x22e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22e2d8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x22e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22e2dc: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22E2DCu;
    {
        const bool branch_taken_0x22e2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2DCu;
        // 0x22e2e0: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2dc) {
            ctx->pc = 0x22E39Cu;
            goto label_22e39c;
        }
    }
    ctx->pc = 0x22E2E4u;
    // 0x22e2e4: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E2E4u;
    {
        const bool branch_taken_0x22e2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e2e4) {
            ctx->pc = 0x22E2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E2E4u;
            // 0x22e2e8: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E324u;
            goto label_22e324;
        }
    }
    ctx->pc = 0x22E2ECu;
    // 0x22e2ec: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x22e2ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x22e2f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E2F0u;
    {
        const bool branch_taken_0x22e2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2F0u;
        // 0x22e2f4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2f0) {
            ctx->pc = 0x22E308u;
            goto label_22e308;
        }
    }
    ctx->pc = 0x22E2F8u;
    // 0x22e2f8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E2F8u;
    SET_GPR_U32(ctx, 31, 0x22E300u);
    ctx->pc = 0x22E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2F8u;
    // 0x22e2fc: 0x24060572  addiu       $a2, $zero, 0x572 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1394));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E2F8u, 0x22E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E300u;
label_22e300:
    // 0x22e300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22E300u;
    {
        const bool branch_taken_0x22e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E300u;
        // 0x22e304: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e300) {
            ctx->pc = 0x22E314u;
            goto label_22e314;
        }
    }
    ctx->pc = 0x22E308u;
label_22e308:
    // 0x22e308: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E308u;
    SET_GPR_U32(ctx, 31, 0x22E310u);
    ctx->pc = 0x22E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E308u;
    // 0x22e30c: 0x24060573  addiu       $a2, $zero, 0x573 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1395));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E308u, 0x22E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E310u;
label_22e310:
    // 0x22e310: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22e314:
    // 0x22e314: 0xc069b3e  jal         func_1A6CF8
    ctx->pc = 0x22E314u;
    SET_GPR_U32(ctx, 31, 0x22E31Cu);
    ctx->pc = 0x22E318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E314u;
    // 0x22e318: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CF8u, 0x22E314u, 0x22E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E31Cu;
label_22e31c:
    // 0x22e31c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x22E31Cu;
    {
        const bool branch_taken_0x22e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e31c) {
            ctx->pc = 0x22E39Cu;
            goto label_22e39c;
        }
    }
    ctx->pc = 0x22E324u;
label_22e324:
    // 0x22e324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e328: 0x0  nop
    ctx->pc = 0x22e328u;
    // NOP
    // 0x22e32c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22e32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e330: 0x0  nop
    ctx->pc = 0x22e330u;
    // NOP
    // 0x22e334: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x22E334u;
    {
        const bool branch_taken_0x22e334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e334) {
            ctx->pc = 0x22E39Cu;
            goto label_22e39c;
        }
    }
    ctx->pc = 0x22E33Cu;
    // 0x22e33c: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x22E33Cu;
    SET_GPR_U32(ctx, 31, 0x22E344u);
    ctx->pc = 0x22E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E33Cu;
    // 0x22e340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x22E33Cu, 0x22E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E344u;
label_22e344:
    // 0x22e344: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E344u;
    {
        const bool branch_taken_0x22e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e344) {
            ctx->pc = 0x22E348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E344u;
            // 0x22e348: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E358u;
            goto label_22e358;
        }
    }
    ctx->pc = 0x22E34Cu;
    // 0x22e34c: 0xc092aa2  jal         func_24AA88
    ctx->pc = 0x22E34Cu;
    SET_GPR_U32(ctx, 31, 0x22E354u);
    ctx->pc = 0x22E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E34Cu;
    // 0x22e350: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA88u, 0x22E34Cu, 0x22E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E354u;
label_22e354:
    // 0x22e354: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22e358:
    // 0x22e358: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22e358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22e35c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E35Cu;
    SET_GPR_U32(ctx, 31, 0x22E364u);
    ctx->pc = 0x22E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E35Cu;
    // 0x22e360: 0x24060571  addiu       $a2, $zero, 0x571 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1393));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E35Cu, 0x22E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E364u;
label_22e364:
    // 0x22e364: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e368: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22e368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22e36c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E36Cu;
    SET_GPR_U32(ctx, 31, 0x22E374u);
    ctx->pc = 0x22E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E36Cu;
    // 0x22e370: 0x24060577  addiu       $a2, $zero, 0x577 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E36Cu, 0x22E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E374u;
label_22e374:
    // 0x22e374: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e378: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22e378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22e37c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E37Cu;
    SET_GPR_U32(ctx, 31, 0x22E384u);
    ctx->pc = 0x22E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E37Cu;
    // 0x22e380: 0x24060680  addiu       $a2, $zero, 0x680 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E37Cu, 0x22E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E384u;
label_22e384:
    // 0x22e384: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e388: 0xc069b3e  jal         func_1A6CF8
    ctx->pc = 0x22E388u;
    SET_GPR_U32(ctx, 31, 0x22E390u);
    ctx->pc = 0x22E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E388u;
    // 0x22e38c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CF8u, 0x22E388u, 0x22E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E390u;
label_22e390:
    // 0x22e390: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e394: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x22E394u;
    SET_GPR_U32(ctx, 31, 0x22E39Cu);
    ctx->pc = 0x22E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E394u;
    // 0x22e398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x22E394u, 0x22E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E39Cu;
label_22e39c:
    // 0x22e39c: 0xc08e528  jal         func_2394A0
    ctx->pc = 0x22E39Cu;
    SET_GPR_U32(ctx, 31, 0x22E3A4u);
    ctx->pc = 0x22E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E39Cu;
    // 0x22e3a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x22E39Cu, 0x22E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3A4u;
label_22e3a4:
    // 0x22e3a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22E3A4u;
    {
        const bool branch_taken_0x22e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3A4u;
        // 0x22e3a8: 0xae4091bc  sw          $zero, -0x6E44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294939068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3a4) {
            ctx->pc = 0x22E3D0u;
            goto label_22e3d0;
        }
    }
    ctx->pc = 0x22E3ACu;
label_22e3ac:
    // 0x22e3ac: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x22e3b0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22e3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22e3b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E3B4u;
    {
        const bool branch_taken_0x22e3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3B4u;
        // 0x22e3b8: 0xae4091bc  sw          $zero, -0x6E44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294939068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3b4) {
            ctx->pc = 0x22E3D0u;
            goto label_22e3d0;
        }
    }
    ctx->pc = 0x22E3BCu;
    // 0x22e3bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e3c0: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x22E3C0u;
    SET_GPR_U32(ctx, 31, 0x22E3C8u);
    ctx->pc = 0x22E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3C0u;
    // 0x22e3c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x22E3C0u, 0x22E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3C8u;
label_22e3c8:
    // 0x22e3c8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x22E3C8u;
    {
        const bool branch_taken_0x22e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3C8u;
        // 0x22e3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3c8) {
            ctx->pc = 0x22E5C0u;
            goto label_22e5c0;
        }
    }
    ctx->pc = 0x22E3D0u;
label_22e3d0:
    // 0x22e3d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e3d4: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x22E3D4u;
    SET_GPR_U32(ctx, 31, 0x22E3DCu);
    ctx->pc = 0x22E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3D4u;
    // 0x22e3d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x22E3D4u, 0x22E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3DCu;
label_22e3dc:
    // 0x22e3dc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x22E3DCu;
    {
        const bool branch_taken_0x22e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3DCu;
        // 0x22e3e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3dc) {
            ctx->pc = 0x22E5C0u;
            goto label_22e5c0;
        }
    }
    ctx->pc = 0x22E3E4u;
label_22e3e4:
    // 0x22e3e4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x22e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x22e3e8: 0xc6220384  lwc1        $f2, 0x384($s1)
    ctx->pc = 0x22e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e3ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e3f0: 0xc48196a0  lwc1        $f1, -0x6960($a0)
    ctx->pc = 0x22e3f0u;
    { uint32_t bits = FAST_READ32(0x3F96A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e3f4: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x22e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e3f8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x22e3f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22e3fc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22e3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e400: 0x0  nop
    ctx->pc = 0x22e400u;
    // NOP
    // 0x22e404: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x22E404u;
    {
        const bool branch_taken_0x22e404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E404u;
        // 0x22e408: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e404) {
            ctx->pc = 0x22E548u;
            goto label_22e548;
        }
    }
    ctx->pc = 0x22E40Cu;
    // 0x22e40c: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x22e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e410: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x22e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x22e414: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E414u;
    {
        const bool branch_taken_0x22e414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E414u;
        // 0x22e418: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e414) {
            ctx->pc = 0x22E424u;
            goto label_22e424;
        }
    }
    ctx->pc = 0x22E41Cu;
    // 0x22e41c: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x22E41Cu;
    {
        const bool branch_taken_0x22e41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E41Cu;
        // 0x22e420: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e41c) {
            ctx->pc = 0x22E4BCu;
            goto label_22e4bc;
        }
    }
    ctx->pc = 0x22E424u;
label_22e424:
    // 0x22e424: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x22e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22e428: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E428u;
    {
        const bool branch_taken_0x22e428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E428u;
        // 0x22e42c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e428) {
            ctx->pc = 0x22E444u;
            goto label_22e444;
        }
    }
    ctx->pc = 0x22E430u;
    // 0x22e430: 0x24040571  addiu       $a0, $zero, 0x571
    ctx->pc = 0x22e430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1393));
    // 0x22e434: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e438: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e43c: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x22E43Cu;
    {
        const bool branch_taken_0x22e43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22e43c) {
            ctx->pc = 0x22E440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E43Cu;
            // 0x22e440: 0x90a201a4  lbu         $v0, 0x1A4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E46Cu;
            goto label_22e46c;
        }
    }
    ctx->pc = 0x22E444u;
label_22e444:
    // 0x22e444: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e448: 0x24060574  addiu       $a2, $zero, 0x574
    ctx->pc = 0x22e448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1396));
    // 0x22e44c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E44Cu;
    SET_GPR_U32(ctx, 31, 0x22E454u);
    ctx->pc = 0x22E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E44Cu;
    // 0x22e450: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E44Cu, 0x22E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E454u;
label_22e454:
    // 0x22e454: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e458: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22e458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22e45c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E45Cu;
    SET_GPR_U32(ctx, 31, 0x22E464u);
    ctx->pc = 0x22E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E45Cu;
    // 0x22e460: 0x24060578  addiu       $a2, $zero, 0x578 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E45Cu, 0x22E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E464u;
label_22e464:
    // 0x22e464: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x22E464u;
    {
        const bool branch_taken_0x22e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E464u;
        // 0x22e468: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e464) {
            ctx->pc = 0x22E4DCu;
            goto label_22e4dc;
        }
    }
    ctx->pc = 0x22E46Cu;
label_22e46c:
    // 0x22e46c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22E46Cu;
    {
        const bool branch_taken_0x22e46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E46Cu;
        // 0x22e470: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e46c) {
            ctx->pc = 0x22E498u;
            goto label_22e498;
        }
    }
    ctx->pc = 0x22E474u;
    // 0x22e474: 0x24060575  addiu       $a2, $zero, 0x575
    ctx->pc = 0x22e474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1397));
    // 0x22e478: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E478u;
    SET_GPR_U32(ctx, 31, 0x22E480u);
    ctx->pc = 0x22E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E478u;
    // 0x22e47c: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E478u, 0x22E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E480u;
label_22e480:
    // 0x22e480: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e484: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22e484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22e488: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E488u;
    SET_GPR_U32(ctx, 31, 0x22E490u);
    ctx->pc = 0x22E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E488u;
    // 0x22e48c: 0x2406058e  addiu       $a2, $zero, 0x58E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1422));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E488u, 0x22E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E490u;
label_22e490:
    // 0x22e490: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22E490u;
    {
        const bool branch_taken_0x22e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E490u;
        // 0x22e494: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e490) {
            ctx->pc = 0x22E4DCu;
            goto label_22e4dc;
        }
    }
    ctx->pc = 0x22E498u;
label_22e498:
    // 0x22e498: 0x24060576  addiu       $a2, $zero, 0x576
    ctx->pc = 0x22e498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1398));
    // 0x22e49c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E49Cu;
    SET_GPR_U32(ctx, 31, 0x22E4A4u);
    ctx->pc = 0x22E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E49Cu;
    // 0x22e4a0: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E49Cu, 0x22E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4A4u;
label_22e4a4:
    // 0x22e4a4: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e4a8: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22e4ac: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E4ACu;
    SET_GPR_U32(ctx, 31, 0x22E4B4u);
    ctx->pc = 0x22E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4ACu;
    // 0x22e4b0: 0x2406058f  addiu       $a2, $zero, 0x58F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1423));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E4ACu, 0x22E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4B4u;
label_22e4b4:
    // 0x22e4b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22E4B4u;
    {
        const bool branch_taken_0x22e4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4B4u;
        // 0x22e4b8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4b4) {
            ctx->pc = 0x22E4DCu;
            goto label_22e4dc;
        }
    }
    ctx->pc = 0x22E4BCu;
label_22e4bc:
    // 0x22e4bc: 0x24060574  addiu       $a2, $zero, 0x574
    ctx->pc = 0x22e4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1396));
    // 0x22e4c0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E4C0u;
    SET_GPR_U32(ctx, 31, 0x22E4C8u);
    ctx->pc = 0x22E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4C0u;
    // 0x22e4c4: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E4C0u, 0x22E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4C8u;
label_22e4c8:
    // 0x22e4c8: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e4cc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22e4d0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E4D0u;
    SET_GPR_U32(ctx, 31, 0x22E4D8u);
    ctx->pc = 0x22E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4D0u;
    // 0x22e4d4: 0x24060578  addiu       $a2, $zero, 0x578 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E4D0u, 0x22E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4D8u;
label_22e4d8:
    // 0x22e4d8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22e4dc:
    // 0x22e4dc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22e4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22e4e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E4E0u;
    {
        const bool branch_taken_0x22e4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e4e0) {
            ctx->pc = 0x22E4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E4E0u;
            // 0x22e4e4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E4F8u;
            goto label_22e4f8;
        }
    }
    ctx->pc = 0x22E4E8u;
    // 0x22e4e8: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x22e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
    // 0x22e4ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E4ECu;
    {
        const bool branch_taken_0x22e4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e4ec) {
            ctx->pc = 0x22E4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E4ECu;
            // 0x22e4f0: 0x8e220390  lw          $v0, 0x390($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E510u;
            goto label_22e510;
        }
    }
    ctx->pc = 0x22E4F4u;
    // 0x22e4f4: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22e4f8:
    // 0x22e4f8: 0xc069b46  jal         func_1A6D18
    ctx->pc = 0x22E4F8u;
    SET_GPR_U32(ctx, 31, 0x22E500u);
    ctx->pc = 0x22E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4F8u;
    // 0x22e4fc: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D18u, 0x22E4F8u, 0x22E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E500u;
label_22e500:
    // 0x22e500: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e504: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22E504u;
    SET_GPR_U32(ctx, 31, 0x22E50Cu);
    ctx->pc = 0x22E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E504u;
    // 0x22e508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22E504u, 0x22E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E50Cu;
label_22e50c:
    // 0x22e50c: 0x8e220390  lw          $v0, 0x390($s1)
    ctx->pc = 0x22e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
label_22e510:
    // 0x22e510: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x22e510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x22e514: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x22e514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x22e518: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x22e518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x22e51c: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x22E51Cu;
    {
        const bool branch_taken_0x22e51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E51Cu;
        // 0x22e520: 0xae220390  sw          $v0, 0x390($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e51c) {
            ctx->pc = 0x22E5BCu;
            goto label_22e5bc;
        }
    }
    ctx->pc = 0x22E524u;
    // 0x22e524: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x22e524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x22e528: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x22e528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22e52c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22e52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x22e530: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e534: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x22e534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x22e538: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x22E538u;
    SET_GPR_U32(ctx, 31, 0x22E540u);
    ctx->pc = 0x22E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E538u;
    // 0x22e53c: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x22E538u, 0x22E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E540u;
label_22e540:
    // 0x22e540: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x22E540u;
    {
        const bool branch_taken_0x22e540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E540u;
        // 0x22e544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e540) {
            ctx->pc = 0x22E5C0u;
            goto label_22e5c0;
        }
    }
    ctx->pc = 0x22E548u;
label_22e548:
    // 0x22e548: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e54c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x22e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22e550: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22e554: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x22E554u;
    {
        const bool branch_taken_0x22e554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E554u;
        // 0x22e558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e554) {
            ctx->pc = 0x22E5C0u;
            goto label_22e5c0;
        }
    }
    ctx->pc = 0x22E55Cu;
    // 0x22e55c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22e560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e564: 0x0  nop
    ctx->pc = 0x22e564u;
    // NOP
    // 0x22e568: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x22e568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e56c: 0x0  nop
    ctx->pc = 0x22e56cu;
    // NOP
    // 0x22e570: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x22E570u;
    {
        const bool branch_taken_0x22e570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E570u;
        // 0x22e574: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e570) {
            ctx->pc = 0x22E5C4u;
            goto label_22e5c4;
        }
    }
    ctx->pc = 0x22E578u;
    // 0x22e578: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22e578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22e57c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E57Cu;
    SET_GPR_U32(ctx, 31, 0x22E584u);
    ctx->pc = 0x22E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E57Cu;
    // 0x22e580: 0x24060571  addiu       $a2, $zero, 0x571 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1393));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E57Cu, 0x22E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E584u;
label_22e584:
    // 0x22e584: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e588: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22e58c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E58Cu;
    SET_GPR_U32(ctx, 31, 0x22E594u);
    ctx->pc = 0x22E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E58Cu;
    // 0x22e590: 0x24060577  addiu       $a2, $zero, 0x577 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E58Cu, 0x22E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E594u;
label_22e594:
    // 0x22e594: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e598: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22e59c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22E59Cu;
    SET_GPR_U32(ctx, 31, 0x22E5A4u);
    ctx->pc = 0x22E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E59Cu;
    // 0x22e5a0: 0x24060680  addiu       $a2, $zero, 0x680 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22E59Cu, 0x22E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5A4u;
label_22e5a4:
    // 0x22e5a4: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e5a8: 0xc069b3e  jal         func_1A6CF8
    ctx->pc = 0x22E5A8u;
    SET_GPR_U32(ctx, 31, 0x22E5B0u);
    ctx->pc = 0x22E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E5A8u;
    // 0x22e5ac: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CF8u, 0x22E5A8u, 0x22E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5B0u;
label_22e5b0:
    // 0x22e5b0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22e5b4: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22E5B4u;
    SET_GPR_U32(ctx, 31, 0x22E5BCu);
    ctx->pc = 0x22E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E5B4u;
    // 0x22e5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22E5B4u, 0x22E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5BCu;
label_22e5bc:
    // 0x22e5bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e5c0:
    // 0x22e5c0: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x22e5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_22e5c4:
    // 0x22e5c4: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x22e5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22e5c8: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x22e5c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22e5cc: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x22e5ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22e5d0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x22e5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22e5d4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x22e5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22e5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x22E5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5D8u;
        // 0x22e5dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E5E0u;
}
