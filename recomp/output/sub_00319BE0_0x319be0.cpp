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

// Function: sub_00319BE0
// Address: 0x319be0 - 0x319c78
void sub_00319BE0_0x319be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319BE0_0x319be0");
#endif

    switch (ctx->pc) {
        case 0x319c0cu: goto label_319c0c;
        case 0x319c14u: goto label_319c14;
        case 0x319c54u: goto label_319c54;
        case 0x319c5cu: goto label_319c5c;
        case 0x319c64u: goto label_319c64;
        default: break;
    }

    ctx->pc = 0x319be0u;

    // 0x319be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319be4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x319be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x319be8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x319be8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x319bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x319becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x319bf0: 0x8e22bd80  lw          $v0, -0x4280($s1)
    ctx->pc = 0x319bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD80u));
    // 0x319bf4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x319BF4u;
    {
        const bool branch_taken_0x319bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BF4u;
        // 0x319bf8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319bf4) {
            ctx->pc = 0x319C64u;
            goto label_319c64;
        }
    }
    ctx->pc = 0x319BFCu;
    // 0x319bfc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x319bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x319c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x319c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319c04: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x319C04u;
    SET_GPR_U32(ctx, 31, 0x319C0Cu);
    ctx->pc = 0x319C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C04u;
    // 0x319c08: 0x8e04bd48  lw          $a0, -0x42B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x319C04u, 0x319C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C0Cu;
label_319c0c:
    // 0x319c0c: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x319C0Cu;
    SET_GPR_U32(ctx, 31, 0x319C14u);
    ctx->pc = 0x319C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C0Cu;
    // 0x319c10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x319C0Cu, 0x319C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C14u;
label_319c14:
    // 0x319c14: 0x8e22bd80  lw          $v0, -0x4280($s1)
    ctx->pc = 0x319c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950272)));
    // 0x319c18: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x319c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x319c1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x319c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x319c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x319c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x319c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x319c28: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x319c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x319c2c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x319c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x319c30: 0x9227bd80  lbu         $a3, -0x4280($s1)
    ctx->pc = 0x319c30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294950272)));
    // 0x319c34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x319c34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x319c38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c3c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x319c3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x319c40: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x319c40u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x319c44: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x319c44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x319c48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x319c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c4c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x319C4Cu;
    SET_GPR_U32(ctx, 31, 0x319C54u);
    ctx->pc = 0x319C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C4Cu;
    // 0x319c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x319C4Cu, 0x319C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C54u;
label_319c54:
    // 0x319c54: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x319C54u;
    SET_GPR_U32(ctx, 31, 0x319C5Cu);
    ctx->pc = 0x319C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C54u;
    // 0x319c58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x319C54u, 0x319C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C5Cu;
label_319c5c:
    // 0x319c5c: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x319C5Cu;
    SET_GPR_U32(ctx, 31, 0x319C64u);
    ctx->pc = 0x319C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C5Cu;
    // 0x319c60: 0x8e04bd48  lw          $a0, -0x42B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x319C5Cu, 0x319C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C64u;
label_319c64:
    // 0x319c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x319c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319c68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x319c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x319c6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319c70: 0x3e00008  jr          $ra
    ctx->pc = 0x319C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C70u;
        // 0x319c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319C78u;
}
