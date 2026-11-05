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

// Function: sub_001E9990
// Address: 0x1e9990 - 0x1e9da0
void sub_001E9990_0x1e9990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9990_0x1e9990");
#endif

    switch (ctx->pc) {
        case 0x1e99ecu: goto label_1e99ec;
        case 0x1e9a30u: goto label_1e9a30;
        case 0x1e9a8cu: goto label_1e9a8c;
        case 0x1e9b00u: goto label_1e9b00;
        case 0x1e9b14u: goto label_1e9b14;
        case 0x1e9b60u: goto label_1e9b60;
        case 0x1e9b74u: goto label_1e9b74;
        case 0x1e9ba8u: goto label_1e9ba8;
        case 0x1e9bb0u: goto label_1e9bb0;
        case 0x1e9bd0u: goto label_1e9bd0;
        case 0x1e9be0u: goto label_1e9be0;
        case 0x1e9becu: goto label_1e9bec;
        case 0x1e9bfcu: goto label_1e9bfc;
        case 0x1e9cb0u: goto label_1e9cb0;
        case 0x1e9cc4u: goto label_1e9cc4;
        case 0x1e9d00u: goto label_1e9d00;
        case 0x1e9d18u: goto label_1e9d18;
        case 0x1e9d5cu: goto label_1e9d5c;
        default: break;
    }

    ctx->pc = 0x1e9990u;

    // 0x1e9990: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1e9990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1e9994: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x1e9994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x1e9998: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1e9998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e999c: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x1e999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x1e99a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e99a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99a4: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x1e99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x1e99a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e99a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99ac: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x1e99acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x1e99b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e99b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99b4: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x1e99b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x1e99b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e99b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99bc: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x1e99bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x1e99c0: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x1e99c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x1e99c4: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x1e99c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x1e99c8: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x1e99c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x1e99cc: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x1e99ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x1e99d0: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x1e99d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x1e99d4: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1e99d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1e99d8: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1e99d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1e99dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e99dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e99e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e99e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e99e4: 0xc0854d4  jal         func_215350
    ctx->pc = 0x1E99E4u;
    SET_GPR_U32(ctx, 31, 0x1E99ECu);
    ctx->pc = 0x1E99E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99E4u;
    // 0x1e99e8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x1E99E4u, 0x1E99ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99ECu;
label_1e99ec:
    // 0x1e99ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e99f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e99f4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E99F4u;
    {
        const bool branch_taken_0x1e99f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99F4u;
        // 0x1e99f8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99f4) {
            ctx->pc = 0x1E9A00u;
            goto label_1e9a00;
        }
    }
    ctx->pc = 0x1E99FCu;
    // 0x1e99fc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1e99fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e9a00:
    // 0x1e9a00: 0x122000d1  beqz        $s1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1E9A00u;
    {
        const bool branch_taken_0x1e9a00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A00u;
        // 0x1e9a04: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a00) {
            ctx->pc = 0x1E9D48u;
            goto label_1e9d48;
        }
    }
    ctx->pc = 0x1E9A08u;
    // 0x1e9a08: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x1e9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1e9a0c: 0xc455d9c4  lwc1        $f21, -0x263C($v0)
    ctx->pc = 0x1e9a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e9a10: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1e9a10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9a14: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1e9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e9a18: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x1e9a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x1e9a1c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1e9a20: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x1e9a20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e9a24: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x1e9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1e9a28: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1e9a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1e9a2c: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x1e9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1e9a30:
    // 0x1e9a30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e9a34: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1e9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1e9a38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e9a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e9a3c: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1E9A3Cu;
    {
        const bool branch_taken_0x1e9a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A3Cu;
        // 0x1e9a40: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a3c) {
            ctx->pc = 0x1E9D24u;
            goto label_1e9d24;
        }
    }
    ctx->pc = 0x1E9A44u;
    // 0x1e9a44: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1e9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1e9a48: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1e9a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1e9a4c: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1e9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1e9a50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1e9a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1e9a54: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x1e9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B20u));
    // 0x1e9a58: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1e9a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e9a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9a60: 0xc4b4d9c4  lwc1        $f20, -0x263C($a1)
    ctx->pc = 0x1e9a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294957508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9a64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9a68: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1e9a68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a6c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e9a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9a70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a74: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e9a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e9a78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a7c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1e9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1e9a80: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1e9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e9a84: 0xc0788c0  jal         func_1E2300
    ctx->pc = 0x1E9A84u;
    SET_GPR_U32(ctx, 31, 0x1E9A8Cu);
    ctx->pc = 0x1E9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A84u;
    // 0x1e9a88: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2300u, 0x1E9A84u, 0x1E9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A8Cu;
label_1e9a8c:
    // 0x1e9a8c: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1E9A8Cu;
    {
        const bool branch_taken_0x1e9a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A8Cu;
        // 0x1e9a90: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a8c) {
            ctx->pc = 0x1E9D24u;
            goto label_1e9d24;
        }
    }
    ctx->pc = 0x1E9A94u;
    // 0x1e9a94: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1e9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1e9a98: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1e9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e9a9c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1e9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e9aa0: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x1e9aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e9aa4: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x1e9aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e9aa8: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1e9aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1e9aac: 0x8c75000c  lw          $s5, 0xC($v1)
    ctx->pc = 0x1e9aacu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e9ab0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e9ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e9ab4: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x1e9ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1e9ab8: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1e9ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1e9abc: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x1e9abcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e9ac0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1e9ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1e9ac4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1e9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1e9ac8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e9ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1e9acc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1e9accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1e9ad0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1e9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1e9ad4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1e9ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1e9ad8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1e9ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1e9adc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e9adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1e9ae0: 0xae1e0044  sw          $fp, 0x44($s0)
    ctx->pc = 0x1e9ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 30));
    // 0x1e9ae4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1e9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1e9ae8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9AE8u;
    {
        const bool branch_taken_0x1e9ae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AE8u;
        // 0x1e9aec: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ae8) {
            ctx->pc = 0x1E9B08u;
            goto label_1e9b08;
        }
    }
    ctx->pc = 0x1E9AF0u;
    // 0x1e9af0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9af4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9af8: 0xc07a3ee  jal         func_1E8FB8
    ctx->pc = 0x1E9AF8u;
    SET_GPR_U32(ctx, 31, 0x1E9B00u);
    ctx->pc = 0x1E9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AF8u;
    // 0x1e9afc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8FB8u, 0x1E9AF8u, 0x1E9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B00u;
label_1e9b00:
    // 0x1e9b00: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1E9B00u;
    {
        const bool branch_taken_0x1e9b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B00u;
        // 0x1e9b04: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b00) {
            ctx->pc = 0x1E9D08u;
            goto label_1e9d08;
        }
    }
    ctx->pc = 0x1E9B08u;
label_1e9b08:
    // 0x1e9b08: 0xe7b500d0  swc1        $f21, 0xD0($sp)
    ctx->pc = 0x1e9b08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e9b0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E9B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B14u);
    ctx->pc = 0x1E9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B0Cu;
    // 0x1e9b10: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E9B0Cu, 0x1E9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B14u;
label_1e9b14:
    // 0x1e9b14: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x1e9b14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1e9b18: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1e9b18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1e9b1c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1e9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1e9b20: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1e9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1e9b24: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1e9b28: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1e9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1e9b2c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1e9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1e9b30: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1e9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1e9b34: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x1e9b34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e9b38: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1e9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1e9b3c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1e9b40: 0xae1e0044  sw          $fp, 0x44($s0)
    ctx->pc = 0x1e9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 30));
    // 0x1e9b44: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1e9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1e9b48: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9B48u;
    {
        const bool branch_taken_0x1e9b48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B48u;
        // 0x1e9b4c: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b48) {
            ctx->pc = 0x1E9B98u;
            goto label_1e9b98;
        }
    }
    ctx->pc = 0x1E9B50u;
    // 0x1e9b50: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e9b54: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1E9B54u;
    {
        const bool branch_taken_0x1e9b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B54u;
        // 0x1e9b58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b54) {
            ctx->pc = 0x1E9D20u;
            goto label_1e9d20;
        }
    }
    ctx->pc = 0x1E9B5Cu;
    // 0x1e9b5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e9b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b60:
    // 0x1e9b60: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1e9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e9b64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e9b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1e9b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e9b6c: 0xc0791de  jal         func_1E4778
    ctx->pc = 0x1E9B6Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B74u);
    ctx->pc = 0x1E9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B6Cu;
    // 0x1e9b70: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4778u, 0x1E9B6Cu, 0x1E9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B74u;
label_1e9b74:
    // 0x1e9b74: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x1E9B74u;
    {
        const bool branch_taken_0x1e9b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b74) {
            ctx->pc = 0x1E9B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9B74u;
            // 0x1e9b78: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9D08u;
            goto label_1e9d08;
        }
    }
    ctx->pc = 0x1E9B7Cu;
    // 0x1e9b7c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e9b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e9b80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e9b84: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e9b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9b88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E9B88u;
    {
        const bool branch_taken_0x1e9b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B88u;
        // 0x1e9b8c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b88) {
            ctx->pc = 0x1E9B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9b60;
        }
    }
    ctx->pc = 0x1E9B90u;
    // 0x1e9b90: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1E9B90u;
    {
        const bool branch_taken_0x1e9b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B90u;
        // 0x1e9b94: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b90) {
            ctx->pc = 0x1E9D24u;
            goto label_1e9d24;
        }
    }
    ctx->pc = 0x1E9B98u;
label_1e9b98:
    // 0x1e9b98: 0x12600053  beqz        $s3, . + 4 + (0x53 << 2)
    ctx->pc = 0x1E9B98u;
    {
        const bool branch_taken_0x1e9b98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b98) {
            ctx->pc = 0x1E9CE8u;
            goto label_1e9ce8;
        }
    }
    ctx->pc = 0x1E9BA0u;
    // 0x1e9ba0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E9BA0u;
    SET_GPR_U32(ctx, 31, 0x1E9BA8u);
    ctx->pc = 0x1E9BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BA0u;
    // 0x1e9ba4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E9BA0u, 0x1E9BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BA8u;
label_1e9ba8:
    // 0x1e9ba8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E9BA8u;
    SET_GPR_U32(ctx, 31, 0x1E9BB0u);
    ctx->pc = 0x1E9BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BA8u;
    // 0x1e9bac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E9BA8u, 0x1E9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BB0u;
label_1e9bb0:
    // 0x1e9bb0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1e9bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1e9bb4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1e9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1e9bb8: 0x7fa00050  sq          $zero, 0x50($sp)
    ctx->pc = 0x1e9bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 0));
    // 0x1e9bbc: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1e9bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1e9bc0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1e9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1e9bc4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e9bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9bc8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1E9BC8u;
    SET_GPR_U32(ctx, 31, 0x1E9BD0u);
    ctx->pc = 0x1E9BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BC8u;
    // 0x1e9bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1E9BC8u, 0x1E9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BD0u;
label_1e9bd0:
    // 0x1e9bd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9BD0u;
    {
        const bool branch_taken_0x1e9bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BD0u;
        // 0x1e9bd4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bd0) {
            ctx->pc = 0x1E9BE4u;
            goto label_1e9be4;
        }
    }
    ctx->pc = 0x1E9BD8u;
    // 0x1e9bd8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1E9BD8u;
    SET_GPR_U32(ctx, 31, 0x1E9BE0u);
    ctx->pc = 0x1E9BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BD8u;
    // 0x1e9bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1E9BD8u, 0x1E9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BE0u;
label_1e9be0:
    // 0x1e9be0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1e9be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1e9be4:
    // 0x1e9be4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1E9BE4u;
    SET_GPR_U32(ctx, 31, 0x1E9BECu);
    ctx->pc = 0x1E9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BE4u;
    // 0x1e9be8: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1E9BE4u, 0x1E9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BECu;
label_1e9bec:
    // 0x1e9bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9bf0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e9bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9bf4: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x1E9BF4u;
    SET_GPR_U32(ctx, 31, 0x1E9BFCu);
    ctx->pc = 0x1E9BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BF4u;
    // 0x1e9bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x1E9BF4u, 0x1E9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BFCu;
label_1e9bfc:
    // 0x1e9bfc: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1e9bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9c00: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1e9c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e9c04: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e9c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e9c08: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1e9c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e9c0c: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1e9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1e9c10: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1e9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e9c14: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1e9c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1e9c18: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1e9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1e9c1c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e9c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9c20: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e9c20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9c24: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e9c24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9c28: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e9c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9c2c: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1e9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1e9c30: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1e9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e9c34: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1e9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e9c38: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1e9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1e9c3c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e9c3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9c40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e9c40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9c44: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e9c44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9c48: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e9c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9c4c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9c50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e9c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9c54: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1e9c54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e9c58: 0xdae30010  lqc2        $vf3, 0x10($s7)
    ctx->pc = 0x1e9c58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1e9c5c: 0xdae40020  lqc2        $vf4, 0x20($s7)
    ctx->pc = 0x1e9c5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x1e9c60: 0xdae50030  lqc2        $vf5, 0x30($s7)
    ctx->pc = 0x1e9c60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x1e9c64: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e9c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e9c68: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e9c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e9c6c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e9c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e9c70: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1e9c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e9c74: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1e9c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e9c78: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e9c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9c7c: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1e9c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e9c80: 0xdae30010  lqc2        $vf3, 0x10($s7)
    ctx->pc = 0x1e9c80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1e9c84: 0xdae40020  lqc2        $vf4, 0x20($s7)
    ctx->pc = 0x1e9c84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x1e9c88: 0xdae50030  lqc2        $vf5, 0x30($s7)
    ctx->pc = 0x1e9c88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x1e9c8c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e9c8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e9c90: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e9c90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e9c94: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e9c94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e9c98: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x1e9c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e9c9c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1e9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e9ca0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E9CA0u;
    {
        const bool branch_taken_0x1e9ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CA0u;
        // 0x1e9ca4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ca0) {
            ctx->pc = 0x1E9D48u;
            goto label_1e9d48;
        }
    }
    ctx->pc = 0x1E9CA8u;
    // 0x1e9ca8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e9ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9cac: 0x0  nop
    ctx->pc = 0x1e9cacu;
    // NOP
label_1e9cb0:
    // 0x1e9cb0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1e9cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e9cb4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e9cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9cb8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e9cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9cbc: 0xc0791de  jal         func_1E4778
    ctx->pc = 0x1E9CBCu;
    SET_GPR_U32(ctx, 31, 0x1E9CC4u);
    ctx->pc = 0x1E9CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CBCu;
    // 0x1e9cc0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4778u, 0x1E9CBCu, 0x1E9CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CC4u;
label_1e9cc4:
    // 0x1e9cc4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E9CC4u;
    {
        const bool branch_taken_0x1e9cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9cc4) {
            ctx->pc = 0x1E9CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9CC4u;
            // 0x1e9cc8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9D08u;
            goto label_1e9d08;
        }
    }
    ctx->pc = 0x1E9CCCu;
    // 0x1e9ccc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1e9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e9cd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e9cd4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e9cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9cd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E9CD8u;
    {
        const bool branch_taken_0x1e9cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CD8u;
        // 0x1e9cdc: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cd8) {
            ctx->pc = 0x1E9CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9cb0;
        }
    }
    ctx->pc = 0x1E9CE0u;
    // 0x1e9ce0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E9CE0u;
    {
        const bool branch_taken_0x1e9ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CE0u;
        // 0x1e9ce4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ce0) {
            ctx->pc = 0x1E9D4Cu;
            goto label_1e9d4c;
        }
    }
    ctx->pc = 0x1E9CE8u;
label_1e9ce8:
    // 0x1e9ce8: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9CE8u;
    {
        const bool branch_taken_0x1e9ce8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CE8u;
        // 0x1e9cec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ce8) {
            ctx->pc = 0x1E9D20u;
            goto label_1e9d20;
        }
    }
    ctx->pc = 0x1E9CF0u;
    // 0x1e9cf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9cf4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1e9cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9cf8: 0xc07a498  jal         func_1E9260
    ctx->pc = 0x1E9CF8u;
    SET_GPR_U32(ctx, 31, 0x1E9D00u);
    ctx->pc = 0x1E9CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CF8u;
    // 0x1e9cfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9260u, 0x1E9CF8u, 0x1E9D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D00u;
label_1e9d00:
    // 0x1e9d00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9D00u;
    {
        const bool branch_taken_0x1e9d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D00u;
        // 0x1e9d04: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d00) {
            ctx->pc = 0x1E9D20u;
            goto label_1e9d20;
        }
    }
    ctx->pc = 0x1E9D08u;
label_1e9d08:
    // 0x1e9d08: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E9D08u;
    {
        const bool branch_taken_0x1e9d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D08u;
        // 0x1e9d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d08) {
            ctx->pc = 0x1E9D60u;
            goto label_1e9d60;
        }
    }
    ctx->pc = 0x1E9D10u;
    // 0x1e9d10: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E9D10u;
    SET_GPR_U32(ctx, 31, 0x1E9D18u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E9D10u, 0x1E9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D18u;
label_1e9d18:
    // 0x1e9d18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9D18u;
    {
        const bool branch_taken_0x1e9d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D18u;
        // 0x1e9d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d18) {
            ctx->pc = 0x1E9D60u;
            goto label_1e9d60;
        }
    }
    ctx->pc = 0x1E9D20u;
label_1e9d20:
    // 0x1e9d20: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e9d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e9d24:
    // 0x1e9d24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9d28: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9D28u;
    {
        const bool branch_taken_0x1e9d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D28u;
        // 0x1e9d2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d28) {
            ctx->pc = 0x1E9D40u;
            goto label_1e9d40;
        }
    }
    ctx->pc = 0x1E9D30u;
    // 0x1e9d30: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1e9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e9d34: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9D34u;
    {
        const bool branch_taken_0x1e9d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D34u;
        // 0x1e9d38: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d34) {
            ctx->pc = 0x1E9D40u;
            goto label_1e9d40;
        }
    }
    ctx->pc = 0x1E9D3Cu;
    // 0x1e9d3c: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x1e9d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e9d40:
    // 0x1e9d40: 0x5620ff3b  bnel        $s1, $zero, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x1E9D40u;
    {
        const bool branch_taken_0x1e9d40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d40) {
            ctx->pc = 0x1E9D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9D40u;
            // 0x1e9d44: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9a30;
        }
    }
    ctx->pc = 0x1E9D48u;
label_1e9d48:
    // 0x1e9d48: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e9d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9d4c:
    // 0x1e9d4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9D4Cu;
    {
        const bool branch_taken_0x1e9d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D4Cu;
        // 0x1e9d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d4c) {
            ctx->pc = 0x1E9D60u;
            goto label_1e9d60;
        }
    }
    ctx->pc = 0x1E9D54u;
    // 0x1e9d54: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E9D54u;
    SET_GPR_U32(ctx, 31, 0x1E9D5Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E9D54u, 0x1E9D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D5Cu;
label_1e9d5c:
    // 0x1e9d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d60:
    // 0x1e9d60: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x1e9d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e9d64: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x1e9d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1e9d68: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x1e9d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e9d6c: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x1e9d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1e9d70: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x1e9d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e9d74: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x1e9d74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1e9d78: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x1e9d78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e9d7c: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x1e9d7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1e9d80: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x1e9d80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e9d84: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x1e9d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1e9d88: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1e9d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e9d8c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1e9d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D90u;
        // 0x1e9d94: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D98u;
    // 0x1e9d98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e9d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9d9c: 0x0  nop
    ctx->pc = 0x1e9d9cu;
    // NOP
    ctx->pc = 0x1e9da0u;
}
