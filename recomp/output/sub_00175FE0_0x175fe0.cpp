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

// Function: sub_00175FE0
// Address: 0x175fe0 - 0x176068
void sub_00175FE0_0x175fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175FE0_0x175fe0");
#endif

    switch (ctx->pc) {
        case 0x175fe0u: goto label_175fe0;
        case 0x175fe4u: goto label_175fe4;
        case 0x175fe8u: goto label_175fe8;
        case 0x175fecu: goto label_175fec;
        case 0x175ff0u: goto label_175ff0;
        case 0x175ff4u: goto label_175ff4;
        case 0x175ff8u: goto label_175ff8;
        case 0x175ffcu: goto label_175ffc;
        case 0x176000u: goto label_176000;
        case 0x176004u: goto label_176004;
        case 0x176008u: goto label_176008;
        case 0x17600cu: goto label_17600c;
        case 0x176010u: goto label_176010;
        case 0x176014u: goto label_176014;
        case 0x176018u: goto label_176018;
        case 0x17601cu: goto label_17601c;
        case 0x176020u: goto label_176020;
        case 0x176024u: goto label_176024;
        case 0x176028u: goto label_176028;
        case 0x17602cu: goto label_17602c;
        case 0x176030u: goto label_176030;
        case 0x176034u: goto label_176034;
        case 0x176038u: goto label_176038;
        case 0x17603cu: goto label_17603c;
        case 0x176040u: goto label_176040;
        case 0x176044u: goto label_176044;
        case 0x176048u: goto label_176048;
        case 0x17604cu: goto label_17604c;
        case 0x176050u: goto label_176050;
        case 0x176054u: goto label_176054;
        case 0x176058u: goto label_176058;
        case 0x17605cu: goto label_17605c;
        case 0x176060u: goto label_176060;
        case 0x176064u: goto label_176064;
        default: break;
    }

    ctx->pc = 0x175fe0u;

label_175fe0:
    // 0x175fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_175fe4:
    // 0x175fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_175fe8:
    // 0x175fe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_175fec:
    // 0x175fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175ff0:
    // 0x175ff0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_175ff4:
    // 0x175ff4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x175ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_175ff8:
    // 0x175ff8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x175ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_175ffc:
    // 0x175ffc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x175ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_176000:
    // 0x176000: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x176000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_176004:
    // 0x176004: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x176004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_176008:
    // 0x176008: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x176008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_17600c:
    // 0x17600c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x17600cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_176010:
    // 0x176010: 0xc04f750  jal         func_13DD40
label_176014:
    if (ctx->pc == 0x176014u) {
        ctx->pc = 0x176014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176010u;
        // 0x176014: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176018u;
        goto label_176018;
    }
    ctx->pc = 0x176010u;
    SET_GPR_U32(ctx, 31, 0x176018u);
    ctx->pc = 0x176014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176010u;
    // 0x176014: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x176010u, 0x176018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176018u;
label_176018:
    // 0x176018: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x176018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17601c:
    // 0x17601c: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_176020:
    if (ctx->pc == 0x176020u) {
        ctx->pc = 0x176020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17601Cu;
        // 0x176020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176024u;
        goto label_176024;
    }
    ctx->pc = 0x17601Cu;
    {
        const bool branch_taken_0x17601c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17601c) {
            ctx->pc = 0x176020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17601Cu;
            // 0x176020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17604Cu;
            goto label_17604c;
        }
    }
    ctx->pc = 0x176024u;
label_176024:
    // 0x176024: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176028:
    // 0x176028: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_17602c:
    if (ctx->pc == 0x17602Cu) {
        ctx->pc = 0x17602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176028u;
        // 0x17602c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176030u;
        goto label_176030;
    }
    ctx->pc = 0x176028u;
    {
        const bool branch_taken_0x176028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176028u;
        // 0x17602c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176028) {
            ctx->pc = 0x176048u;
            goto label_176048;
        }
    }
    ctx->pc = 0x176030u;
label_176030:
    // 0x176030: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176034:
    // 0x176034: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x176034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176038:
    // 0x176038: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x176038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17603c:
    // 0x17603c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x17603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_176040:
    // 0x176040: 0x40f809  jalr        $v0
label_176044:
    if (ctx->pc == 0x176044u) {
        ctx->pc = 0x176044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176040u;
        // 0x176044: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176048u;
        goto label_176048;
    }
    ctx->pc = 0x176040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176048u);
        ctx->pc = 0x176044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176040u;
        // 0x176044: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176040u, 0x176048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176048u;
label_176048:
    // 0x176048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17604c:
    // 0x17604c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17604cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176050:
    // 0x176050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176054:
    // 0x176054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x176054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_176058:
    // 0x176058: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x176058u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17605c:
    // 0x17605c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17605cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_176060:
    // 0x176060: 0x3e00008  jr          $ra
label_176064:
    if (ctx->pc == 0x176064u) {
        ctx->pc = 0x176064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176060u;
        // 0x176064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176068u;
        goto label_fallthrough_0x176060;
    }
    ctx->pc = 0x176060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176060u;
        // 0x176064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176060:
    ctx->pc = 0x176068u;
}
