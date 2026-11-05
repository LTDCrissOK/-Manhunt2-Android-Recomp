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

// Function: sub_00139DF8
// Address: 0x139df8 - 0x139ed0
void sub_00139DF8_0x139df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139DF8_0x139df8");
#endif

    switch (ctx->pc) {
        case 0x139e3cu: goto label_139e3c;
        case 0x139e8cu: goto label_139e8c;
        case 0x139e94u: goto label_139e94;
        case 0x139ea8u: goto label_139ea8;
        case 0x139eb8u: goto label_139eb8;
        default: break;
    }

    ctx->pc = 0x139df8u;

    // 0x139df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139dfc: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x139dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x139e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139e04: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x139e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x139e08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139e0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x139e10: 0x9085046c  lbu         $a1, 0x46C($a0)
    ctx->pc = 0x139e10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x139e14: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x139e14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x139e18: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x139e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x139e1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x139e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x139e20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x139e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139e24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139e28: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x139e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x139e2c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x139e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e30: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x139e30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x139e34: 0xc04e866  jal         func_13A198
    ctx->pc = 0x139E34u;
    SET_GPR_U32(ctx, 31, 0x139E3Cu);
    ctx->pc = 0x139E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E34u;
    // 0x139e38: 0x8cd1020c  lw          $s1, 0x20C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x139E34u, 0x139E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E3Cu;
label_139e3c:
    // 0x139e3c: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x139e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x139e40: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x139e40u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x139e44: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x139E44u;
    {
        const bool branch_taken_0x139e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e44) {
            ctx->pc = 0x139E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139E44u;
            // 0x139e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139EB0u;
            goto label_139eb0;
        }
    }
    ctx->pc = 0x139E4Cu;
    // 0x139e4c: 0x8e031060  lw          $v1, 0x1060($s0)
    ctx->pc = 0x139e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x139e50: 0x38620012  xori        $v0, $v1, 0x12
    ctx->pc = 0x139e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
    // 0x139e54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x139E54u;
    {
        const bool branch_taken_0x139e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E54u;
        // 0x139e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e54) {
            ctx->pc = 0x139E78u;
            goto label_139e78;
        }
    }
    ctx->pc = 0x139E5Cu;
    // 0x139e5c: 0x38620013  xori        $v0, $v1, 0x13
    ctx->pc = 0x139e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)19);
    // 0x139e60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139E60u;
    {
        const bool branch_taken_0x139e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E60u;
        // 0x139e64: 0x38620014  xori        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e60) {
            ctx->pc = 0x139E78u;
            goto label_139e78;
        }
    }
    ctx->pc = 0x139E68u;
    // 0x139e68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139E68u;
    {
        const bool branch_taken_0x139e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E68u;
        // 0x139e6c: 0x38620015  xori        $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e68) {
            ctx->pc = 0x139E78u;
            goto label_139e78;
        }
    }
    ctx->pc = 0x139E70u;
    // 0x139e70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x139E70u;
    {
        const bool branch_taken_0x139e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139e70) {
            ctx->pc = 0x139E7Cu;
            goto label_139e7c;
        }
    }
    ctx->pc = 0x139E78u;
label_139e78:
    // 0x139e78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139e7c:
    // 0x139e7c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139E7Cu;
    {
        const bool branch_taken_0x139e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e7c) {
            ctx->pc = 0x139E98u;
            goto label_139e98;
        }
    }
    ctx->pc = 0x139E84u;
    // 0x139e84: 0xc061fbe  jal         func_187EF8
    ctx->pc = 0x139E84u;
    SET_GPR_U32(ctx, 31, 0x139E8Cu);
    ctx->pc = 0x139E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E84u;
    // 0x139e88: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EF8u, 0x139E84u, 0x139E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E8Cu;
label_139e8c:
    // 0x139e8c: 0xc0679e4  jal         func_19E790
    ctx->pc = 0x139E8Cu;
    SET_GPR_U32(ctx, 31, 0x139E94u);
    ctx->pc = 0x139E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E8Cu;
    // 0x139e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E790u, 0x139E8Cu, 0x139E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E94u;
label_139e94:
    // 0x139e94: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x139e94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_139e98:
    // 0x139e98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139E98u;
    {
        const bool branch_taken_0x139e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E98u;
        // 0x139e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e98) {
            ctx->pc = 0x139EB0u;
            goto label_139eb0;
        }
    }
    ctx->pc = 0x139EA0u;
    // 0x139ea0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x139EA0u;
    SET_GPR_U32(ctx, 31, 0x139EA8u);
    ctx->pc = 0x139EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139EA0u;
    // 0x139ea4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x139EA0u, 0x139EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EA8u;
label_139ea8:
    // 0x139ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139EA8u;
    {
        const bool branch_taken_0x139ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139EA8u;
        // 0x139eac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ea8) {
            ctx->pc = 0x139EBCu;
            goto label_139ebc;
        }
    }
    ctx->pc = 0x139EB0u;
label_139eb0:
    // 0x139eb0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x139EB0u;
    SET_GPR_U32(ctx, 31, 0x139EB8u);
    ctx->pc = 0x139EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139EB0u;
    // 0x139eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x139EB0u, 0x139EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EB8u;
label_139eb8:
    // 0x139eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139ebc:
    // 0x139ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x139EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139EC4u;
        // 0x139ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139ECCu;
    // 0x139ecc: 0x0  nop
    ctx->pc = 0x139eccu;
    // NOP
    ctx->pc = 0x139ed0u;
}
