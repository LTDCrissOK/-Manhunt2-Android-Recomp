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

// Function: sub_0011FE50
// Address: 0x11fe50 - 0x11ff60
void sub_0011FE50_0x11fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FE50_0x11fe50");
#endif

    switch (ctx->pc) {
        case 0x11feccu: goto label_11fecc;
        case 0x11fee8u: goto label_11fee8;
        case 0x11ff04u: goto label_11ff04;
        case 0x11ff18u: goto label_11ff18;
        case 0x11ff30u: goto label_11ff30;
        default: break;
    }

    ctx->pc = 0x11fe50u;

    // 0x11fe50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11fe54: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x11fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x11fe58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11fe5c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x11fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x11fe60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11fe64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11fe64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fe6c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x11fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x11fe70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11fe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11fe74: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x11fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11fe78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11fe7c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x11fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11fe80: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x11fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x11fe84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11fe84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe88: 0x8cb2020c  lw          $s2, 0x20C($a1)
    ctx->pc = 0x11fe88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x11fe8c: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x11FE8Cu;
    {
        const bool branch_taken_0x11fe8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE8Cu;
        // 0x11fe90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe8c) {
            ctx->pc = 0x11FF44u;
            goto label_11ff44;
        }
    }
    ctx->pc = 0x11FE94u;
    // 0x11fe94: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x11fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11fe98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fe9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11fea0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x11fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x11fea4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FEA4u;
    {
        const bool branch_taken_0x11fea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fea4) {
            ctx->pc = 0x11FEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FEA4u;
            // 0x11fea8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FEB4u;
            goto label_11feb4;
        }
    }
    ctx->pc = 0x11FEACu;
    // 0x11feac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11FEACu;
    {
        const bool branch_taken_0x11feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEACu;
        // 0x11feb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11feac) {
            ctx->pc = 0x11FEBCu;
            goto label_11febc;
        }
    }
    ctx->pc = 0x11FEB4u;
label_11feb4:
    // 0x11feb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11feb8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x11feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_11febc:
    // 0x11febc: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x11FEBCu;
    {
        const bool branch_taken_0x11febc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEBCu;
        // 0x11fec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11febc) {
            ctx->pc = 0x11FF44u;
            goto label_11ff44;
        }
    }
    ctx->pc = 0x11FEC4u;
    // 0x11fec4: 0xc0480b6  jal         func_1202D8
    ctx->pc = 0x11FEC4u;
    SET_GPR_U32(ctx, 31, 0x11FECCu);
    ctx->pc = 0x11FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEC4u;
    // 0x11fec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202D8u, 0x11FEC4u, 0x11FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FECCu;
label_11fecc:
    // 0x11fecc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FECCu;
    {
        const bool branch_taken_0x11fecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FECCu;
        // 0x11fed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fecc) {
            ctx->pc = 0x11FEDCu;
            goto label_11fedc;
        }
    }
    ctx->pc = 0x11FED4u;
    // 0x11fed4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x11FED4u;
    {
        const bool branch_taken_0x11fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FED4u;
        // 0x11fed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fed4) {
            ctx->pc = 0x11FF44u;
            goto label_11ff44;
        }
    }
    ctx->pc = 0x11FEDCu;
label_11fedc:
    // 0x11fedc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11fedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fee0: 0xc048254  jal         func_120950
    ctx->pc = 0x11FEE0u;
    SET_GPR_U32(ctx, 31, 0x11FEE8u);
    ctx->pc = 0x11FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEE0u;
    // 0x11fee4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120950u, 0x11FEE0u, 0x11FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FEE8u;
label_11fee8:
    // 0x11fee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11fee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11feec: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FEECu;
    {
        const bool branch_taken_0x11feec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEECu;
        // 0x11fef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11feec) {
            ctx->pc = 0x11FEFCu;
            goto label_11fefc;
        }
    }
    ctx->pc = 0x11FEF4u;
    // 0x11fef4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11FEF4u;
    {
        const bool branch_taken_0x11fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEF4u;
        // 0x11fef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fef4) {
            ctx->pc = 0x11FF44u;
            goto label_11ff44;
        }
    }
    ctx->pc = 0x11FEFCu;
label_11fefc:
    // 0x11fefc: 0xc04834a  jal         func_120D28
    ctx->pc = 0x11FEFCu;
    SET_GPR_U32(ctx, 31, 0x11FF04u);
    ctx->pc = 0x11FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEFCu;
    // 0x11ff00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120D28u, 0x11FEFCu, 0x11FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF04u;
label_11ff04:
    // 0x11ff04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FF04u;
    {
        const bool branch_taken_0x11ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF04u;
        // 0x11ff08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff04) {
            ctx->pc = 0x11FF20u;
            goto label_11ff20;
        }
    }
    ctx->pc = 0x11FF0Cu;
    // 0x11ff0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ff0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff10: 0xc0482f2  jal         func_120BC8
    ctx->pc = 0x11FF10u;
    SET_GPR_U32(ctx, 31, 0x11FF18u);
    ctx->pc = 0x11FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF10u;
    // 0x11ff14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120BC8u, 0x11FF10u, 0x11FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF18u;
label_11ff18:
    // 0x11ff18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FF18u;
    {
        const bool branch_taken_0x11ff18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF18u;
        // 0x11ff1c: 0x24030027  addiu       $v1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff18) {
            ctx->pc = 0x11FF3Cu;
            goto label_11ff3c;
        }
    }
    ctx->pc = 0x11FF20u;
label_11ff20:
    // 0x11ff20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ff24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff28: 0xc048350  jal         func_120D40
    ctx->pc = 0x11FF28u;
    SET_GPR_U32(ctx, 31, 0x11FF30u);
    ctx->pc = 0x11FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF28u;
    // 0x11ff2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120D40u, 0x11FF28u, 0x11FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF30u;
label_11ff30:
    // 0x11ff30: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11FF30u;
    {
        const bool branch_taken_0x11ff30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF30u;
        // 0x11ff34: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff30) {
            ctx->pc = 0x11FF3Cu;
            goto label_11ff3c;
        }
    }
    ctx->pc = 0x11FF38u;
    // 0x11ff38: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x11ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_11ff3c:
    // 0x11ff3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ff40: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x11ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_11ff44:
    // 0x11ff44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ff44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ff48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11ff48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ff4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11ff4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ff50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11ff50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11ff54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ff54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ff58: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF58u;
        // 0x11ff5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF60u;
}
