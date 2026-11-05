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

// Function: sub_00112AE8
// Address: 0x112ae8 - 0x112b90
void sub_00112AE8_0x112ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112AE8_0x112ae8");
#endif

    switch (ctx->pc) {
        case 0x112b04u: goto label_112b04;
        case 0x112b14u: goto label_112b14;
        case 0x112b20u: goto label_112b20;
        case 0x112b2cu: goto label_112b2c;
        case 0x112b38u: goto label_112b38;
        case 0x112b48u: goto label_112b48;
        case 0x112b78u: goto label_112b78;
        default: break;
    }

    ctx->pc = 0x112ae8u;

    // 0x112ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112aec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x112aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x112af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x112af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x112af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112afc: 0xc0449d6  jal         func_112758
    ctx->pc = 0x112AFCu;
    SET_GPR_U32(ctx, 31, 0x112B04u);
    ctx->pc = 0x112B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AFCu;
    // 0x112b00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112758u, 0x112AFCu, 0x112B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B04u;
label_112b04:
    // 0x112b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x112b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112b0c: 0xc046138  jal         func_1184E0
    ctx->pc = 0x112B0Cu;
    SET_GPR_U32(ctx, 31, 0x112B14u);
    ctx->pc = 0x112B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B0Cu;
    // 0x112b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x112B0Cu, 0x112B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B14u;
label_112b14:
    // 0x112b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b18: 0xc046154  jal         func_118550
    ctx->pc = 0x112B18u;
    SET_GPR_U32(ctx, 31, 0x112B20u);
    ctx->pc = 0x112B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B18u;
    // 0x112b1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x112B18u, 0x112B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B20u;
label_112b20:
    // 0x112b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b24: 0xc046256  jal         func_118958
    ctx->pc = 0x112B24u;
    SET_GPR_U32(ctx, 31, 0x112B2Cu);
    ctx->pc = 0x112B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B24u;
    // 0x112b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x112B24u, 0x112B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B2Cu;
label_112b2c:
    // 0x112b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b30: 0xc046164  jal         func_118590
    ctx->pc = 0x112B30u;
    SET_GPR_U32(ctx, 31, 0x112B38u);
    ctx->pc = 0x112B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B30u;
    // 0x112b34: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x112B30u, 0x112B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B38u;
label_112b38:
    // 0x112b38: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x112b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x112b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b40: 0xc044e28  jal         func_1138A0
    ctx->pc = 0x112B40u;
    SET_GPR_U32(ctx, 31, 0x112B48u);
    ctx->pc = 0x112B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B40u;
    // 0x112b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1138A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1138A0u, 0x112B40u, 0x112B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B48u;
label_112b48:
    // 0x112b48: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x112b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x112b4c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x112b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x112b50: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x112b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x112b54: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x112b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x112b58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112b5c: 0x8e2700c4  lw          $a3, 0xC4($s1)
    ctx->pc = 0x112b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x112b60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x112b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112b64: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x112b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x112b68: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x112b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x112b6c: 0x8c660108  lw          $a2, 0x108($v1)
    ctx->pc = 0x112b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x112b70: 0xc04668a  jal         func_119A28
    ctx->pc = 0x112B70u;
    SET_GPR_U32(ctx, 31, 0x112B78u);
    ctx->pc = 0x112B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B70u;
    // 0x112b74: 0x248487a0  addiu       $a0, $a0, -0x7860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x112B70u, 0x112B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B78u;
label_112b78:
    // 0x112b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x112b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112b84: 0x3e00008  jr          $ra
    ctx->pc = 0x112B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B84u;
        // 0x112b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112B8Cu;
    // 0x112b8c: 0x0  nop
    ctx->pc = 0x112b8cu;
    // NOP
    ctx->pc = 0x112b90u;
}
