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

// Function: sub_00235F38
// Address: 0x235f38 - 0x236138
void sub_00235F38_0x235f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235F38_0x235f38");
#endif

    switch (ctx->pc) {
        case 0x235f38u: goto label_235f38;
        case 0x235f3cu: goto label_235f3c;
        case 0x235f40u: goto label_235f40;
        case 0x235f44u: goto label_235f44;
        case 0x235f48u: goto label_235f48;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f50u: goto label_235f50;
        case 0x235f54u: goto label_235f54;
        case 0x235f58u: goto label_235f58;
        case 0x235f5cu: goto label_235f5c;
        case 0x235f60u: goto label_235f60;
        case 0x235f64u: goto label_235f64;
        case 0x235f68u: goto label_235f68;
        case 0x235f6cu: goto label_235f6c;
        case 0x235f70u: goto label_235f70;
        case 0x235f74u: goto label_235f74;
        case 0x235f78u: goto label_235f78;
        case 0x235f7cu: goto label_235f7c;
        case 0x235f80u: goto label_235f80;
        case 0x235f84u: goto label_235f84;
        case 0x235f88u: goto label_235f88;
        case 0x235f8cu: goto label_235f8c;
        case 0x235f90u: goto label_235f90;
        case 0x235f94u: goto label_235f94;
        case 0x235f98u: goto label_235f98;
        case 0x235f9cu: goto label_235f9c;
        case 0x235fa0u: goto label_235fa0;
        case 0x235fa4u: goto label_235fa4;
        case 0x235fa8u: goto label_235fa8;
        case 0x235facu: goto label_235fac;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fb4u: goto label_235fb4;
        case 0x235fb8u: goto label_235fb8;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc0u: goto label_235fc0;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fc8u: goto label_235fc8;
        case 0x235fccu: goto label_235fcc;
        case 0x235fd0u: goto label_235fd0;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fd8u: goto label_235fd8;
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fe4u: goto label_235fe4;
        case 0x235fe8u: goto label_235fe8;
        case 0x235fecu: goto label_235fec;
        case 0x235ff0u: goto label_235ff0;
        case 0x235ff4u: goto label_235ff4;
        case 0x235ff8u: goto label_235ff8;
        case 0x235ffcu: goto label_235ffc;
        case 0x236000u: goto label_236000;
        case 0x236004u: goto label_236004;
        case 0x236008u: goto label_236008;
        case 0x23600cu: goto label_23600c;
        case 0x236010u: goto label_236010;
        case 0x236014u: goto label_236014;
        case 0x236018u: goto label_236018;
        case 0x23601cu: goto label_23601c;
        case 0x236020u: goto label_236020;
        case 0x236024u: goto label_236024;
        case 0x236028u: goto label_236028;
        case 0x23602cu: goto label_23602c;
        case 0x236030u: goto label_236030;
        case 0x236034u: goto label_236034;
        case 0x236038u: goto label_236038;
        case 0x23603cu: goto label_23603c;
        case 0x236040u: goto label_236040;
        case 0x236044u: goto label_236044;
        case 0x236048u: goto label_236048;
        case 0x23604cu: goto label_23604c;
        case 0x236050u: goto label_236050;
        case 0x236054u: goto label_236054;
        case 0x236058u: goto label_236058;
        case 0x23605cu: goto label_23605c;
        case 0x236060u: goto label_236060;
        case 0x236064u: goto label_236064;
        case 0x236068u: goto label_236068;
        case 0x23606cu: goto label_23606c;
        case 0x236070u: goto label_236070;
        case 0x236074u: goto label_236074;
        case 0x236078u: goto label_236078;
        case 0x23607cu: goto label_23607c;
        case 0x236080u: goto label_236080;
        case 0x236084u: goto label_236084;
        case 0x236088u: goto label_236088;
        case 0x23608cu: goto label_23608c;
        case 0x236090u: goto label_236090;
        case 0x236094u: goto label_236094;
        case 0x236098u: goto label_236098;
        case 0x23609cu: goto label_23609c;
        case 0x2360a0u: goto label_2360a0;
        case 0x2360a4u: goto label_2360a4;
        case 0x2360a8u: goto label_2360a8;
        case 0x2360acu: goto label_2360ac;
        case 0x2360b0u: goto label_2360b0;
        case 0x2360b4u: goto label_2360b4;
        case 0x2360b8u: goto label_2360b8;
        case 0x2360bcu: goto label_2360bc;
        case 0x2360c0u: goto label_2360c0;
        case 0x2360c4u: goto label_2360c4;
        case 0x2360c8u: goto label_2360c8;
        case 0x2360ccu: goto label_2360cc;
        case 0x2360d0u: goto label_2360d0;
        case 0x2360d4u: goto label_2360d4;
        case 0x2360d8u: goto label_2360d8;
        case 0x2360dcu: goto label_2360dc;
        case 0x2360e0u: goto label_2360e0;
        case 0x2360e4u: goto label_2360e4;
        case 0x2360e8u: goto label_2360e8;
        case 0x2360ecu: goto label_2360ec;
        case 0x2360f0u: goto label_2360f0;
        case 0x2360f4u: goto label_2360f4;
        case 0x2360f8u: goto label_2360f8;
        case 0x2360fcu: goto label_2360fc;
        case 0x236100u: goto label_236100;
        case 0x236104u: goto label_236104;
        case 0x236108u: goto label_236108;
        case 0x23610cu: goto label_23610c;
        case 0x236110u: goto label_236110;
        case 0x236114u: goto label_236114;
        case 0x236118u: goto label_236118;
        case 0x23611cu: goto label_23611c;
        case 0x236120u: goto label_236120;
        case 0x236124u: goto label_236124;
        case 0x236128u: goto label_236128;
        case 0x23612cu: goto label_23612c;
        case 0x236130u: goto label_236130;
        case 0x236134u: goto label_236134;
        default: break;
    }

    ctx->pc = 0x235f38u;

label_235f38:
    // 0x235f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235f3c:
    // 0x235f3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235f40:
    // 0x235f40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_235f44:
    // 0x235f44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x235f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235f48:
    // 0x235f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235f4c:
    // 0x235f4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235f50:
    // 0x235f50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235f54:
    // 0x235f54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x235f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_235f58:
    // 0x235f58: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x235f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_235f5c:
    // 0x235f5c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x235f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_235f60:
    // 0x235f60: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_235f64:
    if (ctx->pc == 0x235F64u) {
        ctx->pc = 0x235F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F60u;
        // 0x235f64: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F68u;
        goto label_235f68;
    }
    ctx->pc = 0x235F60u;
    {
        const bool branch_taken_0x235f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F60u;
        // 0x235f64: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f60) {
            ctx->pc = 0x236110u;
            goto label_236110;
        }
    }
    ctx->pc = 0x235F68u;
label_235f68:
    // 0x235f68: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x235f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_235f6c:
    // 0x235f6c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x235f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235f70:
    // 0x235f70: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x235f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_235f74:
    // 0x235f74: 0x2462ffeb  addiu       $v0, $v1, -0x15
    ctx->pc = 0x235f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
label_235f78:
    // 0x235f78: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x235f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_235f7c:
    // 0x235f7c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_235f80:
    if (ctx->pc == 0x235F80u) {
        ctx->pc = 0x235F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F7Cu;
        // 0x235f80: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F84u;
        goto label_235f84;
    }
    ctx->pc = 0x235F7Cu;
    {
        const bool branch_taken_0x235f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235f7c) {
            ctx->pc = 0x235F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235F7Cu;
            // 0x235f80: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236008u;
            goto label_236008;
        }
    }
    ctx->pc = 0x235F84u;
label_235f84:
    // 0x235f84: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x235f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_235f88:
    // 0x235f88: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_235f8c:
    if (ctx->pc == 0x235F8Cu) {
        ctx->pc = 0x235F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F88u;
        // 0x235f8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F90u;
        goto label_235f90;
    }
    ctx->pc = 0x235F88u;
    {
        const bool branch_taken_0x235f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F88u;
        // 0x235f8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f88) {
            ctx->pc = 0x235FACu;
            goto label_235fac;
        }
    }
    ctx->pc = 0x235F90u;
label_235f90:
    // 0x235f90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x235f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_235f94:
    // 0x235f94: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_235f98:
    if (ctx->pc == 0x235F98u) {
        ctx->pc = 0x235F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F94u;
        // 0x235f98: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F9Cu;
        goto label_235f9c;
    }
    ctx->pc = 0x235F94u;
    {
        const bool branch_taken_0x235f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F94u;
        // 0x235f98: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f94) {
            ctx->pc = 0x235FACu;
            goto label_235fac;
        }
    }
    ctx->pc = 0x235F9Cu;
label_235f9c:
    // 0x235f9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_235fa0:
    if (ctx->pc == 0x235FA0u) {
        ctx->pc = 0x235FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F9Cu;
        // 0x235fa0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FA4u;
        goto label_235fa4;
    }
    ctx->pc = 0x235F9Cu;
    {
        const bool branch_taken_0x235f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F9Cu;
        // 0x235fa0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f9c) {
            ctx->pc = 0x235FACu;
            goto label_235fac;
        }
    }
    ctx->pc = 0x235FA4u;
label_235fa4:
    // 0x235fa4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_235fa8:
    if (ctx->pc == 0x235FA8u) {
        ctx->pc = 0x235FACu;
        goto label_235fac;
    }
    ctx->pc = 0x235FA4u;
    {
        const bool branch_taken_0x235fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x235fa4) {
            ctx->pc = 0x235FB0u;
            goto label_235fb0;
        }
    }
    ctx->pc = 0x235FACu;
label_235fac:
    // 0x235fac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235fb0:
    // 0x235fb0: 0x54800015  bnel        $a0, $zero, . + 4 + (0x15 << 2)
label_235fb4:
    if (ctx->pc == 0x235FB4u) {
        ctx->pc = 0x235FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FB0u;
        // 0x235fb4: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FB8u;
        goto label_235fb8;
    }
    ctx->pc = 0x235FB0u;
    {
        const bool branch_taken_0x235fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x235fb0) {
            ctx->pc = 0x235FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FB0u;
            // 0x235fb4: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236008u;
            goto label_236008;
        }
    }
    ctx->pc = 0x235FB8u;
label_235fb8:
    // 0x235fb8: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x235fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
label_235fbc:
    // 0x235fbc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x235fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_235fc0:
    // 0x235fc0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x235fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_235fc4:
    // 0x235fc4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_235fc8:
    if (ctx->pc == 0x235FC8u) {
        ctx->pc = 0x235FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FC4u;
        // 0x235fc8: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FCCu;
        goto label_235fcc;
    }
    ctx->pc = 0x235FC4u;
    {
        const bool branch_taken_0x235fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235fc4) {
            ctx->pc = 0x235FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FC4u;
            // 0x235fc8: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236008u;
            goto label_236008;
        }
    }
    ctx->pc = 0x235FCCu;
label_235fcc:
    // 0x235fcc: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x235fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_235fd0:
    // 0x235fd0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x235fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_235fd4:
    // 0x235fd4: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x235fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
label_235fd8:
    // 0x235fd8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x235fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_235fdc:
    // 0x235fdc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_235fe0:
    if (ctx->pc == 0x235FE0u) {
        ctx->pc = 0x235FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FDCu;
        // 0x235fe0: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FE4u;
        goto label_235fe4;
    }
    ctx->pc = 0x235FDCu;
    {
        const bool branch_taken_0x235fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235fdc) {
            ctx->pc = 0x235FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FDCu;
            // 0x235fe0: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236008u;
            goto label_236008;
        }
    }
    ctx->pc = 0x235FE4u;
label_235fe4:
    // 0x235fe4: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x235fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_235fe8:
    // 0x235fe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235fec:
    // 0x235fec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235ff0:
    // 0x235ff0: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x235ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_235ff4:
    // 0x235ff4: 0x40f809  jalr        $v0
label_235ff8:
    if (ctx->pc == 0x235FF8u) {
        ctx->pc = 0x235FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF4u;
        // 0x235ff8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FFCu;
        goto label_235ffc;
    }
    ctx->pc = 0x235FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235FFCu);
        ctx->pc = 0x235FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF4u;
        // 0x235ff8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235FF4u, 0x235FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235FFCu;
label_235ffc:
    // 0x235ffc: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_236000:
    if (ctx->pc == 0x236000u) {
        ctx->pc = 0x236000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FFCu;
        // 0x236000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236004u;
        goto label_236004;
    }
    ctx->pc = 0x235FFCu;
    {
        const bool branch_taken_0x235ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FFCu;
        // 0x236000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ffc) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x236004u;
label_236004:
    // 0x236004: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x236004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
label_236008:
    // 0x236008: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x236008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23600c:
    // 0x23600c: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_236010:
    if (ctx->pc == 0x236010u) {
        ctx->pc = 0x236010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23600Cu;
        // 0x236010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236014u;
        goto label_236014;
    }
    ctx->pc = 0x23600Cu;
    {
        const bool branch_taken_0x23600c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23600Cu;
        // 0x236010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23600c) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x236014u;
label_236014:
    // 0x236014: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x236014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_236018:
    // 0x236018: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x236018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_23601c:
    // 0x23601c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_236020:
    // 0x236020: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x236020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_236024:
    // 0x236024: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_236028:
    if (ctx->pc == 0x236028u) {
        ctx->pc = 0x236028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236024u;
        // 0x236028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23602Cu;
        goto label_23602c;
    }
    ctx->pc = 0x236024u;
    {
        const bool branch_taken_0x236024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236024u;
        // 0x236028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236024) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x23602Cu;
label_23602c:
    // 0x23602c: 0xc0899bc  jal         func_2266F0
label_236030:
    if (ctx->pc == 0x236030u) {
        ctx->pc = 0x236030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23602Cu;
        // 0x236030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236034u;
        goto label_236034;
    }
    ctx->pc = 0x23602Cu;
    SET_GPR_U32(ctx, 31, 0x236034u);
    ctx->pc = 0x236030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23602Cu;
    // 0x236030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23602Cu, 0x236034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236034u;
label_236034:
    // 0x236034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236038:
    // 0x236038: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_23603c:
    if (ctx->pc == 0x23603Cu) {
        ctx->pc = 0x23603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236038u;
        // 0x23603c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236040u;
        goto label_236040;
    }
    ctx->pc = 0x236038u;
    {
        const bool branch_taken_0x236038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236038u;
        // 0x23603c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236038) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x236040u;
label_236040:
    // 0x236040: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x236040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_236044:
    // 0x236044: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x236044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_236048:
    // 0x236048: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x236048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_23604c:
    // 0x23604c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_236050:
    if (ctx->pc == 0x236050u) {
        ctx->pc = 0x236050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23604Cu;
        // 0x236050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236054u;
        goto label_236054;
    }
    ctx->pc = 0x23604Cu;
    {
        const bool branch_taken_0x23604c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23604Cu;
        // 0x236050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23604c) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x236054u;
label_236054:
    // 0x236054: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x236054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_236058:
    // 0x236058: 0x8c430620  lw          $v1, 0x620($v0)
    ctx->pc = 0x236058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1568)));
label_23605c:
    // 0x23605c: 0x1860002c  blez        $v1, . + 4 + (0x2C << 2)
label_236060:
    if (ctx->pc == 0x236060u) {
        ctx->pc = 0x236060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23605Cu;
        // 0x236060: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236064u;
        goto label_236064;
    }
    ctx->pc = 0x23605Cu;
    {
        const bool branch_taken_0x23605c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x236060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23605Cu;
        // 0x236060: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23605c) {
            ctx->pc = 0x236110u;
            goto label_236110;
        }
    }
    ctx->pc = 0x236064u;
label_236064:
    // 0x236064: 0x8e110274  lw          $s1, 0x274($s0)
    ctx->pc = 0x236064u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_236068:
    // 0x236068: 0xc0d8de2  jal         func_363788
label_23606c:
    if (ctx->pc == 0x23606Cu) {
        ctx->pc = 0x23606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236068u;
        // 0x23606c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236070u;
        goto label_236070;
    }
    ctx->pc = 0x236068u;
    SET_GPR_U32(ctx, 31, 0x236070u);
    ctx->pc = 0x23606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236068u;
    // 0x23606c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x236068u, 0x236070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236070u;
label_236070:
    // 0x236070: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_236074:
    if (ctx->pc == 0x236074u) {
        ctx->pc = 0x236074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236070u;
        // 0x236074: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236078u;
        goto label_236078;
    }
    ctx->pc = 0x236070u;
    {
        const bool branch_taken_0x236070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236070) {
            ctx->pc = 0x236074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236070u;
            // 0x236074: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x236078u;
label_236078:
    // 0x236078: 0xc0d8de2  jal         func_363788
label_23607c:
    if (ctx->pc == 0x23607Cu) {
        ctx->pc = 0x23607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236078u;
        // 0x23607c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236080u;
        goto label_236080;
    }
    ctx->pc = 0x236078u;
    SET_GPR_U32(ctx, 31, 0x236080u);
    ctx->pc = 0x23607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236078u;
    // 0x23607c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x236078u, 0x236080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236080u;
label_236080:
    // 0x236080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236084:
    // 0x236084: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_236088:
    if (ctx->pc == 0x236088u) {
        ctx->pc = 0x236088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236084u;
        // 0x236088: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23608Cu;
        goto label_23608c;
    }
    ctx->pc = 0x236084u;
    {
        const bool branch_taken_0x236084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x236084) {
            ctx->pc = 0x236088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236084u;
            // 0x236088: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x23608Cu;
label_23608c:
    // 0x23608c: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
label_236090:
    if (ctx->pc == 0x236090u) {
        ctx->pc = 0x236090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23608Cu;
        // 0x236090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236094u;
        goto label_236094;
    }
    ctx->pc = 0x23608Cu;
    {
        const bool branch_taken_0x23608c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x236090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23608Cu;
        // 0x236090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23608c) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x236094u;
label_236094:
    // 0x236094: 0x8e110278  lw          $s1, 0x278($s0)
    ctx->pc = 0x236094u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_236098:
    // 0x236098: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_23609c:
    if (ctx->pc == 0x23609Cu) {
        ctx->pc = 0x23609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236098u;
        // 0x23609c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360A0u;
        goto label_2360a0;
    }
    ctx->pc = 0x236098u;
    {
        const bool branch_taken_0x236098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236098u;
        // 0x23609c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236098) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x2360A0u;
label_2360a0:
    // 0x2360a0: 0xc098b14  jal         func_262C50
label_2360a4:
    if (ctx->pc == 0x2360A4u) {
        ctx->pc = 0x2360A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360A0u;
        // 0x2360a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360A8u;
        goto label_2360a8;
    }
    ctx->pc = 0x2360A0u;
    SET_GPR_U32(ctx, 31, 0x2360A8u);
    ctx->pc = 0x2360A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360A0u;
    // 0x2360a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C50u, 0x2360A0u, 0x2360A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360A8u;
label_2360a8:
    // 0x2360a8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2360a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2360ac:
    // 0x2360ac: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2360b0:
    if (ctx->pc == 0x2360B0u) {
        ctx->pc = 0x2360B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360ACu;
        // 0x2360b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360B4u;
        goto label_2360b4;
    }
    ctx->pc = 0x2360ACu;
    {
        const bool branch_taken_0x2360ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360ACu;
        // 0x2360b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360ac) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x2360B4u;
label_2360b4:
    // 0x2360b4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2360b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2360b8:
    // 0x2360b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2360b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2360bc:
    // 0x2360bc: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2360bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2360c0:
    // 0x2360c0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2360c4:
    if (ctx->pc == 0x2360C4u) {
        ctx->pc = 0x2360C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360C0u;
        // 0x2360c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360C8u;
        goto label_2360c8;
    }
    ctx->pc = 0x2360C0u;
    {
        const bool branch_taken_0x2360c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2360C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360C0u;
        // 0x2360c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360c0) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x2360C8u;
label_2360c8:
    // 0x2360c8: 0x8c64032c  lw          $a0, 0x32C($v1)
    ctx->pc = 0x2360c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
label_2360cc:
    // 0x2360cc: 0x8c82022c  lw          $v0, 0x22C($a0)
    ctx->pc = 0x2360ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 556)));
label_2360d0:
    // 0x2360d0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2360d4:
    if (ctx->pc == 0x2360D4u) {
        ctx->pc = 0x2360D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360D0u;
        // 0x2360d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360D8u;
        goto label_2360d8;
    }
    ctx->pc = 0x2360D0u;
    {
        const bool branch_taken_0x2360d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2360D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360D0u;
        // 0x2360d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360d0) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x2360D8u;
label_2360d8:
    // 0x2360d8: 0x8c820228  lw          $v0, 0x228($a0)
    ctx->pc = 0x2360d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_2360dc:
    // 0x2360dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2360e0:
    if (ctx->pc == 0x2360E0u) {
        ctx->pc = 0x2360E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360DCu;
        // 0x2360e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360E4u;
        goto label_2360e4;
    }
    ctx->pc = 0x2360DCu;
    {
        const bool branch_taken_0x2360dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2360E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360DCu;
        // 0x2360e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360dc) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x2360E4u;
label_2360e4:
    // 0x2360e4: 0xc06b600  jal         func_1AD800
label_2360e8:
    if (ctx->pc == 0x2360E8u) {
        ctx->pc = 0x2360E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360E4u;
        // 0x2360e8: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360ECu;
        goto label_2360ec;
    }
    ctx->pc = 0x2360E4u;
    SET_GPR_U32(ctx, 31, 0x2360ECu);
    ctx->pc = 0x2360E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360E4u;
    // 0x2360e8: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2360E4u, 0x2360ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360ECu;
label_2360ec:
    // 0x2360ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2360f0:
    if (ctx->pc == 0x2360F0u) {
        ctx->pc = 0x2360F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360ECu;
        // 0x2360f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360F4u;
        goto label_2360f4;
    }
    ctx->pc = 0x2360ECu;
    {
        const bool branch_taken_0x2360ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360ECu;
        // 0x2360f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360ec) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x2360F4u;
label_2360f4:
    // 0x2360f4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2360f8:
    if (ctx->pc == 0x2360F8u) {
        ctx->pc = 0x2360F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360F4u;
        // 0x2360f8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360FCu;
        goto label_2360fc;
    }
    ctx->pc = 0x2360F4u;
    {
        const bool branch_taken_0x2360f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360F4u;
        // 0x2360f8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360f4) {
            ctx->pc = 0x236108u;
            goto label_236108;
        }
    }
    ctx->pc = 0x2360FCu;
label_2360fc:
    // 0x2360fc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2360fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_236100:
    // 0x236100: 0xc069712  jal         func_1A5C48
label_236104:
    if (ctx->pc == 0x236104u) {
        ctx->pc = 0x236104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236100u;
        // 0x236104: 0x2406045e  addiu       $a2, $zero, 0x45E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236108u;
        goto label_236108;
    }
    ctx->pc = 0x236100u;
    SET_GPR_U32(ctx, 31, 0x236108u);
    ctx->pc = 0x236104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236100u;
    // 0x236104: 0x2406045e  addiu       $a2, $zero, 0x45E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x236100u, 0x236108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236108u;
label_236108:
    // 0x236108: 0x10000002  b           . + 4 + (0x2 << 2)
label_23610c:
    if (ctx->pc == 0x23610Cu) {
        ctx->pc = 0x23610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236108u;
        // 0x23610c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236110u;
        goto label_236110;
    }
    ctx->pc = 0x236108u;
    {
        const bool branch_taken_0x236108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236108u;
        // 0x23610c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236108) {
            ctx->pc = 0x236114u;
            goto label_236114;
        }
    }
    ctx->pc = 0x236110u;
label_236110:
    // 0x236110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236114:
    // 0x236114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236118:
    // 0x236118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23611c:
    // 0x23611c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23611cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236120:
    // 0x236120: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236120u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236124:
    // 0x236124: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x236124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236128:
    // 0x236128: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x236128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23612c:
    // 0x23612c: 0x3e00008  jr          $ra
label_236130:
    if (ctx->pc == 0x236130u) {
        ctx->pc = 0x236130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23612Cu;
        // 0x236130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236134u;
        goto label_236134;
    }
    ctx->pc = 0x23612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23612Cu;
        // 0x236130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236134u;
label_236134:
    // 0x236134: 0x0  nop
    ctx->pc = 0x236134u;
    // NOP
    ctx->pc = 0x236138u;
}
