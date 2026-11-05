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

// Function: sub_003A4BB0
// Address: 0x3a4bb0 - 0x3a4c58
void sub_003A4BB0_0x3a4bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4BB0_0x3a4bb0");
#endif

    switch (ctx->pc) {
        case 0x3a4bd8u: goto label_3a4bd8;
        case 0x3a4bfcu: goto label_3a4bfc;
        case 0x3a4c10u: goto label_3a4c10;
        case 0x3a4c18u: goto label_3a4c18;
        case 0x3a4c28u: goto label_3a4c28;
        case 0x3a4c3cu: goto label_3a4c3c;
        default: break;
    }

    ctx->pc = 0x3a4bb0u;

    // 0x3a4bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a4bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a4bb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a4bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4bbc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x3a4bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x3a4bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a4bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a4bc4: 0x24a537a0  addiu       $a1, $a1, 0x37A0
    ctx->pc = 0x3a4bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14240));
    // 0x3a4bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4bcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a4bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a4bd0: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3A4BD0u;
    SET_GPR_U32(ctx, 31, 0x3A4BD8u);
    ctx->pc = 0x3A4BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4BD0u;
    // 0x3a4bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3A4BD0u, 0x3A4BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4BD8u;
label_3a4bd8:
    // 0x3a4bd8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x3a4bd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a4bdc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3a4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a4be0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4BE0u;
    {
        const bool branch_taken_0x3a4be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BE0u;
        // 0x3a4be4: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4be0) {
            ctx->pc = 0x3A4BFCu;
            goto label_3a4bfc;
        }
    }
    ctx->pc = 0x3A4BE8u;
    // 0x3a4be8: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4BE8u;
    {
        const bool branch_taken_0x3a4be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BE8u;
        // 0x3a4bec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4be8) {
            ctx->pc = 0x3A4BFCu;
            goto label_3a4bfc;
        }
    }
    ctx->pc = 0x3A4BF0u;
    // 0x3a4bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4bf4: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3A4BF4u;
    SET_GPR_U32(ctx, 31, 0x3A4BFCu);
    ctx->pc = 0x3A4BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4BF4u;
    // 0x3a4bf8: 0x24a5d950  addiu       $a1, $a1, -0x26B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3A4BF4u, 0x3A4BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4BFCu;
label_3a4bfc:
    // 0x3a4bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a4bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c00: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x3a4c00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x3a4c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c08: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3A4C08u;
    SET_GPR_U32(ctx, 31, 0x3A4C10u);
    ctx->pc = 0x3A4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C08u;
    // 0x3a4c0c: 0x2610d958  addiu       $s0, $s0, -0x26A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3A4C08u, 0x3A4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C10u;
label_3a4c10:
    // 0x3a4c10: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A4C10u;
    SET_GPR_U32(ctx, 31, 0x3A4C18u);
    ctx->pc = 0x3A4C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C10u;
    // 0x3a4c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A4C10u, 0x3A4C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C18u;
label_3a4c18:
    // 0x3a4c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a4c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c1c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a4c20: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3A4C20u;
    SET_GPR_U32(ctx, 31, 0x3A4C28u);
    ctx->pc = 0x3A4C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C20u;
    // 0x3a4c24: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3A4C20u, 0x3A4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C28u;
label_3a4c28:
    // 0x3a4c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4C2Cu;
    {
        const bool branch_taken_0x3a4c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C2Cu;
        // 0x3a4c30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c2c) {
            ctx->pc = 0x3A4C40u;
            goto label_3a4c40;
        }
    }
    ctx->pc = 0x3A4C34u;
    // 0x3a4c34: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3A4C34u;
    SET_GPR_U32(ctx, 31, 0x3A4C3Cu);
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3A4C34u, 0x3A4C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C3Cu;
label_3a4c3c:
    // 0x3a4c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a4c40:
    // 0x3a4c40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a4c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a4c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a4c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4c4c: 0x80e9068  j           func_3A41A0
    ctx->pc = 0x3A4C4Cu;
    ctx->pc = 0x3A4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C4Cu;
    // 0x3a4c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A41A0u;
    sub_003A41A0_0x3a41a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A4C54u;
    // 0x3a4c54: 0x0  nop
    ctx->pc = 0x3a4c54u;
    // NOP
    ctx->pc = 0x3a4c58u;
}
