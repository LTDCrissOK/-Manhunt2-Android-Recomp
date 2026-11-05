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

// Function: sub_0015BB90
// Address: 0x15bb90 - 0x15bc50
void sub_0015BB90_0x15bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BB90_0x15bb90");
#endif

    switch (ctx->pc) {
        case 0x15bbd8u: goto label_15bbd8;
        case 0x15bc0cu: goto label_15bc0c;
        default: break;
    }

    ctx->pc = 0x15bb90u;

    // 0x15bb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bb94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15bb98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15bb9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15bb9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15bba4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15bba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15bbac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15bbb0: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x15BBB0u;
    {
        const bool branch_taken_0x15bbb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBB0u;
        // 0x15bbb4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbb0) {
            ctx->pc = 0x15BC2Cu;
            goto label_15bc2c;
        }
    }
    ctx->pc = 0x15BBB8u;
    // 0x15bbb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15bbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbbc: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x15bbbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x15bbc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15BBC0u;
    {
        const bool branch_taken_0x15bbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBC0u;
        // 0x15bbc4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbc0) {
            ctx->pc = 0x15BC2Cu;
            goto label_15bc2c;
        }
    }
    ctx->pc = 0x15BBC8u;
    // 0x15bbc8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15bbcc: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x15bbccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x15bbd0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x15bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15bbd4: 0x0  nop
    ctx->pc = 0x15bbd4u;
    // NOP
label_15bbd8:
    // 0x15bbd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15bbdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bbe0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bbe4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BBE4u;
    {
        const bool branch_taken_0x15bbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBE4u;
        // 0x15bbe8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbe4) {
            ctx->pc = 0x15BC0Cu;
            goto label_15bc0c;
        }
    }
    ctx->pc = 0x15BBECu;
    // 0x15bbec: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x15bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15bbf0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15bbf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bbf8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BBF8u;
    {
        const bool branch_taken_0x15bbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBF8u;
        // 0x15bbfc: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbf8) {
            ctx->pc = 0x15BC0Cu;
            goto label_15bc0c;
        }
    }
    ctx->pc = 0x15BC00u;
    // 0x15bc00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15bc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc04: 0xc04445e  jal         func_111178
    ctx->pc = 0x15BC04u;
    SET_GPR_U32(ctx, 31, 0x15BC0Cu);
    ctx->pc = 0x15BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC04u;
    // 0x15bc08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x15BC04u, 0x15BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC0Cu;
label_15bc0c:
    // 0x15bc0c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15bc10: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15bc10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15bc14: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x15bc14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15bc18: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BC18u;
    {
        const bool branch_taken_0x15bc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc18) {
            ctx->pc = 0x15BC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC18u;
            // 0x15bc1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BC30u;
            goto label_15bc30;
        }
    }
    ctx->pc = 0x15BC20u;
    // 0x15bc20: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x15bc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x15bc24: 0x5622ffec  bnel        $s1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15BC24u;
    {
        const bool branch_taken_0x15bc24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15bc24) {
            ctx->pc = 0x15BC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC24u;
            // 0x15bc28: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bbd8;
        }
    }
    ctx->pc = 0x15BC2Cu;
label_15bc2c:
    // 0x15bc2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15bc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15bc30:
    // 0x15bc30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15bc30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15bc34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15bc34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15bc38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15bc3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15bc3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bc40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15bc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15bc44: 0x3e00008  jr          $ra
    ctx->pc = 0x15BC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC44u;
        // 0x15bc48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BC4Cu;
    // 0x15bc4c: 0x0  nop
    ctx->pc = 0x15bc4cu;
    // NOP
    ctx->pc = 0x15bc50u;
}
