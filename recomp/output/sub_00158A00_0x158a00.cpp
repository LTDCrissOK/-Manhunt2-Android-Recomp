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

// Function: sub_00158A00
// Address: 0x158a00 - 0x158aa0
void sub_00158A00_0x158a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158A00_0x158a00");
#endif

    switch (ctx->pc) {
        case 0x158a00u: goto label_158a00;
        case 0x158a04u: goto label_158a04;
        case 0x158a08u: goto label_158a08;
        case 0x158a0cu: goto label_158a0c;
        case 0x158a10u: goto label_158a10;
        case 0x158a14u: goto label_158a14;
        case 0x158a18u: goto label_158a18;
        case 0x158a1cu: goto label_158a1c;
        case 0x158a20u: goto label_158a20;
        case 0x158a24u: goto label_158a24;
        case 0x158a28u: goto label_158a28;
        case 0x158a2cu: goto label_158a2c;
        case 0x158a30u: goto label_158a30;
        case 0x158a34u: goto label_158a34;
        case 0x158a38u: goto label_158a38;
        case 0x158a3cu: goto label_158a3c;
        case 0x158a40u: goto label_158a40;
        case 0x158a44u: goto label_158a44;
        case 0x158a48u: goto label_158a48;
        case 0x158a4cu: goto label_158a4c;
        case 0x158a50u: goto label_158a50;
        case 0x158a54u: goto label_158a54;
        case 0x158a58u: goto label_158a58;
        case 0x158a5cu: goto label_158a5c;
        case 0x158a60u: goto label_158a60;
        case 0x158a64u: goto label_158a64;
        case 0x158a68u: goto label_158a68;
        case 0x158a6cu: goto label_158a6c;
        case 0x158a70u: goto label_158a70;
        case 0x158a74u: goto label_158a74;
        case 0x158a78u: goto label_158a78;
        case 0x158a7cu: goto label_158a7c;
        case 0x158a80u: goto label_158a80;
        case 0x158a84u: goto label_158a84;
        case 0x158a88u: goto label_158a88;
        case 0x158a8cu: goto label_158a8c;
        case 0x158a90u: goto label_158a90;
        case 0x158a94u: goto label_158a94;
        case 0x158a98u: goto label_158a98;
        case 0x158a9cu: goto label_158a9c;
        default: break;
    }

    ctx->pc = 0x158a00u;

label_158a00:
    // 0x158a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158a04:
    // 0x158a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158a08:
    // 0x158a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158a0c:
    // 0x158a0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158a10:
    // 0x158a10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158a14:
    // 0x158a14: 0xc04f2e4  jal         func_13CB90
label_158a18:
    if (ctx->pc == 0x158A18u) {
        ctx->pc = 0x158A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A14u;
        // 0x158a18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A1Cu;
        goto label_158a1c;
    }
    ctx->pc = 0x158A14u;
    SET_GPR_U32(ctx, 31, 0x158A1Cu);
    ctx->pc = 0x158A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A14u;
    // 0x158a18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CB90u, 0x158A14u, 0x158A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A1Cu;
label_158a1c:
    // 0x158a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x158a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158a20:
    // 0x158a20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_158a24:
    // 0x158a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158a28:
    // 0x158a28: 0xc04f33e  jal         func_13CCF8
label_158a2c:
    if (ctx->pc == 0x158A2Cu) {
        ctx->pc = 0x158A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A28u;
        // 0x158a2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A30u;
        goto label_158a30;
    }
    ctx->pc = 0x158A28u;
    SET_GPR_U32(ctx, 31, 0x158A30u);
    ctx->pc = 0x158A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A28u;
    // 0x158a2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158A28u, 0x158A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A30u;
label_158a30:
    // 0x158a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158a34:
    // 0x158a34: 0xc04f0b6  jal         func_13C2D8
label_158a38:
    if (ctx->pc == 0x158A38u) {
        ctx->pc = 0x158A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A34u;
        // 0x158a38: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A3Cu;
        goto label_158a3c;
    }
    ctx->pc = 0x158A34u;
    SET_GPR_U32(ctx, 31, 0x158A3Cu);
    ctx->pc = 0x158A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A34u;
    // 0x158a38: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158A34u, 0x158A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A3Cu;
label_158a3c:
    // 0x158a3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x158a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158a40:
    // 0x158a40: 0x8e050304  lw          $a1, 0x304($s0)
    ctx->pc = 0x158a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_158a44:
    // 0x158a44: 0xc0461e8  jal         func_1187A0
label_158a48:
    if (ctx->pc == 0x158A48u) {
        ctx->pc = 0x158A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A44u;
        // 0x158a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A4Cu;
        goto label_158a4c;
    }
    ctx->pc = 0x158A44u;
    SET_GPR_U32(ctx, 31, 0x158A4Cu);
    ctx->pc = 0x158A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A44u;
    // 0x158a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x158A44u, 0x158A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A4Cu;
label_158a4c:
    // 0x158a4c: 0xc60c0310  lwc1        $f12, 0x310($s0)
    ctx->pc = 0x158a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_158a50:
    // 0x158a50: 0xc046290  jal         func_118A40
label_158a54:
    if (ctx->pc == 0x158A54u) {
        ctx->pc = 0x158A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A50u;
        // 0x158a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A58u;
        goto label_158a58;
    }
    ctx->pc = 0x158A50u;
    SET_GPR_U32(ctx, 31, 0x158A58u);
    ctx->pc = 0x158A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A50u;
    // 0x158a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x158A50u, 0x158A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A58u;
label_158a58:
    // 0x158a58: 0xc6000314  lwc1        $f0, 0x314($s0)
    ctx->pc = 0x158a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158a5c:
    // 0x158a5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_158a60:
    // 0x158a60: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x158a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_158a64:
    // 0x158a64: 0xc046256  jal         func_118958
label_158a68:
    if (ctx->pc == 0x158A68u) {
        ctx->pc = 0x158A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A64u;
        // 0x158a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A6Cu;
        goto label_158a6c;
    }
    ctx->pc = 0x158A64u;
    SET_GPR_U32(ctx, 31, 0x158A6Cu);
    ctx->pc = 0x158A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A64u;
    // 0x158a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x158A64u, 0x158A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A6Cu;
label_158a6c:
    // 0x158a6c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_158a70:
    // 0x158a70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158a74:
    // 0x158a74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158a78:
    // 0x158a78: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158a7c:
    // 0x158a7c: 0x40f809  jalr        $v0
label_158a80:
    if (ctx->pc == 0x158A80u) {
        ctx->pc = 0x158A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A7Cu;
        // 0x158a80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A84u;
        goto label_158a84;
    }
    ctx->pc = 0x158A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158A84u);
        ctx->pc = 0x158A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A7Cu;
        // 0x158a80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158A7Cu, 0x158A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158A84u;
label_158a84:
    // 0x158a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158a88:
    // 0x158a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158a8c:
    // 0x158a8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158a90:
    // 0x158a90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158a94:
    // 0x158a94: 0x3e00008  jr          $ra
label_158a98:
    if (ctx->pc == 0x158A98u) {
        ctx->pc = 0x158A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A94u;
        // 0x158a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A9Cu;
        goto label_158a9c;
    }
    ctx->pc = 0x158A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A94u;
        // 0x158a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158A9Cu;
label_158a9c:
    // 0x158a9c: 0x0  nop
    ctx->pc = 0x158a9cu;
    // NOP
    ctx->pc = 0x158aa0u;
}
