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

// Function: sub_00237D08
// Address: 0x237d08 - 0x237fd0
void sub_00237D08_0x237d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237D08_0x237d08");
#endif

    switch (ctx->pc) {
        case 0x237d08u: goto label_237d08;
        case 0x237d0cu: goto label_237d0c;
        case 0x237d10u: goto label_237d10;
        case 0x237d14u: goto label_237d14;
        case 0x237d18u: goto label_237d18;
        case 0x237d1cu: goto label_237d1c;
        case 0x237d20u: goto label_237d20;
        case 0x237d24u: goto label_237d24;
        case 0x237d28u: goto label_237d28;
        case 0x237d2cu: goto label_237d2c;
        case 0x237d30u: goto label_237d30;
        case 0x237d34u: goto label_237d34;
        case 0x237d38u: goto label_237d38;
        case 0x237d3cu: goto label_237d3c;
        case 0x237d40u: goto label_237d40;
        case 0x237d44u: goto label_237d44;
        case 0x237d48u: goto label_237d48;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d50u: goto label_237d50;
        case 0x237d54u: goto label_237d54;
        case 0x237d58u: goto label_237d58;
        case 0x237d5cu: goto label_237d5c;
        case 0x237d60u: goto label_237d60;
        case 0x237d64u: goto label_237d64;
        case 0x237d68u: goto label_237d68;
        case 0x237d6cu: goto label_237d6c;
        case 0x237d70u: goto label_237d70;
        case 0x237d74u: goto label_237d74;
        case 0x237d78u: goto label_237d78;
        case 0x237d7cu: goto label_237d7c;
        case 0x237d80u: goto label_237d80;
        case 0x237d84u: goto label_237d84;
        case 0x237d88u: goto label_237d88;
        case 0x237d8cu: goto label_237d8c;
        case 0x237d90u: goto label_237d90;
        case 0x237d94u: goto label_237d94;
        case 0x237d98u: goto label_237d98;
        case 0x237d9cu: goto label_237d9c;
        case 0x237da0u: goto label_237da0;
        case 0x237da4u: goto label_237da4;
        case 0x237da8u: goto label_237da8;
        case 0x237dacu: goto label_237dac;
        case 0x237db0u: goto label_237db0;
        case 0x237db4u: goto label_237db4;
        case 0x237db8u: goto label_237db8;
        case 0x237dbcu: goto label_237dbc;
        case 0x237dc0u: goto label_237dc0;
        case 0x237dc4u: goto label_237dc4;
        case 0x237dc8u: goto label_237dc8;
        case 0x237dccu: goto label_237dcc;
        case 0x237dd0u: goto label_237dd0;
        case 0x237dd4u: goto label_237dd4;
        case 0x237dd8u: goto label_237dd8;
        case 0x237ddcu: goto label_237ddc;
        case 0x237de0u: goto label_237de0;
        case 0x237de4u: goto label_237de4;
        case 0x237de8u: goto label_237de8;
        case 0x237decu: goto label_237dec;
        case 0x237df0u: goto label_237df0;
        case 0x237df4u: goto label_237df4;
        case 0x237df8u: goto label_237df8;
        case 0x237dfcu: goto label_237dfc;
        case 0x237e00u: goto label_237e00;
        case 0x237e04u: goto label_237e04;
        case 0x237e08u: goto label_237e08;
        case 0x237e0cu: goto label_237e0c;
        case 0x237e10u: goto label_237e10;
        case 0x237e14u: goto label_237e14;
        case 0x237e18u: goto label_237e18;
        case 0x237e1cu: goto label_237e1c;
        case 0x237e20u: goto label_237e20;
        case 0x237e24u: goto label_237e24;
        case 0x237e28u: goto label_237e28;
        case 0x237e2cu: goto label_237e2c;
        case 0x237e30u: goto label_237e30;
        case 0x237e34u: goto label_237e34;
        case 0x237e38u: goto label_237e38;
        case 0x237e3cu: goto label_237e3c;
        case 0x237e40u: goto label_237e40;
        case 0x237e44u: goto label_237e44;
        case 0x237e48u: goto label_237e48;
        case 0x237e4cu: goto label_237e4c;
        case 0x237e50u: goto label_237e50;
        case 0x237e54u: goto label_237e54;
        case 0x237e58u: goto label_237e58;
        case 0x237e5cu: goto label_237e5c;
        case 0x237e60u: goto label_237e60;
        case 0x237e64u: goto label_237e64;
        case 0x237e68u: goto label_237e68;
        case 0x237e6cu: goto label_237e6c;
        case 0x237e70u: goto label_237e70;
        case 0x237e74u: goto label_237e74;
        case 0x237e78u: goto label_237e78;
        case 0x237e7cu: goto label_237e7c;
        case 0x237e80u: goto label_237e80;
        case 0x237e84u: goto label_237e84;
        case 0x237e88u: goto label_237e88;
        case 0x237e8cu: goto label_237e8c;
        case 0x237e90u: goto label_237e90;
        case 0x237e94u: goto label_237e94;
        case 0x237e98u: goto label_237e98;
        case 0x237e9cu: goto label_237e9c;
        case 0x237ea0u: goto label_237ea0;
        case 0x237ea4u: goto label_237ea4;
        case 0x237ea8u: goto label_237ea8;
        case 0x237eacu: goto label_237eac;
        case 0x237eb0u: goto label_237eb0;
        case 0x237eb4u: goto label_237eb4;
        case 0x237eb8u: goto label_237eb8;
        case 0x237ebcu: goto label_237ebc;
        case 0x237ec0u: goto label_237ec0;
        case 0x237ec4u: goto label_237ec4;
        case 0x237ec8u: goto label_237ec8;
        case 0x237eccu: goto label_237ecc;
        case 0x237ed0u: goto label_237ed0;
        case 0x237ed4u: goto label_237ed4;
        case 0x237ed8u: goto label_237ed8;
        case 0x237edcu: goto label_237edc;
        case 0x237ee0u: goto label_237ee0;
        case 0x237ee4u: goto label_237ee4;
        case 0x237ee8u: goto label_237ee8;
        case 0x237eecu: goto label_237eec;
        case 0x237ef0u: goto label_237ef0;
        case 0x237ef4u: goto label_237ef4;
        case 0x237ef8u: goto label_237ef8;
        case 0x237efcu: goto label_237efc;
        case 0x237f00u: goto label_237f00;
        case 0x237f04u: goto label_237f04;
        case 0x237f08u: goto label_237f08;
        case 0x237f0cu: goto label_237f0c;
        case 0x237f10u: goto label_237f10;
        case 0x237f14u: goto label_237f14;
        case 0x237f18u: goto label_237f18;
        case 0x237f1cu: goto label_237f1c;
        case 0x237f20u: goto label_237f20;
        case 0x237f24u: goto label_237f24;
        case 0x237f28u: goto label_237f28;
        case 0x237f2cu: goto label_237f2c;
        case 0x237f30u: goto label_237f30;
        case 0x237f34u: goto label_237f34;
        case 0x237f38u: goto label_237f38;
        case 0x237f3cu: goto label_237f3c;
        case 0x237f40u: goto label_237f40;
        case 0x237f44u: goto label_237f44;
        case 0x237f48u: goto label_237f48;
        case 0x237f4cu: goto label_237f4c;
        case 0x237f50u: goto label_237f50;
        case 0x237f54u: goto label_237f54;
        case 0x237f58u: goto label_237f58;
        case 0x237f5cu: goto label_237f5c;
        case 0x237f60u: goto label_237f60;
        case 0x237f64u: goto label_237f64;
        case 0x237f68u: goto label_237f68;
        case 0x237f6cu: goto label_237f6c;
        case 0x237f70u: goto label_237f70;
        case 0x237f74u: goto label_237f74;
        case 0x237f78u: goto label_237f78;
        case 0x237f7cu: goto label_237f7c;
        case 0x237f80u: goto label_237f80;
        case 0x237f84u: goto label_237f84;
        case 0x237f88u: goto label_237f88;
        case 0x237f8cu: goto label_237f8c;
        case 0x237f90u: goto label_237f90;
        case 0x237f94u: goto label_237f94;
        case 0x237f98u: goto label_237f98;
        case 0x237f9cu: goto label_237f9c;
        case 0x237fa0u: goto label_237fa0;
        case 0x237fa4u: goto label_237fa4;
        case 0x237fa8u: goto label_237fa8;
        case 0x237facu: goto label_237fac;
        case 0x237fb0u: goto label_237fb0;
        case 0x237fb4u: goto label_237fb4;
        case 0x237fb8u: goto label_237fb8;
        case 0x237fbcu: goto label_237fbc;
        case 0x237fc0u: goto label_237fc0;
        case 0x237fc4u: goto label_237fc4;
        case 0x237fc8u: goto label_237fc8;
        case 0x237fccu: goto label_237fcc;
        default: break;
    }

    ctx->pc = 0x237d08u;

label_237d08:
    // 0x237d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_237d0c:
    // 0x237d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x237d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_237d10:
    // 0x237d10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x237d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_237d14:
    // 0x237d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x237d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237d18:
    // 0x237d18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_237d1c:
    // 0x237d1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x237d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_237d20:
    // 0x237d20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x237d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_237d24:
    // 0x237d24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x237d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_237d28:
    // 0x237d28: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_237d2c:
    if (ctx->pc == 0x237D2Cu) {
        ctx->pc = 0x237D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D28u;
        // 0x237d2c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D30u;
        goto label_237d30;
    }
    ctx->pc = 0x237D28u;
    {
        const bool branch_taken_0x237d28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x237D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D28u;
        // 0x237d2c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d28) {
            ctx->pc = 0x237D44u;
            goto label_237d44;
        }
    }
    ctx->pc = 0x237D30u;
label_237d30:
    // 0x237d30: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x237d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_237d34:
    // 0x237d34: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x237d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_237d38:
    // 0x237d38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237d3c:
    // 0x237d3c: 0x1043009d  beq         $v0, $v1, . + 4 + (0x9D << 2)
label_237d40:
    if (ctx->pc == 0x237D40u) {
        ctx->pc = 0x237D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D3Cu;
        // 0x237d40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D44u;
        goto label_237d44;
    }
    ctx->pc = 0x237D3Cu;
    {
        const bool branch_taken_0x237d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x237D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D3Cu;
        // 0x237d40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d3c) {
            ctx->pc = 0x237FB4u;
            goto label_237fb4;
        }
    }
    ctx->pc = 0x237D44u;
label_237d44:
    // 0x237d44: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x237d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_237d48:
    // 0x237d48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_237d4c:
    if (ctx->pc == 0x237D4Cu) {
        ctx->pc = 0x237D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D48u;
        // 0x237d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D50u;
        goto label_237d50;
    }
    ctx->pc = 0x237D48u;
    {
        const bool branch_taken_0x237d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237d48) {
            ctx->pc = 0x237D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D48u;
            // 0x237d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D5Cu;
            goto label_237d5c;
        }
    }
    ctx->pc = 0x237D50u;
label_237d50:
    // 0x237d50: 0xc08def2  jal         func_237BC8
label_237d54:
    if (ctx->pc == 0x237D54u) {
        ctx->pc = 0x237D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D50u;
        // 0x237d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D58u;
        goto label_237d58;
    }
    ctx->pc = 0x237D50u;
    SET_GPR_U32(ctx, 31, 0x237D58u);
    ctx->pc = 0x237D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D50u;
    // 0x237d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237BC8u, 0x237D50u, 0x237D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D58u;
label_237d58:
    // 0x237d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237d5c:
    // 0x237d5c: 0xc0849e6  jal         func_212798
label_237d60:
    if (ctx->pc == 0x237D60u) {
        ctx->pc = 0x237D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D5Cu;
        // 0x237d60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D64u;
        goto label_237d64;
    }
    ctx->pc = 0x237D5Cu;
    SET_GPR_U32(ctx, 31, 0x237D64u);
    ctx->pc = 0x237D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D5Cu;
    // 0x237d60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212798u, 0x237D5Cu, 0x237D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D64u;
label_237d64:
    // 0x237d64: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x237d64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_237d68:
    // 0x237d68: 0xc0899bc  jal         func_2266F0
label_237d6c:
    if (ctx->pc == 0x237D6Cu) {
        ctx->pc = 0x237D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D68u;
        // 0x237d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D70u;
        goto label_237d70;
    }
    ctx->pc = 0x237D68u;
    SET_GPR_U32(ctx, 31, 0x237D70u);
    ctx->pc = 0x237D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D68u;
    // 0x237d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x237D68u, 0x237D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D70u;
label_237d70:
    // 0x237d70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d74:
    // 0x237d74: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
label_237d78:
    if (ctx->pc == 0x237D78u) {
        ctx->pc = 0x237D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D74u;
        // 0x237d78: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D7Cu;
        goto label_237d7c;
    }
    ctx->pc = 0x237D74u;
    {
        const bool branch_taken_0x237d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D74u;
        // 0x237d78: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d74) {
            ctx->pc = 0x237E90u;
            goto label_237e90;
        }
    }
    ctx->pc = 0x237D7Cu;
label_237d7c:
    // 0x237d7c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x237d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_237d80:
    // 0x237d80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x237d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_237d84:
    // 0x237d84: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x237d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_237d88:
    // 0x237d88: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x237d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_237d8c:
    // 0x237d8c: 0x8c8295a0  lw          $v0, -0x6A60($a0)
    ctx->pc = 0x237d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940064)));
label_237d90:
    // 0x237d90: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x237d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
label_237d94:
    // 0x237d94: 0x8ca3bd5c  lw          $v1, -0x42A4($a1)
    ctx->pc = 0x237d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950236)));
label_237d98:
    // 0x237d98: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_237d9c:
    if (ctx->pc == 0x237D9Cu) {
        ctx->pc = 0x237D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D98u;
        // 0x237d9c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DA0u;
        goto label_237da0;
    }
    ctx->pc = 0x237D98u;
    {
        const bool branch_taken_0x237d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D98u;
        // 0x237d9c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d98) {
            ctx->pc = 0x237E3Cu;
            goto label_237e3c;
        }
    }
    ctx->pc = 0x237DA0u;
label_237da0:
    // 0x237da0: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x237da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_237da4:
    // 0x237da4: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x237da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_237da8:
    // 0x237da8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_237dac:
    if (ctx->pc == 0x237DACu) {
        ctx->pc = 0x237DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DA8u;
        // 0x237dac: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DB0u;
        goto label_237db0;
    }
    ctx->pc = 0x237DA8u;
    {
        const bool branch_taken_0x237da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DA8u;
        // 0x237dac: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237da8) {
            ctx->pc = 0x237DB8u;
            goto label_237db8;
        }
    }
    ctx->pc = 0x237DB0u;
label_237db0:
    // 0x237db0: 0x10000010  b           . + 4 + (0x10 << 2)
label_237db4:
    if (ctx->pc == 0x237DB4u) {
        ctx->pc = 0x237DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DB0u;
        // 0x237db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DB8u;
        goto label_237db8;
    }
    ctx->pc = 0x237DB0u;
    {
        const bool branch_taken_0x237db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DB0u;
        // 0x237db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237db0) {
            ctx->pc = 0x237DF4u;
            goto label_237df4;
        }
    }
    ctx->pc = 0x237DB8u;
label_237db8:
    // 0x237db8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x237db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_237dbc:
    // 0x237dbc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x237dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_237dc0:
    // 0x237dc0: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x237dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
label_237dc4:
    // 0x237dc4: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x237dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_237dc8:
    // 0x237dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_237dcc:
    // 0x237dcc: 0x0  nop
    ctx->pc = 0x237dccu;
    // NOP
label_237dd0:
    // 0x237dd0: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
label_237dd4:
    if (ctx->pc == 0x237DD4u) {
        ctx->pc = 0x237DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DD0u;
        // 0x237dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DD8u;
        goto label_237dd8;
    }
    ctx->pc = 0x237DD0u;
    {
        const bool branch_taken_0x237dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x237dd0) {
            ctx->pc = 0x237DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DD0u;
            // 0x237dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DF4u;
            goto label_237df4;
        }
    }
    ctx->pc = 0x237DD8u;
label_237dd8:
    // 0x237dd8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_237ddc:
    if (ctx->pc == 0x237DDCu) {
        ctx->pc = 0x237DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DD8u;
        // 0x237ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DE0u;
        goto label_237de0;
    }
    ctx->pc = 0x237DD8u;
    {
        const bool branch_taken_0x237dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x237DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DD8u;
        // 0x237ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dd8) {
            ctx->pc = 0x237DF4u;
            goto label_237df4;
        }
    }
    ctx->pc = 0x237DE0u;
label_237de0:
    // 0x237de0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x237de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_237de4:
    // 0x237de4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x237de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_237de8:
    // 0x237de8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_237dec:
    if (ctx->pc == 0x237DECu) {
        ctx->pc = 0x237DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DE8u;
        // 0x237dec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DF0u;
        goto label_237df0;
    }
    ctx->pc = 0x237DE8u;
    {
        const bool branch_taken_0x237de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237de8) {
            ctx->pc = 0x237DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DE8u;
            // 0x237dec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237dd0;
        }
    }
    ctx->pc = 0x237DF0u;
label_237df0:
    // 0x237df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237df4:
    // 0x237df4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_237df8:
    if (ctx->pc == 0x237DF8u) {
        ctx->pc = 0x237DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DF4u;
        // 0x237df8: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DFCu;
        goto label_237dfc;
    }
    ctx->pc = 0x237DF4u;
    {
        const bool branch_taken_0x237df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237df4) {
            ctx->pc = 0x237DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DF4u;
            // 0x237df8: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237E40u;
            goto label_237e40;
        }
    }
    ctx->pc = 0x237DFCu;
label_237dfc:
    // 0x237dfc: 0x8ce2aa88  lw          $v0, -0x5578($a3)
    ctx->pc = 0x237dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
label_237e00:
    // 0x237e00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_237e04:
    if (ctx->pc == 0x237E04u) {
        ctx->pc = 0x237E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E00u;
        // 0x237e04: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E08u;
        goto label_237e08;
    }
    ctx->pc = 0x237E00u;
    {
        const bool branch_taken_0x237e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E00u;
        // 0x237e04: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e00) {
            ctx->pc = 0x237E30u;
            goto label_237e30;
        }
    }
    ctx->pc = 0x237E08u;
label_237e08:
    // 0x237e08: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x237e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_237e0c:
    // 0x237e0c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x237e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_237e10:
    // 0x237e10: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x237e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_237e14:
    // 0x237e14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_237e18:
    if (ctx->pc == 0x237E18u) {
        ctx->pc = 0x237E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E14u;
        // 0x237e18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E1Cu;
        goto label_237e1c;
    }
    ctx->pc = 0x237E14u;
    {
        const bool branch_taken_0x237e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E14u;
        // 0x237e18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e14) {
            ctx->pc = 0x237E28u;
            goto label_237e28;
        }
    }
    ctx->pc = 0x237E1Cu;
label_237e1c:
    // 0x237e1c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x237e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_237e20:
    // 0x237e20: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x237e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_237e24:
    // 0x237e24: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x237e24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_237e28:
    // 0x237e28: 0x10000002  b           . + 4 + (0x2 << 2)
label_237e2c:
    if (ctx->pc == 0x237E2Cu) {
        ctx->pc = 0x237E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E28u;
        // 0x237e2c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E30u;
        goto label_237e30;
    }
    ctx->pc = 0x237E28u;
    {
        const bool branch_taken_0x237e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E28u;
        // 0x237e2c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e28) {
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237E30u;
label_237e30:
    // 0x237e30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237e34:
    // 0x237e34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_237e38:
    if (ctx->pc == 0x237E38u) {
        ctx->pc = 0x237E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E34u;
        // 0x237e38: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E3Cu;
        goto label_237e3c;
    }
    ctx->pc = 0x237E34u;
    {
        const bool branch_taken_0x237e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237e34) {
            ctx->pc = 0x237E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237E34u;
            // 0x237e38: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237E50u;
            goto label_237e50;
        }
    }
    ctx->pc = 0x237E3Cu;
label_237e3c:
    // 0x237e3c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x237e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_237e40:
    // 0x237e40: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x237e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_237e44:
    // 0x237e44: 0x40f809  jalr        $v0
label_237e48:
    if (ctx->pc == 0x237E48u) {
        ctx->pc = 0x237E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E44u;
        // 0x237e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E4Cu;
        goto label_237e4c;
    }
    ctx->pc = 0x237E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237E4Cu);
        ctx->pc = 0x237E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E44u;
        // 0x237e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237E44u, 0x237E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237E4Cu;
label_237e4c:
    // 0x237e4c: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x237e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_237e50:
    // 0x237e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237e54:
    // 0x237e54: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x237e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_237e58:
    // 0x237e58: 0x60f809  jalr        $v1
label_237e5c:
    if (ctx->pc == 0x237E5Cu) {
        ctx->pc = 0x237E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E58u;
        // 0x237e5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E60u;
        goto label_237e60;
    }
    ctx->pc = 0x237E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x237E60u);
        ctx->pc = 0x237E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E58u;
        // 0x237e5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237E58u, 0x237E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237E60u;
label_237e60:
    // 0x237e60: 0xc097f26  jal         func_25FC98
label_237e64:
    if (ctx->pc == 0x237E64u) {
        ctx->pc = 0x237E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E60u;
        // 0x237e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E68u;
        goto label_237e68;
    }
    ctx->pc = 0x237E60u;
    SET_GPR_U32(ctx, 31, 0x237E68u);
    ctx->pc = 0x237E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E60u;
    // 0x237e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x237E60u, 0x237E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E68u;
label_237e68:
    // 0x237e68: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x237e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_237e6c:
    // 0x237e6c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_237e70:
    if (ctx->pc == 0x237E70u) {
        ctx->pc = 0x237E74u;
        goto label_237e74;
    }
    ctx->pc = 0x237E6Cu;
    {
        const bool branch_taken_0x237e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x237e6c) {
            ctx->pc = 0x237E88u;
            goto label_237e88;
        }
    }
    ctx->pc = 0x237E74u;
label_237e74:
    // 0x237e74: 0xc097f26  jal         func_25FC98
label_237e78:
    if (ctx->pc == 0x237E78u) {
        ctx->pc = 0x237E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E74u;
        // 0x237e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E7Cu;
        goto label_237e7c;
    }
    ctx->pc = 0x237E74u;
    SET_GPR_U32(ctx, 31, 0x237E7Cu);
    ctx->pc = 0x237E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E74u;
    // 0x237e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x237E74u, 0x237E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E7Cu;
label_237e7c:
    // 0x237e7c: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x237e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_237e80:
    // 0x237e80: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_237e84:
    if (ctx->pc == 0x237E84u) {
        ctx->pc = 0x237E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E80u;
        // 0x237e84: 0x8e22032c  lw          $v0, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E88u;
        goto label_237e88;
    }
    ctx->pc = 0x237E80u;
    {
        const bool branch_taken_0x237e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237e80) {
            ctx->pc = 0x237E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237E80u;
            // 0x237e84: 0x8e22032c  lw          $v0, 0x32C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237E94u;
            goto label_237e94;
        }
    }
    ctx->pc = 0x237E88u;
label_237e88:
    // 0x237e88: 0xc0992e6  jal         func_264B98
label_237e8c:
    if (ctx->pc == 0x237E8Cu) {
        ctx->pc = 0x237E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E88u;
        // 0x237e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E90u;
        goto label_237e90;
    }
    ctx->pc = 0x237E88u;
    SET_GPR_U32(ctx, 31, 0x237E90u);
    ctx->pc = 0x237E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E88u;
    // 0x237e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264B98u, 0x237E88u, 0x237E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E90u;
label_237e90:
    // 0x237e90: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x237e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_237e94:
    // 0x237e94: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_237e98:
    if (ctx->pc == 0x237E98u) {
        ctx->pc = 0x237E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E94u;
        // 0x237e98: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E9Cu;
        goto label_237e9c;
    }
    ctx->pc = 0x237E94u;
    {
        const bool branch_taken_0x237e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E94u;
        // 0x237e98: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e94) {
            ctx->pc = 0x237FA4u;
            goto label_237fa4;
        }
    }
    ctx->pc = 0x237E9Cu;
label_237e9c:
    // 0x237e9c: 0x8c62bd5c  lw          $v0, -0x42A4($v1)
    ctx->pc = 0x237e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950236)));
label_237ea0:
    // 0x237ea0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_237ea4:
    if (ctx->pc == 0x237EA4u) {
        ctx->pc = 0x237EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EA0u;
        // 0x237ea4: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EA8u;
        goto label_237ea8;
    }
    ctx->pc = 0x237EA0u;
    {
        const bool branch_taken_0x237ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EA0u;
        // 0x237ea4: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ea0) {
            ctx->pc = 0x237F44u;
            goto label_237f44;
        }
    }
    ctx->pc = 0x237EA8u;
label_237ea8:
    // 0x237ea8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x237ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_237eac:
    // 0x237eac: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x237eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_237eb0:
    // 0x237eb0: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x237eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_237eb4:
    // 0x237eb4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_237eb8:
    if (ctx->pc == 0x237EB8u) {
        ctx->pc = 0x237EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EB4u;
        // 0x237eb8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EBCu;
        goto label_237ebc;
    }
    ctx->pc = 0x237EB4u;
    {
        const bool branch_taken_0x237eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EB4u;
        // 0x237eb8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237eb4) {
            ctx->pc = 0x237EC4u;
            goto label_237ec4;
        }
    }
    ctx->pc = 0x237EBCu;
label_237ebc:
    // 0x237ebc: 0x1000000f  b           . + 4 + (0xF << 2)
label_237ec0:
    if (ctx->pc == 0x237EC0u) {
        ctx->pc = 0x237EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EBCu;
        // 0x237ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EC4u;
        goto label_237ec4;
    }
    ctx->pc = 0x237EBCu;
    {
        const bool branch_taken_0x237ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EBCu;
        // 0x237ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ebc) {
            ctx->pc = 0x237EFCu;
            goto label_237efc;
        }
    }
    ctx->pc = 0x237EC4u;
label_237ec4:
    // 0x237ec4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x237ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_237ec8:
    // 0x237ec8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x237ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_237ecc:
    // 0x237ecc: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x237eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
label_237ed0:
    // 0x237ed0: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x237ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_237ed4:
    // 0x237ed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_237ed8:
    // 0x237ed8: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
label_237edc:
    if (ctx->pc == 0x237EDCu) {
        ctx->pc = 0x237EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ED8u;
        // 0x237edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EE0u;
        goto label_237ee0;
    }
    ctx->pc = 0x237ED8u;
    {
        const bool branch_taken_0x237ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x237ed8) {
            ctx->pc = 0x237EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237ED8u;
            // 0x237edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237EFCu;
            goto label_237efc;
        }
    }
    ctx->pc = 0x237EE0u;
label_237ee0:
    // 0x237ee0: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_237ee4:
    if (ctx->pc == 0x237EE4u) {
        ctx->pc = 0x237EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EE0u;
        // 0x237ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EE8u;
        goto label_237ee8;
    }
    ctx->pc = 0x237EE0u;
    {
        const bool branch_taken_0x237ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x237EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EE0u;
        // 0x237ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ee0) {
            ctx->pc = 0x237EFCu;
            goto label_237efc;
        }
    }
    ctx->pc = 0x237EE8u;
label_237ee8:
    // 0x237ee8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x237ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_237eec:
    // 0x237eec: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x237eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_237ef0:
    // 0x237ef0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_237ef4:
    if (ctx->pc == 0x237EF4u) {
        ctx->pc = 0x237EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EF0u;
        // 0x237ef4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EF8u;
        goto label_237ef8;
    }
    ctx->pc = 0x237EF0u;
    {
        const bool branch_taken_0x237ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237ef0) {
            ctx->pc = 0x237EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237EF0u;
            // 0x237ef4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237ed8;
        }
    }
    ctx->pc = 0x237EF8u;
label_237ef8:
    // 0x237ef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237efc:
    // 0x237efc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_237f00:
    if (ctx->pc == 0x237F00u) {
        ctx->pc = 0x237F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EFCu;
        // 0x237f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F04u;
        goto label_237f04;
    }
    ctx->pc = 0x237EFCu;
    {
        const bool branch_taken_0x237efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237efc) {
            ctx->pc = 0x237F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237EFCu;
            // 0x237f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F48u;
            goto label_237f48;
        }
    }
    ctx->pc = 0x237F04u;
label_237f04:
    // 0x237f04: 0x8ce2aa88  lw          $v0, -0x5578($a3)
    ctx->pc = 0x237f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
label_237f08:
    // 0x237f08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_237f0c:
    if (ctx->pc == 0x237F0Cu) {
        ctx->pc = 0x237F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F08u;
        // 0x237f0c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F10u;
        goto label_237f10;
    }
    ctx->pc = 0x237F08u;
    {
        const bool branch_taken_0x237f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F08u;
        // 0x237f0c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f08) {
            ctx->pc = 0x237F38u;
            goto label_237f38;
        }
    }
    ctx->pc = 0x237F10u;
label_237f10:
    // 0x237f10: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x237f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_237f14:
    // 0x237f14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x237f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_237f18:
    // 0x237f18: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x237f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_237f1c:
    // 0x237f1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_237f20:
    if (ctx->pc == 0x237F20u) {
        ctx->pc = 0x237F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F1Cu;
        // 0x237f20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F24u;
        goto label_237f24;
    }
    ctx->pc = 0x237F1Cu;
    {
        const bool branch_taken_0x237f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F1Cu;
        // 0x237f20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f1c) {
            ctx->pc = 0x237F30u;
            goto label_237f30;
        }
    }
    ctx->pc = 0x237F24u;
label_237f24:
    // 0x237f24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x237f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_237f28:
    // 0x237f28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x237f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_237f2c:
    // 0x237f2c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x237f2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_237f30:
    // 0x237f30: 0x10000002  b           . + 4 + (0x2 << 2)
label_237f34:
    if (ctx->pc == 0x237F34u) {
        ctx->pc = 0x237F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F30u;
        // 0x237f34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F38u;
        goto label_237f38;
    }
    ctx->pc = 0x237F30u;
    {
        const bool branch_taken_0x237f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F30u;
        // 0x237f34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f30) {
            ctx->pc = 0x237F3Cu;
            goto label_237f3c;
        }
    }
    ctx->pc = 0x237F38u;
label_237f38:
    // 0x237f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237f3c:
    // 0x237f3c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_237f40:
    if (ctx->pc == 0x237F40u) {
        ctx->pc = 0x237F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F3Cu;
        // 0x237f40: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F44u;
        goto label_237f44;
    }
    ctx->pc = 0x237F3Cu;
    {
        const bool branch_taken_0x237f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237f3c) {
            ctx->pc = 0x237F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F3Cu;
            // 0x237f40: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F7Cu;
            goto label_237f7c;
        }
    }
    ctx->pc = 0x237F44u;
label_237f44:
    // 0x237f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237f48:
    // 0x237f48: 0xc08a1f2  jal         func_2287C8
label_237f4c:
    if (ctx->pc == 0x237F4Cu) {
        ctx->pc = 0x237F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F48u;
        // 0x237f4c: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F50u;
        goto label_237f50;
    }
    ctx->pc = 0x237F48u;
    SET_GPR_U32(ctx, 31, 0x237F50u);
    ctx->pc = 0x237F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F48u;
    // 0x237f4c: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x237F48u, 0x237F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F50u;
label_237f50:
    // 0x237f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237f54:
    // 0x237f54: 0xc0f70ce  jal         func_3DC338
label_237f58:
    if (ctx->pc == 0x237F58u) {
        ctx->pc = 0x237F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F54u;
        // 0x237f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F5Cu;
        goto label_237f5c;
    }
    ctx->pc = 0x237F54u;
    SET_GPR_U32(ctx, 31, 0x237F5Cu);
    ctx->pc = 0x237F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F54u;
    // 0x237f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x237F54u, 0x237F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F5Cu;
label_237f5c:
    // 0x237f5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_237f60:
    if (ctx->pc == 0x237F60u) {
        ctx->pc = 0x237F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F5Cu;
        // 0x237f60: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F64u;
        goto label_237f64;
    }
    ctx->pc = 0x237F5Cu;
    {
        const bool branch_taken_0x237f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237f5c) {
            ctx->pc = 0x237F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F5Cu;
            // 0x237f60: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F70u;
            goto label_237f70;
        }
    }
    ctx->pc = 0x237F64u;
label_237f64:
    // 0x237f64: 0xc0c4900  jal         func_312400
label_237f68:
    if (ctx->pc == 0x237F68u) {
        ctx->pc = 0x237F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F64u;
        // 0x237f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F6Cu;
        goto label_237f6c;
    }
    ctx->pc = 0x237F64u;
    SET_GPR_U32(ctx, 31, 0x237F6Cu);
    ctx->pc = 0x237F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F64u;
    // 0x237f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x237F64u, 0x237F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F6Cu;
label_237f6c:
    // 0x237f6c: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x237f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_237f70:
    // 0x237f70: 0xc096592  jal         func_259648
label_237f74:
    if (ctx->pc == 0x237F74u) {
        ctx->pc = 0x237F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F70u;
        // 0x237f74: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F78u;
        goto label_237f78;
    }
    ctx->pc = 0x237F70u;
    SET_GPR_U32(ctx, 31, 0x237F78u);
    ctx->pc = 0x237F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F70u;
    // 0x237f74: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259648u, 0x237F70u, 0x237F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F78u;
label_237f78:
    // 0x237f78: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x237f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_237f7c:
    // 0x237f7c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x237f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_237f80:
    // 0x237f80: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x237f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_237f84:
    // 0x237f84: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x237f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_237f88:
    // 0x237f88: 0x8e6395a0  lw          $v1, -0x6A60($s3)
    ctx->pc = 0x237f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294940064)));
label_237f8c:
    // 0x237f8c: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x237f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
label_237f90:
    // 0x237f90: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x237f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_237f94:
    // 0x237f94: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x237f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_237f98:
    // 0x237f98: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x237f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_237f9c:
    // 0x237f9c: 0x40f809  jalr        $v0
label_237fa0:
    if (ctx->pc == 0x237FA0u) {
        ctx->pc = 0x237FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F9Cu;
        // 0x237fa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FA4u;
        goto label_237fa4;
    }
    ctx->pc = 0x237F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237FA4u);
        ctx->pc = 0x237FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F9Cu;
        // 0x237fa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237F9Cu, 0x237FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237FA4u;
label_237fa4:
    // 0x237fa4: 0xc68c2b30  lwc1        $f12, 0x2B30($s4)
    ctx->pc = 0x237fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_237fa8:
    // 0x237fa8: 0xc0d44dc  jal         func_351370
label_237fac:
    if (ctx->pc == 0x237FACu) {
        ctx->pc = 0x237FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FA8u;
        // 0x237fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FB0u;
        goto label_237fb0;
    }
    ctx->pc = 0x237FA8u;
    SET_GPR_U32(ctx, 31, 0x237FB0u);
    ctx->pc = 0x237FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FA8u;
    // 0x237fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351370u, 0x237FA8u, 0x237FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FB0u;
label_237fb0:
    // 0x237fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237fb4:
    // 0x237fb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_237fb8:
    // 0x237fb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237fbc:
    // 0x237fbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237fbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_237fc0:
    // 0x237fc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237fc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237fc4:
    // 0x237fc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_237fc8:
    // 0x237fc8: 0x3e00008  jr          $ra
label_237fcc:
    if (ctx->pc == 0x237FCCu) {
        ctx->pc = 0x237FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FC8u;
        // 0x237fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FD0u;
        goto label_fallthrough_0x237fc8;
    }
    ctx->pc = 0x237FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FC8u;
        // 0x237fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x237fc8:
    ctx->pc = 0x237FD0u;
}
