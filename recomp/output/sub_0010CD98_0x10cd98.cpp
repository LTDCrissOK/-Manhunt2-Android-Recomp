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

// Function: sub_0010CD98
// Address: 0x10cd98 - 0x10ce28
void sub_0010CD98_0x10cd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CD98_0x10cd98");
#endif

    switch (ctx->pc) {
        case 0x10cdd0u: goto label_10cdd0;
        case 0x10cde0u: goto label_10cde0;
        default: break;
    }

    ctx->pc = 0x10cd98u;

    // 0x10cd98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cd9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cda0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cda4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10cda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cda8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10cdac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10cdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10cdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cdb8: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10cdb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10cdbc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10CDBCu;
    {
        const bool branch_taken_0x10cdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDBCu;
        // 0x10cdc0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdbc) {
            ctx->pc = 0x10CE04u;
            goto label_10ce04;
        }
    }
    ctx->pc = 0x10CDC4u;
    // 0x10cdc4: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x10cdc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10cdc8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10cdcc: 0x0  nop
    ctx->pc = 0x10cdccu;
    // NOP
label_10cdd0:
    // 0x10cdd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10cdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdd4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10cdd8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x10CDD8u;
    SET_GPR_U32(ctx, 31, 0x10CDE0u);
    ctx->pc = 0x10CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDD8u;
    // 0x10cddc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x10CDD8u, 0x10CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDE0u;
label_10cde0:
    // 0x10cde0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CDE0u;
    {
        const bool branch_taken_0x10cde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDE0u;
        // 0x10cde4: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cde0) {
            ctx->pc = 0x10CDF0u;
            goto label_10cdf0;
        }
    }
    ctx->pc = 0x10CDE8u;
    // 0x10cde8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10CDE8u;
    {
        const bool branch_taken_0x10cde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDE8u;
        // 0x10cdec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cde8) {
            ctx->pc = 0x10CE08u;
            goto label_10ce08;
        }
    }
    ctx->pc = 0x10CDF0u;
label_10cdf0:
    // 0x10cdf0: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10cdf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10cdf4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x10cdf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10cdf8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10cdf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10cdfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10CDFCu;
    {
        const bool branch_taken_0x10cdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDFCu;
        // 0x10ce00: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdfc) {
            ctx->pc = 0x10CDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cdd0;
        }
    }
    ctx->pc = 0x10CE04u;
label_10ce04:
    // 0x10ce04: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10ce08:
    // 0x10ce08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ce08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ce0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ce0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ce10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ce10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ce14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10ce14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ce18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ce18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ce1c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE1Cu;
        // 0x10ce20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CE24u;
    // 0x10ce24: 0x0  nop
    ctx->pc = 0x10ce24u;
    // NOP
    ctx->pc = 0x10ce28u;
}
