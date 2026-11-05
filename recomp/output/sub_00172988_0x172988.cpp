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

// Function: sub_00172988
// Address: 0x172988 - 0x172aa8
void sub_00172988_0x172988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172988_0x172988");
#endif

    switch (ctx->pc) {
        case 0x1729d8u: goto label_1729d8;
        case 0x1729f0u: goto label_1729f0;
        case 0x172a20u: goto label_172a20;
        case 0x172a30u: goto label_172a30;
        case 0x172a44u: goto label_172a44;
        case 0x172a54u: goto label_172a54;
        default: break;
    }

    ctx->pc = 0x172988u;

    // 0x172988: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x172988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17298c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17298cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172990: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x172990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x172994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x172998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17299c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17299cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1729a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1729a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1729a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1729a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1729a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1729ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1729acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1729b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1729b4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1729b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1729b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1729b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1729bc: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x1729bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1729c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1729c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1729c4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1729c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729c8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1729c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1729cc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x1729ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1729d0: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1729D0u;
    SET_GPR_U32(ctx, 31, 0x1729D8u);
    ctx->pc = 0x1729D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729D0u;
    // 0x1729d4: 0x8cd400e0  lw          $s4, 0xE0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1729D0u, 0x1729D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729D8u;
label_1729d8:
    // 0x1729d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1729d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729dc: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x1729dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1729e0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1729E0u;
    {
        const bool branch_taken_0x1729e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E0u;
        // 0x1729e4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729e0) {
            ctx->pc = 0x172A7Cu;
            goto label_172a7c;
        }
    }
    ctx->pc = 0x1729E8u;
    // 0x1729e8: 0x24569c14  addiu       $s6, $v0, -0x63EC
    ctx->pc = 0x1729e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x1729ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1729ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1729f0:
    // 0x1729f0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1729f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1729f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1729f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1729f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1729f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1729fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1729FCu;
    {
        const bool branch_taken_0x1729fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729FCu;
        // 0x172a00: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729fc) {
            ctx->pc = 0x172A5Cu;
            goto label_172a5c;
        }
    }
    ctx->pc = 0x172A04u;
    // 0x172a04: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x172a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x172a08: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x172a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172a0c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x172a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172a10: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x172A10u;
    {
        const bool branch_taken_0x172a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A10u;
        // 0x172a14: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a10) {
            ctx->pc = 0x172A5Cu;
            goto label_172a5c;
        }
    }
    ctx->pc = 0x172A18u;
    // 0x172a18: 0xc044240  jal         func_110900
    ctx->pc = 0x172A18u;
    SET_GPR_U32(ctx, 31, 0x172A20u);
    ctx->pc = 0x172A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A18u;
    // 0x172a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110900u, 0x172A18u, 0x172A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A20u;
label_172a20:
    // 0x172a20: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x172a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x172a24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a28: 0xc05caaa  jal         func_172AA8
    ctx->pc = 0x172A28u;
    SET_GPR_U32(ctx, 31, 0x172A30u);
    ctx->pc = 0x172A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A28u;
    // 0x172a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172AA8u, 0x172A28u, 0x172A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A30u;
label_172a30:
    // 0x172a30: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x172A30u;
    {
        const bool branch_taken_0x172a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A30u;
        // 0x172a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a30) {
            ctx->pc = 0x172A80u;
            goto label_172a80;
        }
    }
    ctx->pc = 0x172A38u;
    // 0x172a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a3c: 0xc044234  jal         func_1108D0
    ctx->pc = 0x172A3Cu;
    SET_GPR_U32(ctx, 31, 0x172A44u);
    ctx->pc = 0x172A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A3Cu;
    // 0x172a40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x172A3Cu, 0x172A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A44u;
label_172a44:
    // 0x172a44: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x172a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x172a48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a4c: 0xc05caaa  jal         func_172AA8
    ctx->pc = 0x172A4Cu;
    SET_GPR_U32(ctx, 31, 0x172A54u);
    ctx->pc = 0x172A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A4Cu;
    // 0x172a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172AA8u, 0x172A4Cu, 0x172A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A54u;
label_172a54:
    // 0x172a54: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x172A54u;
    {
        const bool branch_taken_0x172a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A54u;
        // 0x172a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a54) {
            ctx->pc = 0x172A80u;
            goto label_172a80;
        }
    }
    ctx->pc = 0x172A5Cu;
label_172a5c:
    // 0x172a5c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x172a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x172a60: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x172a60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x172a64: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x172a64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x172a68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x172A68u;
    {
        const bool branch_taken_0x172a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A68u;
        // 0x172a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a68) {
            ctx->pc = 0x172A80u;
            goto label_172a80;
        }
    }
    ctx->pc = 0x172A70u;
    // 0x172a70: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x172a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x172a74: 0x5662ffde  bnel        $s3, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x172A74u;
    {
        const bool branch_taken_0x172a74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x172a74) {
            ctx->pc = 0x172A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172A74u;
            // 0x172a78: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1729F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1729f0;
        }
    }
    ctx->pc = 0x172A7Cu;
label_172a7c:
    // 0x172a7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172a80:
    // 0x172a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172a88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x172a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172a8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x172a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172a90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x172a90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172a94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x172a94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x172a98: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x172a98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172a9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x172a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x172aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x172AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AA0u;
        // 0x172aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172AA8u;
}
