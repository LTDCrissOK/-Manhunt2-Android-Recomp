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

// Function: sub_00315E00
// Address: 0x315e00 - 0x316020
void sub_00315E00_0x315e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315E00_0x315e00");
#endif

    switch (ctx->pc) {
        case 0x315e00u: goto label_315e00;
        case 0x315e04u: goto label_315e04;
        case 0x315e08u: goto label_315e08;
        case 0x315e0cu: goto label_315e0c;
        case 0x315e10u: goto label_315e10;
        case 0x315e14u: goto label_315e14;
        case 0x315e18u: goto label_315e18;
        case 0x315e1cu: goto label_315e1c;
        case 0x315e20u: goto label_315e20;
        case 0x315e24u: goto label_315e24;
        case 0x315e28u: goto label_315e28;
        case 0x315e2cu: goto label_315e2c;
        case 0x315e30u: goto label_315e30;
        case 0x315e34u: goto label_315e34;
        case 0x315e38u: goto label_315e38;
        case 0x315e3cu: goto label_315e3c;
        case 0x315e40u: goto label_315e40;
        case 0x315e44u: goto label_315e44;
        case 0x315e48u: goto label_315e48;
        case 0x315e4cu: goto label_315e4c;
        case 0x315e50u: goto label_315e50;
        case 0x315e54u: goto label_315e54;
        case 0x315e58u: goto label_315e58;
        case 0x315e5cu: goto label_315e5c;
        case 0x315e60u: goto label_315e60;
        case 0x315e64u: goto label_315e64;
        case 0x315e68u: goto label_315e68;
        case 0x315e6cu: goto label_315e6c;
        case 0x315e70u: goto label_315e70;
        case 0x315e74u: goto label_315e74;
        case 0x315e78u: goto label_315e78;
        case 0x315e7cu: goto label_315e7c;
        case 0x315e80u: goto label_315e80;
        case 0x315e84u: goto label_315e84;
        case 0x315e88u: goto label_315e88;
        case 0x315e8cu: goto label_315e8c;
        case 0x315e90u: goto label_315e90;
        case 0x315e94u: goto label_315e94;
        case 0x315e98u: goto label_315e98;
        case 0x315e9cu: goto label_315e9c;
        case 0x315ea0u: goto label_315ea0;
        case 0x315ea4u: goto label_315ea4;
        case 0x315ea8u: goto label_315ea8;
        case 0x315eacu: goto label_315eac;
        case 0x315eb0u: goto label_315eb0;
        case 0x315eb4u: goto label_315eb4;
        case 0x315eb8u: goto label_315eb8;
        case 0x315ebcu: goto label_315ebc;
        case 0x315ec0u: goto label_315ec0;
        case 0x315ec4u: goto label_315ec4;
        case 0x315ec8u: goto label_315ec8;
        case 0x315eccu: goto label_315ecc;
        case 0x315ed0u: goto label_315ed0;
        case 0x315ed4u: goto label_315ed4;
        case 0x315ed8u: goto label_315ed8;
        case 0x315edcu: goto label_315edc;
        case 0x315ee0u: goto label_315ee0;
        case 0x315ee4u: goto label_315ee4;
        case 0x315ee8u: goto label_315ee8;
        case 0x315eecu: goto label_315eec;
        case 0x315ef0u: goto label_315ef0;
        case 0x315ef4u: goto label_315ef4;
        case 0x315ef8u: goto label_315ef8;
        case 0x315efcu: goto label_315efc;
        case 0x315f00u: goto label_315f00;
        case 0x315f04u: goto label_315f04;
        case 0x315f08u: goto label_315f08;
        case 0x315f0cu: goto label_315f0c;
        case 0x315f10u: goto label_315f10;
        case 0x315f14u: goto label_315f14;
        case 0x315f18u: goto label_315f18;
        case 0x315f1cu: goto label_315f1c;
        case 0x315f20u: goto label_315f20;
        case 0x315f24u: goto label_315f24;
        case 0x315f28u: goto label_315f28;
        case 0x315f2cu: goto label_315f2c;
        case 0x315f30u: goto label_315f30;
        case 0x315f34u: goto label_315f34;
        case 0x315f38u: goto label_315f38;
        case 0x315f3cu: goto label_315f3c;
        case 0x315f40u: goto label_315f40;
        case 0x315f44u: goto label_315f44;
        case 0x315f48u: goto label_315f48;
        case 0x315f4cu: goto label_315f4c;
        case 0x315f50u: goto label_315f50;
        case 0x315f54u: goto label_315f54;
        case 0x315f58u: goto label_315f58;
        case 0x315f5cu: goto label_315f5c;
        case 0x315f60u: goto label_315f60;
        case 0x315f64u: goto label_315f64;
        case 0x315f68u: goto label_315f68;
        case 0x315f6cu: goto label_315f6c;
        case 0x315f70u: goto label_315f70;
        case 0x315f74u: goto label_315f74;
        case 0x315f78u: goto label_315f78;
        case 0x315f7cu: goto label_315f7c;
        case 0x315f80u: goto label_315f80;
        case 0x315f84u: goto label_315f84;
        case 0x315f88u: goto label_315f88;
        case 0x315f8cu: goto label_315f8c;
        case 0x315f90u: goto label_315f90;
        case 0x315f94u: goto label_315f94;
        case 0x315f98u: goto label_315f98;
        case 0x315f9cu: goto label_315f9c;
        case 0x315fa0u: goto label_315fa0;
        case 0x315fa4u: goto label_315fa4;
        case 0x315fa8u: goto label_315fa8;
        case 0x315facu: goto label_315fac;
        case 0x315fb0u: goto label_315fb0;
        case 0x315fb4u: goto label_315fb4;
        case 0x315fb8u: goto label_315fb8;
        case 0x315fbcu: goto label_315fbc;
        case 0x315fc0u: goto label_315fc0;
        case 0x315fc4u: goto label_315fc4;
        case 0x315fc8u: goto label_315fc8;
        case 0x315fccu: goto label_315fcc;
        case 0x315fd0u: goto label_315fd0;
        case 0x315fd4u: goto label_315fd4;
        case 0x315fd8u: goto label_315fd8;
        case 0x315fdcu: goto label_315fdc;
        case 0x315fe0u: goto label_315fe0;
        case 0x315fe4u: goto label_315fe4;
        case 0x315fe8u: goto label_315fe8;
        case 0x315fecu: goto label_315fec;
        case 0x315ff0u: goto label_315ff0;
        case 0x315ff4u: goto label_315ff4;
        case 0x315ff8u: goto label_315ff8;
        case 0x315ffcu: goto label_315ffc;
        case 0x316000u: goto label_316000;
        case 0x316004u: goto label_316004;
        case 0x316008u: goto label_316008;
        case 0x31600cu: goto label_31600c;
        case 0x316010u: goto label_316010;
        case 0x316014u: goto label_316014;
        case 0x316018u: goto label_316018;
        case 0x31601cu: goto label_31601c;
        default: break;
    }

    ctx->pc = 0x315e00u;

label_315e00:
    // 0x315e00: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x315e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_315e04:
    // 0x315e04: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x315e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_315e08:
    // 0x315e08: 0x90435aec  lbu         $v1, 0x5AEC($v0)
    ctx->pc = 0x315e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
label_315e0c:
    // 0x315e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x315e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_315e10:
    // 0x315e10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x315e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_315e14:
    // 0x315e14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x315e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_315e18:
    // 0x315e18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x315e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_315e1c:
    // 0x315e1c: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_315e20:
    if (ctx->pc == 0x315E20u) {
        ctx->pc = 0x315E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E1Cu;
        // 0x315e20: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E24u;
        goto label_315e24;
    }
    ctx->pc = 0x315E1Cu;
    {
        const bool branch_taken_0x315e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E1Cu;
        // 0x315e20: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e1c) {
            ctx->pc = 0x316000u;
            goto label_316000;
        }
    }
    ctx->pc = 0x315E24u;
label_315e24:
    // 0x315e24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315e28:
    // 0x315e28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x315e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315e2c:
    // 0x315e2c: 0x8c43bd6c  lw          $v1, -0x4294($v0)
    ctx->pc = 0x315e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950252)));
label_315e30:
    // 0x315e30: 0x10700070  beq         $v1, $s0, . + 4 + (0x70 << 2)
label_315e34:
    if (ctx->pc == 0x315E34u) {
        ctx->pc = 0x315E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E30u;
        // 0x315e34: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E38u;
        goto label_315e38;
    }
    ctx->pc = 0x315E30u;
    {
        const bool branch_taken_0x315e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x315E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E30u;
        // 0x315e34: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e30) {
            ctx->pc = 0x315FF4u;
            goto label_315ff4;
        }
    }
    ctx->pc = 0x315E38u;
label_315e38:
    // 0x315e38: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x315e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_315e3c:
    // 0x315e3c: 0x50400071  beql        $v0, $zero, . + 4 + (0x71 << 2)
label_315e40:
    if (ctx->pc == 0x315E40u) {
        ctx->pc = 0x315E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E3Cu;
        // 0x315e40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E44u;
        goto label_315e44;
    }
    ctx->pc = 0x315E3Cu;
    {
        const bool branch_taken_0x315e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315e3c) {
            ctx->pc = 0x315E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315E3Cu;
            // 0x315e40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316004u;
            goto label_316004;
        }
    }
    ctx->pc = 0x315E44u;
label_315e44:
    // 0x315e44: 0x5460006f  bnel        $v1, $zero, . + 4 + (0x6F << 2)
label_315e48:
    if (ctx->pc == 0x315E48u) {
        ctx->pc = 0x315E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E44u;
        // 0x315e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E4Cu;
        goto label_315e4c;
    }
    ctx->pc = 0x315E44u;
    {
        const bool branch_taken_0x315e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315e44) {
            ctx->pc = 0x315E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315E44u;
            // 0x315e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316004u;
            goto label_316004;
        }
    }
    ctx->pc = 0x315E4Cu;
label_315e4c:
    // 0x315e4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x315e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_315e50:
    // 0x315e50: 0xc0ae686  jal         func_2B9A18
label_315e54:
    if (ctx->pc == 0x315E54u) {
        ctx->pc = 0x315E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E50u;
        // 0x315e54: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E58u;
        goto label_315e58;
    }
    ctx->pc = 0x315E50u;
    SET_GPR_U32(ctx, 31, 0x315E58u);
    ctx->pc = 0x315E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E50u;
    // 0x315e54: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A18u, 0x315E50u, 0x315E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E58u;
label_315e58:
    // 0x315e58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x315e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_315e5c:
    // 0x315e5c: 0x8c622b34  lw          $v0, 0x2B34($v1)
    ctx->pc = 0x315e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11060)));
label_315e60:
    // 0x315e60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x315e60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315e64:
    // 0x315e64: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x315e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_315e68:
    // 0x315e68: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x315e68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_315e6c:
    // 0x315e6c: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_315e70:
    if (ctx->pc == 0x315E70u) {
        ctx->pc = 0x315E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E6Cu;
        // 0x315e70: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E74u;
        goto label_315e74;
    }
    ctx->pc = 0x315E6Cu;
    {
        const bool branch_taken_0x315e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E6Cu;
        // 0x315e70: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e6c) {
            ctx->pc = 0x315F7Cu;
            goto label_315f7c;
        }
    }
    ctx->pc = 0x315E74u;
label_315e74:
    // 0x315e74: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x315e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943520)));
label_315e78:
    // 0x315e78: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_315e7c:
    if (ctx->pc == 0x315E7Cu) {
        ctx->pc = 0x315E80u;
        goto label_315e80;
    }
    ctx->pc = 0x315E78u;
    {
        const bool branch_taken_0x315e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315e78) {
            ctx->pc = 0x315EECu;
            goto label_315eec;
        }
    }
    ctx->pc = 0x315E80u;
label_315e80:
    // 0x315e80: 0xc0a1f58  jal         func_287D60
label_315e84:
    if (ctx->pc == 0x315E84u) {
        ctx->pc = 0x315E88u;
        goto label_315e88;
    }
    ctx->pc = 0x315E80u;
    SET_GPR_U32(ctx, 31, 0x315E88u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x315E80u, 0x315E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E88u;
label_315e88:
    // 0x315e88: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_315e8c:
    if (ctx->pc == 0x315E8Cu) {
        ctx->pc = 0x315E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E88u;
        // 0x315e8c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E90u;
        goto label_315e90;
    }
    ctx->pc = 0x315E88u;
    {
        const bool branch_taken_0x315e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E88u;
        // 0x315e8c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e88) {
            ctx->pc = 0x315EECu;
            goto label_315eec;
        }
    }
    ctx->pc = 0x315E90u;
label_315e90:
    // 0x315e90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x315e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_315e94:
    // 0x315e94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315e98:
    // 0x315e98: 0xac70bd60  sw          $s0, -0x42A0($v1)
    ctx->pc = 0x315e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950240), GPR_U32(ctx, 16));
label_315e9c:
    // 0x315e9c: 0x8c42bd50  lw          $v0, -0x42B0($v0)
    ctx->pc = 0x315e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_315ea0:
    // 0x315ea0: 0xae64bd6c  sw          $a0, -0x4294($s3)
    ctx->pc = 0x315ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950252), GPR_U32(ctx, 4));
label_315ea4:
    // 0x315ea4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x315ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315ea8:
    // 0x315ea8: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x315ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315eac:
    // 0x315eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x315eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315eb0:
    // 0x315eb0: 0x0  nop
    ctx->pc = 0x315eb0u;
    // NOP
label_315eb4:
    // 0x315eb4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_315eb8:
    if (ctx->pc == 0x315EB8u) {
        ctx->pc = 0x315EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EB4u;
        // 0x315eb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315EBCu;
        goto label_315ebc;
    }
    ctx->pc = 0x315EB4u;
    {
        const bool branch_taken_0x315eb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EB4u;
        // 0x315eb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315eb4) {
            ctx->pc = 0x315ECCu;
            goto label_315ecc;
        }
    }
    ctx->pc = 0x315EBCu;
label_315ebc:
    // 0x315ebc: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x315ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_315ec0:
    // 0x315ec0: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x315ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_315ec4:
    // 0x315ec4: 0x40f809  jalr        $v0
label_315ec8:
    if (ctx->pc == 0x315EC8u) {
        ctx->pc = 0x315EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EC4u;
        // 0x315ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315ECCu;
        goto label_315ecc;
    }
    ctx->pc = 0x315EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315ECCu);
        ctx->pc = 0x315EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EC4u;
        // 0x315ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315EC4u, 0x315ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315ECCu;
label_315ecc:
    // 0x315ecc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315ed0:
    // 0x315ed0: 0x8c62bd5c  lw          $v0, -0x42A4($v1)
    ctx->pc = 0x315ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950236)));
label_315ed4:
    // 0x315ed4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_315ed8:
    if (ctx->pc == 0x315ED8u) {
        ctx->pc = 0x315ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315ED4u;
        // 0x315ed8: 0xac60bd5c  sw          $zero, -0x42A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315EDCu;
        goto label_315edc;
    }
    ctx->pc = 0x315ED4u;
    {
        const bool branch_taken_0x315ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315ed4) {
            ctx->pc = 0x315ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315ED4u;
            // 0x315ed8: 0xac60bd5c  sw          $zero, -0x42A4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294950236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315EDCu;
            goto label_315edc;
        }
    }
    ctx->pc = 0x315EDCu;
label_315edc:
    // 0x315edc: 0xc0a1b2c  jal         func_286CB0
label_315ee0:
    if (ctx->pc == 0x315EE0u) {
        ctx->pc = 0x315EE4u;
        goto label_315ee4;
    }
    ctx->pc = 0x315EDCu;
    SET_GPR_U32(ctx, 31, 0x315EE4u);
    ctx->pc = 0x286CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286CB0u, 0x315EDCu, 0x315EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315EE4u;
label_315ee4:
    // 0x315ee4: 0x10000025  b           . + 4 + (0x25 << 2)
label_315ee8:
    if (ctx->pc == 0x315EE8u) {
        ctx->pc = 0x315EECu;
        goto label_315eec;
    }
    ctx->pc = 0x315EE4u;
    {
        const bool branch_taken_0x315ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315ee4) {
            ctx->pc = 0x315F7Cu;
            goto label_315f7c;
        }
    }
    ctx->pc = 0x315EECu;
label_315eec:
    // 0x315eec: 0xc0a1f92  jal         func_287E48
label_315ef0:
    if (ctx->pc == 0x315EF0u) {
        ctx->pc = 0x315EF4u;
        goto label_315ef4;
    }
    ctx->pc = 0x315EECu;
    SET_GPR_U32(ctx, 31, 0x315EF4u);
    ctx->pc = 0x287E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287E48u, 0x315EECu, 0x315EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315EF4u;
label_315ef4:
    // 0x315ef4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_315ef8:
    if (ctx->pc == 0x315EF8u) {
        ctx->pc = 0x315EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EF4u;
        // 0x315ef8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315EFCu;
        goto label_315efc;
    }
    ctx->pc = 0x315EF4u;
    {
        const bool branch_taken_0x315ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EF4u;
        // 0x315ef8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ef4) {
            ctx->pc = 0x315F7Cu;
            goto label_315f7c;
        }
    }
    ctx->pc = 0x315EFCu;
label_315efc:
    // 0x315efc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x315efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_315f00:
    // 0x315f00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x315f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315f04:
    // 0x315f04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x315f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_315f08:
    // 0x315f08: 0xc07f540  jal         func_1FD500
label_315f0c:
    if (ctx->pc == 0x315F0Cu) {
        ctx->pc = 0x315F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F08u;
        // 0x315f0c: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F10u;
        goto label_315f10;
    }
    ctx->pc = 0x315F08u;
    SET_GPR_U32(ctx, 31, 0x315F10u);
    ctx->pc = 0x315F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F08u;
    // 0x315f0c: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x315F08u, 0x315F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F10u;
label_315f10:
    // 0x315f10: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x315f10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_315f14:
    // 0x315f14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315f18:
    // 0x315f18: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x315f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
label_315f1c:
    // 0x315f1c: 0x24a535f8  addiu       $a1, $a1, 0x35F8
    ctx->pc = 0x315f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13816));
label_315f20:
    // 0x315f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315f24:
    // 0x315f24: 0xc0aebd6  jal         func_2BAF58
label_315f28:
    if (ctx->pc == 0x315F28u) {
        ctx->pc = 0x315F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F24u;
        // 0x315f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F2Cu;
        goto label_315f2c;
    }
    ctx->pc = 0x315F24u;
    SET_GPR_U32(ctx, 31, 0x315F2Cu);
    ctx->pc = 0x315F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F24u;
    // 0x315f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x315F24u, 0x315F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F2Cu;
label_315f2c:
    // 0x315f2c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315f30:
    // 0x315f30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x315f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315f34:
    // 0x315f34: 0x24a53600  addiu       $a1, $a1, 0x3600
    ctx->pc = 0x315f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13824));
label_315f38:
    // 0x315f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315f3c:
    // 0x315f3c: 0xc0aebd6  jal         func_2BAF58
label_315f40:
    if (ctx->pc == 0x315F40u) {
        ctx->pc = 0x315F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F3Cu;
        // 0x315f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F44u;
        goto label_315f44;
    }
    ctx->pc = 0x315F3Cu;
    SET_GPR_U32(ctx, 31, 0x315F44u);
    ctx->pc = 0x315F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F3Cu;
    // 0x315f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x315F3Cu, 0x315F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F44u;
label_315f44:
    // 0x315f44: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315f48:
    // 0x315f48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x315f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315f4c:
    // 0x315f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315f50:
    // 0x315f50: 0x24a53608  addiu       $a1, $a1, 0x3608
    ctx->pc = 0x315f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13832));
label_315f54:
    // 0x315f54: 0xc0aebd6  jal         func_2BAF58
label_315f58:
    if (ctx->pc == 0x315F58u) {
        ctx->pc = 0x315F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F54u;
        // 0x315f58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F5Cu;
        goto label_315f5c;
    }
    ctx->pc = 0x315F54u;
    SET_GPR_U32(ctx, 31, 0x315F5Cu);
    ctx->pc = 0x315F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F54u;
    // 0x315f58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x315F54u, 0x315F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F5Cu;
label_315f5c:
    // 0x315f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315f60:
    // 0x315f60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x315f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315f64:
    // 0x315f64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x315f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315f68:
    // 0x315f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315f6c:
    // 0x315f6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x315f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315f70:
    // 0x315f70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x315f70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_315f74:
    // 0x315f74: 0xc0a1ba0  jal         func_286E80
label_315f78:
    if (ctx->pc == 0x315F78u) {
        ctx->pc = 0x315F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F74u;
        // 0x315f78: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F7Cu;
        goto label_315f7c;
    }
    ctx->pc = 0x315F74u;
    SET_GPR_U32(ctx, 31, 0x315F7Cu);
    ctx->pc = 0x315F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F74u;
    // 0x315f78: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E80u, 0x315F74u, 0x315F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F7Cu;
label_315f7c:
    // 0x315f7c: 0xc0a1d48  jal         func_287520
label_315f80:
    if (ctx->pc == 0x315F80u) {
        ctx->pc = 0x315F84u;
        goto label_315f84;
    }
    ctx->pc = 0x315F7Cu;
    SET_GPR_U32(ctx, 31, 0x315F84u);
    ctx->pc = 0x287520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287520u, 0x315F7Cu, 0x315F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F84u;
label_315f84:
    // 0x315f84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x315f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315f88:
    // 0x315f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315f8c:
    // 0x315f8c: 0x14a2001d  bne         $a1, $v0, . + 4 + (0x1D << 2)
label_315f90:
    if (ctx->pc == 0x315F90u) {
        ctx->pc = 0x315F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F8Cu;
        // 0x315f90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F94u;
        goto label_315f94;
    }
    ctx->pc = 0x315F8Cu;
    {
        const bool branch_taken_0x315f8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x315F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F8Cu;
        // 0x315f90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f8c) {
            ctx->pc = 0x316004u;
            goto label_316004;
        }
    }
    ctx->pc = 0x315F94u;
label_315f94:
    // 0x315f94: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315f98:
    // 0x315f98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x315f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_315f9c:
    // 0x315f9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315fa0:
    // 0x315fa0: 0xac65bd60  sw          $a1, -0x42A0($v1)
    ctx->pc = 0x315fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950240), GPR_U32(ctx, 5));
label_315fa4:
    // 0x315fa4: 0x8c42bd50  lw          $v0, -0x42B0($v0)
    ctx->pc = 0x315fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_315fa8:
    // 0x315fa8: 0xae64bd6c  sw          $a0, -0x4294($s3)
    ctx->pc = 0x315fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950252), GPR_U32(ctx, 4));
label_315fac:
    // 0x315fac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x315facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315fb0:
    // 0x315fb0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x315fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315fb4:
    // 0x315fb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x315fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315fb8:
    // 0x315fb8: 0x0  nop
    ctx->pc = 0x315fb8u;
    // NOP
label_315fbc:
    // 0x315fbc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_315fc0:
    if (ctx->pc == 0x315FC0u) {
        ctx->pc = 0x315FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FBCu;
        // 0x315fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FC4u;
        goto label_315fc4;
    }
    ctx->pc = 0x315FBCu;
    {
        const bool branch_taken_0x315fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FBCu;
        // 0x315fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fbc) {
            ctx->pc = 0x315FD4u;
            goto label_315fd4;
        }
    }
    ctx->pc = 0x315FC4u;
label_315fc4:
    // 0x315fc4: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x315fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_315fc8:
    // 0x315fc8: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x315fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_315fcc:
    // 0x315fcc: 0x40f809  jalr        $v0
label_315fd0:
    if (ctx->pc == 0x315FD0u) {
        ctx->pc = 0x315FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FCCu;
        // 0x315fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FD4u;
        goto label_315fd4;
    }
    ctx->pc = 0x315FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315FD4u);
        ctx->pc = 0x315FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FCCu;
        // 0x315fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315FCCu, 0x315FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315FD4u;
label_315fd4:
    // 0x315fd4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315fd8:
    // 0x315fd8: 0x8c62bd5c  lw          $v0, -0x42A4($v1)
    ctx->pc = 0x315fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950236)));
label_315fdc:
    // 0x315fdc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_315fe0:
    if (ctx->pc == 0x315FE0u) {
        ctx->pc = 0x315FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FDCu;
        // 0x315fe0: 0xac60bd5c  sw          $zero, -0x42A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FE4u;
        goto label_315fe4;
    }
    ctx->pc = 0x315FDCu;
    {
        const bool branch_taken_0x315fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315fdc) {
            ctx->pc = 0x315FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315FDCu;
            // 0x315fe0: 0xac60bd5c  sw          $zero, -0x42A4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294950236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315FE4u;
            goto label_315fe4;
        }
    }
    ctx->pc = 0x315FE4u;
label_315fe4:
    // 0x315fe4: 0xc0b94ee  jal         func_2E53B8
label_315fe8:
    if (ctx->pc == 0x315FE8u) {
        ctx->pc = 0x315FECu;
        goto label_315fec;
    }
    ctx->pc = 0x315FE4u;
    SET_GPR_U32(ctx, 31, 0x315FECu);
    ctx->pc = 0x2E53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E53B8u, 0x315FE4u, 0x315FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315FECu;
label_315fec:
    // 0x315fec: 0x10000005  b           . + 4 + (0x5 << 2)
label_315ff0:
    if (ctx->pc == 0x315FF0u) {
        ctx->pc = 0x315FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FECu;
        // 0x315ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FF4u;
        goto label_315ff4;
    }
    ctx->pc = 0x315FECu;
    {
        const bool branch_taken_0x315fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FECu;
        // 0x315ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fec) {
            ctx->pc = 0x316004u;
            goto label_316004;
        }
    }
    ctx->pc = 0x315FF4u;
label_315ff4:
    // 0x315ff4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x315ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_315ff8:
    // 0x315ff8: 0xc0acc4c  jal         func_2B3130
label_315ffc:
    if (ctx->pc == 0x315FFCu) {
        ctx->pc = 0x315FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FF8u;
        // 0x315ffc: 0x24842508  addiu       $a0, $a0, 0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316000u;
        goto label_316000;
    }
    ctx->pc = 0x315FF8u;
    SET_GPR_U32(ctx, 31, 0x316000u);
    ctx->pc = 0x315FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315FF8u;
    // 0x315ffc: 0x24842508  addiu       $a0, $a0, 0x2508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3130u, 0x315FF8u, 0x316000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316000u;
label_316000:
    // 0x316000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x316000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_316004:
    // 0x316004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x316004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_316008:
    // 0x316008: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x316008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31600c:
    // 0x31600c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31600cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_316010:
    // 0x316010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x316010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_316014:
    // 0x316014: 0x3e00008  jr          $ra
label_316018:
    if (ctx->pc == 0x316018u) {
        ctx->pc = 0x316018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316014u;
        // 0x316018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31601Cu;
        goto label_31601c;
    }
    ctx->pc = 0x316014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316014u;
        // 0x316018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31601Cu;
label_31601c:
    // 0x31601c: 0x0  nop
    ctx->pc = 0x31601cu;
    // NOP
    ctx->pc = 0x316020u;
}
