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

// Function: sub_001159B0
// Address: 0x1159b0 - 0x115a68
void sub_001159B0_0x1159b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001159B0_0x1159b0");
#endif

    switch (ctx->pc) {
        case 0x1159e0u: goto label_1159e0;
        case 0x1159ecu: goto label_1159ec;
        case 0x1159f8u: goto label_1159f8;
        case 0x115a08u: goto label_115a08;
        case 0x115a20u: goto label_115a20;
        case 0x115a2cu: goto label_115a2c;
        default: break;
    }

    ctx->pc = 0x1159b0u;

    // 0x1159b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1159b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1159b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1159b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1159b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1159b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1159bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1159bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1159c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1159c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1159c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1159c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1159c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1159cc: 0x92220040  lbu         $v0, 0x40($s1)
    ctx->pc = 0x1159ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1159d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1159D0u;
    {
        const bool branch_taken_0x1159d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1159D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159D0u;
        // 0x1159d4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159d0) {
            ctx->pc = 0x115A10u;
            goto label_115a10;
        }
    }
    ctx->pc = 0x1159D8u;
    // 0x1159d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1159D8u;
    {
        const bool branch_taken_0x1159d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1159DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159D8u;
        // 0x1159dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159d8) {
            ctx->pc = 0x115A4Cu;
            goto label_115a4c;
        }
    }
    ctx->pc = 0x1159E0u;
label_1159e0:
    // 0x1159e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1159e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159e4: 0xc0456e4  jal         func_115B90
    ctx->pc = 0x1159E4u;
    SET_GPR_U32(ctx, 31, 0x1159ECu);
    ctx->pc = 0x1159E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159E4u;
    // 0x1159e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B90u, 0x1159E4u, 0x1159ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159ECu;
label_1159ec:
    // 0x1159ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1159ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159f0: 0xc042426  jal         func_109098
    ctx->pc = 0x1159F0u;
    SET_GPR_U32(ctx, 31, 0x1159F8u);
    ctx->pc = 0x1159F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159F0u;
    // 0x1159f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109098u, 0x1159F0u, 0x1159F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159F8u;
label_1159f8:
    // 0x1159f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1159f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1159fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1159fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a00: 0xc041eca  jal         func_107B28
    ctx->pc = 0x115A00u;
    SET_GPR_U32(ctx, 31, 0x115A08u);
    ctx->pc = 0x115A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A00u;
    // 0x115a04: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B28u, 0x115A00u, 0x115A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A08u;
label_115a08:
    // 0x115a08: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115A08u;
    {
        const bool branch_taken_0x115a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A08u;
        // 0x115a0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a08) {
            ctx->pc = 0x115A4Cu;
            goto label_115a4c;
        }
    }
    ctx->pc = 0x115A10u;
label_115a10:
    // 0x115a10: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x115A10u;
    {
        const bool branch_taken_0x115a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A10u;
        // 0x115a14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a10) {
            ctx->pc = 0x115A48u;
            goto label_115a48;
        }
    }
    ctx->pc = 0x115A18u;
    // 0x115a18: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x115a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x115a1c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_115a20:
    // 0x115a20: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x115a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x115a24: 0xc04244c  jal         func_109130
    ctx->pc = 0x115A24u;
    SET_GPR_U32(ctx, 31, 0x115A2Cu);
    ctx->pc = 0x115A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A24u;
    // 0x115a28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109130u, 0x115A24u, 0x115A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A2Cu;
label_115a2c:
    // 0x115a2c: 0x1053ffec  beq         $v0, $s3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x115A2Cu;
    {
        const bool branch_taken_0x115a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x115A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A2Cu;
        // 0x115a30: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a2c) {
            ctx->pc = 0x1159E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1159e0;
        }
    }
    ctx->pc = 0x115A34u;
    // 0x115a34: 0x92220040  lbu         $v0, 0x40($s1)
    ctx->pc = 0x115a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x115a38: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x115a38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x115a3c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x115a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115a40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x115A40u;
    {
        const bool branch_taken_0x115a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A40u;
        // 0x115a44: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a40) {
            ctx->pc = 0x115A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115a20;
        }
    }
    ctx->pc = 0x115A48u;
label_115a48:
    // 0x115a48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115a4c:
    // 0x115a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115a54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115a58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115a58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115a5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115a60: 0x3e00008  jr          $ra
    ctx->pc = 0x115A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A60u;
        // 0x115a64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115A68u;
}
