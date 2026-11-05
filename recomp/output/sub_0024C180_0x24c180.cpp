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

// Function: sub_0024C180
// Address: 0x24c180 - 0x24c278
void sub_0024C180_0x24c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C180_0x24c180");
#endif

    switch (ctx->pc) {
        case 0x24c19cu: goto label_24c19c;
        case 0x24c1bcu: goto label_24c1bc;
        case 0x24c1d8u: goto label_24c1d8;
        case 0x24c1ecu: goto label_24c1ec;
        case 0x24c1f4u: goto label_24c1f4;
        case 0x24c208u: goto label_24c208;
        case 0x24c24cu: goto label_24c24c;
        case 0x24c254u: goto label_24c254;
        default: break;
    }

    ctx->pc = 0x24c180u;

    // 0x24c180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c184: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24c188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24c194: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x24C194u;
    SET_GPR_U32(ctx, 31, 0x24C19Cu);
    ctx->pc = 0x24C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C194u;
    // 0x24c198: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24C194u, 0x24C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C19Cu;
label_24c19c:
    // 0x24c19c: 0x8e22074c  lw          $v0, 0x74C($s1)
    ctx->pc = 0x24c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1868)));
    // 0x24c1a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24c1a4: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x24C1A4u;
    {
        const bool branch_taken_0x24c1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1A4u;
        // 0x24c1a8: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1a4) {
            ctx->pc = 0x24C25Cu;
            goto label_24c25c;
        }
    }
    ctx->pc = 0x24C1ACu;
    // 0x24c1ac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x24c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x24c1b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1b4: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x24C1B4u;
    SET_GPR_U32(ctx, 31, 0x24C1BCu);
    ctx->pc = 0x24C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1B4u;
    // 0x24c1b8: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x24C1B4u, 0x24C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1BCu;
label_24c1bc:
    // 0x24c1bc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x24c1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x24c1c0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24c1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24c1c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24c1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c1c8: 0x0  nop
    ctx->pc = 0x24c1c8u;
    // NOP
    // 0x24c1cc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x24c1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x24c1d0: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x24C1D0u;
    SET_GPR_U32(ctx, 31, 0x24C1D8u);
    ctx->pc = 0x24C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1D0u;
    // 0x24c1d4: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x24C1D0u, 0x24C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1D8u;
label_24c1d8:
    // 0x24c1d8: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x24c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x24c1dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x24c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x24c1e4: 0xc079848  jal         func_1E6120
    ctx->pc = 0x24C1E4u;
    SET_GPR_U32(ctx, 31, 0x24C1ECu);
    ctx->pc = 0x24C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1E4u;
    // 0x24c1e8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x24C1E4u, 0x24C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1ECu;
label_24c1ec:
    // 0x24c1ec: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x24C1ECu;
    SET_GPR_U32(ctx, 31, 0x24C1F4u);
    ctx->pc = 0x24C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1ECu;
    // 0x24c1f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x24C1ECu, 0x24C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1F4u;
label_24c1f4:
    // 0x24c1f4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24c1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1fc: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24c1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24c200: 0xc07a4ce  jal         func_1E9338
    ctx->pc = 0x24C200u;
    SET_GPR_U32(ctx, 31, 0x24C208u);
    ctx->pc = 0x24C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C200u;
    // 0x24c204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9338u, 0x24C200u, 0x24C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C208u;
label_24c208:
    // 0x24c208: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24C208u;
    {
        const bool branch_taken_0x24c208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C208u;
        // 0x24c20c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c208) {
            ctx->pc = 0x24C25Cu;
            goto label_24c25c;
        }
    }
    ctx->pc = 0x24C210u;
    // 0x24c210: 0x8c432b20  lw          $v1, 0x2B20($v0)
    ctx->pc = 0x24c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11040)));
    // 0x24c214: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24c214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c218: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C218u;
    {
        const bool branch_taken_0x24c218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C218u;
        // 0x24c21c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c218) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C220u;
    // 0x24c220: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x24c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c224: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x24c224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x24c228: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24c228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24c22c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24c22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c230: 0x0  nop
    ctx->pc = 0x24c230u;
    // NOP
    // 0x24c234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c238: 0x0  nop
    ctx->pc = 0x24c238u;
    // NOP
    // 0x24c23c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x24C23Cu;
    {
        const bool branch_taken_0x24c23c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C23Cu;
        // 0x24c240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c23c) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C244u;
    // 0x24c244: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x24C244u;
    SET_GPR_U32(ctx, 31, 0x24C24Cu);
    ctx->pc = 0x24C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C244u;
    // 0x24c248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24C244u, 0x24C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C24Cu;
label_24c24c:
    // 0x24c24c: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x24C24Cu;
    SET_GPR_U32(ctx, 31, 0x24C254u);
    ctx->pc = 0x24C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C24Cu;
    // 0x24c250: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x24C24Cu, 0x24C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C254u;
label_24c254:
    // 0x24c254: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C254u;
    {
        const bool branch_taken_0x24c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C254u;
        // 0x24c258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c254) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C25Cu;
label_24c25c:
    // 0x24c25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c260:
    // 0x24c260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C26Cu;
        // 0x24c270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C274u;
    // 0x24c274: 0x0  nop
    ctx->pc = 0x24c274u;
    // NOP
    ctx->pc = 0x24c278u;
}
