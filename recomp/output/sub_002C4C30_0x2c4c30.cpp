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

// Function: sub_002C4C30
// Address: 0x2c4c30 - 0x2c4e28
void sub_002C4C30_0x2c4c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4C30_0x2c4c30");
#endif

    switch (ctx->pc) {
        case 0x2c4cb0u: goto label_2c4cb0;
        case 0x2c4cd8u: goto label_2c4cd8;
        case 0x2c4d14u: goto label_2c4d14;
        case 0x2c4d3cu: goto label_2c4d3c;
        case 0x2c4d8cu: goto label_2c4d8c;
        case 0x2c4da8u: goto label_2c4da8;
        case 0x2c4de0u: goto label_2c4de0;
        case 0x2c4e08u: goto label_2c4e08;
        default: break;
    }

    ctx->pc = 0x2c4c30u;

    // 0x2c4c30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4c30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4c34: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x2c4c34u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x2c4c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4c3c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2c4c3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4c40: 0x0  nop
    ctx->pc = 0x2c4c40u;
    // NOP
    // 0x2c4c44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4C44u;
    {
        const bool branch_taken_0x2c4c44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C44u;
        // 0x2c4c48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c44) {
            ctx->pc = 0x2C4C5Cu;
            goto label_2c4c5c;
        }
    }
    ctx->pc = 0x2C4C4Cu;
    // 0x2c4c4c: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x2c4c4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4c50: 0x0  nop
    ctx->pc = 0x2c4c50u;
    // NOP
    // 0x2c4c54: 0x45010072  bc1t        . + 4 + (0x72 << 2)
    ctx->pc = 0x2C4C54u;
    {
        const bool branch_taken_0x2c4c54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C54u;
        // 0x2c4c58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c54) {
            ctx->pc = 0x2C4E20u;
            goto label_2c4e20;
        }
    }
    ctx->pc = 0x2C4C5Cu;
label_2c4c5c:
    // 0x2c4c5c: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x2c4c5cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x2c4c60: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x2c4c60u;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x2c4c64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4c68: 0x0  nop
    ctx->pc = 0x2c4c68u;
    // NOP
    // 0x2c4c6c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x2C4C6Cu;
    {
        const bool branch_taken_0x2c4c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4c6c) {
            ctx->pc = 0x2C4D50u;
            goto label_2c4d50;
        }
    }
    ctx->pc = 0x2C4C74u;
    // 0x2c4c74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4c78: 0x0  nop
    ctx->pc = 0x2c4c78u;
    // NOP
    // 0x2c4c7c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x2c4c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4c80: 0x0  nop
    ctx->pc = 0x2c4c80u;
    // NOP
    // 0x2c4c84: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2C4C84u;
    {
        const bool branch_taken_0x2c4c84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4c84) {
            ctx->pc = 0x2C4CECu;
            goto label_2c4cec;
        }
    }
    ctx->pc = 0x2C4C8Cu;
    // 0x2c4c8c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c4c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4c90: 0x0  nop
    ctx->pc = 0x2c4c90u;
    // NOP
    // 0x2c4c94: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x2C4C94u;
    {
        const bool branch_taken_0x2c4c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4c94) {
            ctx->pc = 0x2C4C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C94u;
            // 0x2c4c98: 0x46001307  neg.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4CC4u;
            goto label_2c4cc4;
        }
    }
    ctx->pc = 0x2C4C9Cu;
    // 0x2c4c9c: 0x0  nop
    ctx->pc = 0x2c4c9cu;
    // NOP
    // 0x2c4ca0: 0x0  nop
    ctx->pc = 0x2c4ca0u;
    // NOP
    // 0x2c4ca4: 0x460d1303  div.s       $f12, $f2, $f13
    ctx->pc = 0x2c4ca4u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[13]); }
    // 0x2c4ca8: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2C4CA8u;
    SET_GPR_U32(ctx, 31, 0x2C4CB0u);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2C4CA8u, 0x2C4CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CB0u;
label_2c4cb0:
    // 0x2c4cb0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2c4cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2c4cb4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c4cb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4cbc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2C4CBCu;
    {
        const bool branch_taken_0x2c4cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CBCu;
        // 0x2c4cc0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cbc) {
            ctx->pc = 0x2C4E1Cu;
            goto label_2c4e1c;
        }
    }
    ctx->pc = 0x2C4CC4u;
label_2c4cc4:
    // 0x2c4cc4: 0x0  nop
    ctx->pc = 0x2c4cc4u;
    // NOP
    // 0x2c4cc8: 0x0  nop
    ctx->pc = 0x2c4cc8u;
    // NOP
    // 0x2c4ccc: 0x460d6303  div.s       $f12, $f12, $f13
    ctx->pc = 0x2c4cccu;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x2c4cd0: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2C4CD0u;
    SET_GPR_U32(ctx, 31, 0x2C4CD8u);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2C4CD0u, 0x2C4CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CD8u;
label_2c4cd8:
    // 0x2c4cd8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2c4cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2c4cdc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c4ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4ce4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2C4CE4u;
    {
        const bool branch_taken_0x2c4ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CE4u;
        // 0x2c4ce8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ce4) {
            ctx->pc = 0x2C4E1Cu;
            goto label_2c4e1c;
        }
    }
    ctx->pc = 0x2C4CECu;
label_2c4cec:
    // 0x2c4cec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c4cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4cf0: 0x0  nop
    ctx->pc = 0x2c4cf0u;
    // NOP
    // 0x2c4cf4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2C4CF4u;
    {
        const bool branch_taken_0x2c4cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4cf4) {
            ctx->pc = 0x2C4D28u;
            goto label_2c4d28;
        }
    }
    ctx->pc = 0x2C4CFCu;
    // 0x2c4cfc: 0x46006b07  neg.s       $f12, $f13
    ctx->pc = 0x2c4cfcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    // 0x2c4d00: 0x0  nop
    ctx->pc = 0x2c4d00u;
    // NOP
    // 0x2c4d04: 0x0  nop
    ctx->pc = 0x2c4d04u;
    // NOP
    // 0x2c4d08: 0x460c1303  div.s       $f12, $f2, $f12
    ctx->pc = 0x2c4d08u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
    // 0x2c4d0c: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2C4D0Cu;
    SET_GPR_U32(ctx, 31, 0x2C4D14u);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2C4D0Cu, 0x2C4D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D14u;
label_2c4d14:
    // 0x2c4d14: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x2c4d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
    // 0x2c4d18: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x2c4d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x2c4d1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4d20: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2C4D20u;
    {
        const bool branch_taken_0x2c4d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D20u;
        // 0x2c4d24: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d20) {
            ctx->pc = 0x2C4E1Cu;
            goto label_2c4e1c;
        }
    }
    ctx->pc = 0x2C4D28u;
label_2c4d28:
    // 0x2c4d28: 0x0  nop
    ctx->pc = 0x2c4d28u;
    // NOP
    // 0x2c4d2c: 0x0  nop
    ctx->pc = 0x2c4d2cu;
    // NOP
    // 0x2c4d30: 0x460d1303  div.s       $f12, $f2, $f13
    ctx->pc = 0x2c4d30u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[13]); }
    // 0x2c4d34: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2C4D34u;
    SET_GPR_U32(ctx, 31, 0x2C4D3Cu);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2C4D34u, 0x2C4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D3Cu;
label_2c4d3c:
    // 0x2c4d3c: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x2c4d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
    // 0x2c4d40: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x2c4d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x2c4d44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4d48: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C4D48u;
    {
        const bool branch_taken_0x2c4d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D48u;
        // 0x2c4d4c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d48) {
            ctx->pc = 0x2C4E1Cu;
            goto label_2c4e1c;
        }
    }
    ctx->pc = 0x2C4D50u;
label_2c4d50:
    // 0x2c4d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d54: 0x0  nop
    ctx->pc = 0x2c4d54u;
    // NOP
    // 0x2c4d58: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x2c4d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4d5c: 0x0  nop
    ctx->pc = 0x2c4d5cu;
    // NOP
    // 0x2c4d60: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4D60u;
    {
        const bool branch_taken_0x2c4d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4d60) {
            ctx->pc = 0x2C4DBCu;
            goto label_2c4dbc;
        }
    }
    ctx->pc = 0x2C4D68u;
    // 0x2c4d68: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c4d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4d6c: 0x0  nop
    ctx->pc = 0x2c4d6cu;
    // NOP
    // 0x2c4d70: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4D70u;
    {
        const bool branch_taken_0x2c4d70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4d70) {
            ctx->pc = 0x2C4D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4D70u;
            // 0x2c4d74: 0x46001307  neg.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D94u;
            goto label_2c4d94;
        }
    }
    ctx->pc = 0x2C4D78u;
    // 0x2c4d78: 0x0  nop
    ctx->pc = 0x2c4d78u;
    // NOP
    // 0x2c4d7c: 0x0  nop
    ctx->pc = 0x2c4d7cu;
    // NOP
    // 0x2c4d80: 0x46026b03  div.s       $f12, $f13, $f2
    ctx->pc = 0x2c4d80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[13], ctx->f[2]); }
    // 0x2c4d84: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2C4D84u;
    SET_GPR_U32(ctx, 31, 0x2C4D8Cu);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2C4D84u, 0x2C4D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D8Cu;
label_2c4d8c:
    // 0x2c4d8c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C4D8Cu;
    {
        const bool branch_taken_0x2c4d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D8Cu;
        // 0x2c4d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d8c) {
            ctx->pc = 0x2C4E20u;
            goto label_2c4e20;
        }
    }
    ctx->pc = 0x2C4D94u;
label_2c4d94:
    // 0x2c4d94: 0x0  nop
    ctx->pc = 0x2c4d94u;
    // NOP
    // 0x2c4d98: 0x0  nop
    ctx->pc = 0x2c4d98u;
    // NOP
    // 0x2c4d9c: 0x460c6b03  div.s       $f12, $f13, $f12
    ctx->pc = 0x2c4d9cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[13], ctx->f[12]); }
    // 0x2c4da0: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2C4DA0u;
    SET_GPR_U32(ctx, 31, 0x2C4DA8u);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2C4DA0u, 0x2C4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DA8u;
label_2c4da8:
    // 0x2c4da8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2c4da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2c4dac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c4db0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4db4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C4DB4u;
    {
        const bool branch_taken_0x2c4db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DB4u;
        // 0x2c4db8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4db4) {
            ctx->pc = 0x2C4E1Cu;
            goto label_2c4e1c;
        }
    }
    ctx->pc = 0x2C4DBCu;
label_2c4dbc:
    // 0x2c4dbc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c4dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4dc0: 0x0  nop
    ctx->pc = 0x2c4dc0u;
    // NOP
    // 0x2c4dc4: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x2C4DC4u;
    {
        const bool branch_taken_0x2c4dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4dc4) {
            ctx->pc = 0x2C4DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4DC4u;
            // 0x2c4dc8: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4DF4u;
            goto label_2c4df4;
        }
    }
    ctx->pc = 0x2C4DCCu;
    // 0x2c4dcc: 0x0  nop
    ctx->pc = 0x2c4dccu;
    // NOP
    // 0x2c4dd0: 0x0  nop
    ctx->pc = 0x2c4dd0u;
    // NOP
    // 0x2c4dd4: 0x46026b03  div.s       $f12, $f13, $f2
    ctx->pc = 0x2c4dd4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[13], ctx->f[2]); }
    // 0x2c4dd8: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2C4DD8u;
    SET_GPR_U32(ctx, 31, 0x2C4DE0u);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2C4DD8u, 0x2C4DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DE0u;
label_2c4de0:
    // 0x2c4de0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2c4de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2c4de4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c4de8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4dec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C4DECu;
    {
        const bool branch_taken_0x2c4dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DECu;
        // 0x2c4df0: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dec) {
            ctx->pc = 0x2C4E1Cu;
            goto label_2c4e1c;
        }
    }
    ctx->pc = 0x2C4DF4u;
label_2c4df4:
    // 0x2c4df4: 0x0  nop
    ctx->pc = 0x2c4df4u;
    // NOP
    // 0x2c4df8: 0x0  nop
    ctx->pc = 0x2c4df8u;
    // NOP
    // 0x2c4dfc: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x2c4dfcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x2c4e00: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x2C4E00u;
    SET_GPR_U32(ctx, 31, 0x2C4E08u);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2C4E00u, 0x2C4E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E08u;
label_2c4e08:
    // 0x2c4e08: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c4e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c4e0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c4e10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4e14: 0x0  nop
    ctx->pc = 0x2c4e14u;
    // NOP
    // 0x2c4e18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c4e18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c4e1c:
    // 0x2c4e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4e20:
    // 0x2c4e20: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E20u;
        // 0x2c4e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4E28u;
}
