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

// Function: sub_00322A58
// Address: 0x322a58 - 0x322c30
void sub_00322A58_0x322a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322A58_0x322a58");
#endif

    switch (ctx->pc) {
        case 0x322a94u: goto label_322a94;
        case 0x322b00u: goto label_322b00;
        case 0x322b20u: goto label_322b20;
        case 0x322b64u: goto label_322b64;
        default: break;
    }

    ctx->pc = 0x322a58u;

    // 0x322a58: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x322a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x322a5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322a60: 0xffb20850  sd          $s2, 0x850($sp)
    ctx->pc = 0x322a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2128), GPR_U64(ctx, 18));
    // 0x322a64: 0x8c52bd48  lw          $s2, -0x42B8($v0)
    ctx->pc = 0x322a64u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x322a68: 0xffb30858  sd          $s3, 0x858($sp)
    ctx->pc = 0x322a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2136), GPR_U64(ctx, 19));
    // 0x322a6c: 0xffb00840  sd          $s0, 0x840($sp)
    ctx->pc = 0x322a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 16));
    // 0x322a70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x322a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a74: 0xffb10848  sd          $s1, 0x848($sp)
    ctx->pc = 0x322a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2120), GPR_U64(ctx, 17));
    // 0x322a78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x322a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a7c: 0xffb40860  sd          $s4, 0x860($sp)
    ctx->pc = 0x322a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2144), GPR_U64(ctx, 20));
    // 0x322a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x322a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a84: 0xffb50868  sd          $s5, 0x868($sp)
    ctx->pc = 0x322a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2152), GPR_U64(ctx, 21));
    // 0x322a88: 0xffbf0870  sd          $ra, 0x870($sp)
    ctx->pc = 0x322a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 31));
    // 0x322a8c: 0xc0c2c9e  jal         func_30B278
    ctx->pc = 0x322A8Cu;
    SET_GPR_U32(ctx, 31, 0x322A94u);
    ctx->pc = 0x322A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A8Cu;
    // 0x322a90: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B278u, 0x322A8Cu, 0x322A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A94u;
label_322a94:
    // 0x322a94: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x322a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x322a98: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x322a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x322a9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x322a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322aa0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x322aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322aa4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x322aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322aac: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x322aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x322ab0: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x322ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x322ab4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x322ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x322ab8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x322ab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322abc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x322abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322ac0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x322ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x322ac4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x322ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322ac8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x322ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x322acc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x322accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322ad0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x322ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x322ad4: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x322ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x322ad8: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x322ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322adc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x322adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x322ae0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x322ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x322ae4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x322ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322ae8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x322ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x322aec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x322aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322af0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x322af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x322af4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x322af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322af8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x322AF8u;
    SET_GPR_U32(ctx, 31, 0x322B00u);
    ctx->pc = 0x322AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322AF8u;
    // 0x322afc: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x322AF8u, 0x322B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B00u;
label_322b00:
    // 0x322b00: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x322b00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x322b04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x322b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x322b08: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x322b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x322b0c: 0x7fa30820  sq          $v1, 0x820($sp)
    ctx->pc = 0x322b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 3));
    // 0x322b10: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x322b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
    // 0x322b14: 0xafb0083c  sw          $s0, 0x83C($sp)
    ctx->pc = 0x322b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2108), GPR_U32(ctx, 16));
    // 0x322b18: 0xafa4082c  sw          $a0, 0x82C($sp)
    ctx->pc = 0x322b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2092), GPR_U32(ctx, 4));
    // 0x322b1c: 0x0  nop
    ctx->pc = 0x322b1cu;
    // NOP
label_322b20:
    // 0x322b20: 0x8fa3082c  lw          $v1, 0x82C($sp)
    ctx->pc = 0x322b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2092)));
    // 0x322b24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x322b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x322b28: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x322B28u;
    {
        const bool branch_taken_0x322b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x322B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B28u;
        // 0x322b2c: 0x8fa6082c  lw          $a2, 0x82C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b28) {
            ctx->pc = 0x322B6Cu;
            goto label_322b6c;
        }
    }
    ctx->pc = 0x322B30u;
    // 0x322b30: 0x8fa3083c  lw          $v1, 0x83C($sp)
    ctx->pc = 0x322b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2108)));
    // 0x322b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x322b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322b3c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x322b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x322b40: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x322b40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x322b44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x322B44u;
    {
        const bool branch_taken_0x322b44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B44u;
        // 0x322b48: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b44) {
            ctx->pc = 0x322B54u;
            goto label_322b54;
        }
    }
    ctx->pc = 0x322B4Cu;
    // 0x322b4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x322B4Cu;
    {
        const bool branch_taken_0x322b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B4Cu;
        // 0x322b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b4c) {
            ctx->pc = 0x322B5Cu;
            goto label_322b5c;
        }
    }
    ctx->pc = 0x322B54u;
label_322b54:
    // 0x322b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x322b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b58: 0x27a50820  addiu       $a1, $sp, 0x820
    ctx->pc = 0x322b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
label_322b5c:
    // 0x322b5c: 0xc0c2ca2  jal         func_30B288
    ctx->pc = 0x322B5Cu;
    SET_GPR_U32(ctx, 31, 0x322B64u);
    ctx->pc = 0x30B288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B288u, 0x322B5Cu, 0x322B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B64u;
label_322b64:
    // 0x322b64: 0xafa2082c  sw          $v0, 0x82C($sp)
    ctx->pc = 0x322b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2092), GPR_U32(ctx, 2));
    // 0x322b68: 0x8fa6082c  lw          $a2, 0x82C($sp)
    ctx->pc = 0x322b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2092)));
label_322b6c:
    // 0x322b6c: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x322B6Cu;
    {
        const bool branch_taken_0x322b6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B6Cu;
        // 0x322b70: 0x8fa4083c  lw          $a0, 0x83C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b6c) {
            ctx->pc = 0x322BF0u;
            goto label_322bf0;
        }
    }
    ctx->pc = 0x322B74u;
    // 0x322b74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x322b74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b78: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x322b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322b7c: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x322b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x322b80: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x322b80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x322b84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x322B84u;
    {
        const bool branch_taken_0x322b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B84u;
        // 0x322b88: 0x7ba20820  lq          $v0, 0x820($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b84) {
            ctx->pc = 0x322BA0u;
            goto label_322ba0;
        }
    }
    ctx->pc = 0x322B8Cu;
    // 0x322b8c: 0xac660050  sw          $a2, 0x50($v1)
    ctx->pc = 0x322b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 6));
    // 0x322b90: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x322b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x322b94: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x322b94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x322b98: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x322B98u;
    {
        const bool branch_taken_0x322b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B98u;
        // 0x322b9c: 0xae630040  sw          $v1, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b98) {
            ctx->pc = 0x322BF0u;
            goto label_322bf0;
        }
    }
    ctx->pc = 0x322BA0u;
label_322ba0:
    // 0x322ba0: 0x24030299  addiu       $v1, $zero, 0x299
    ctx->pc = 0x322ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
    // 0x322ba4: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x322ba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x322ba8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x322ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x322bac: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x322bacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x322bb0: 0x7ba20830  lq          $v0, 0x830($sp)
    ctx->pc = 0x322bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x322bb4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x322bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x322bb8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x322bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x322bbc: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x322bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x322bc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x322bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322bc4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x322bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322bc8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x322bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x322bcc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x322bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x322bd0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x322bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x322bd4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x322bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x322bd8: 0xafa2083c  sw          $v0, 0x83C($sp)
    ctx->pc = 0x322bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2108), GPR_U32(ctx, 2));
    // 0x322bdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x322bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322be0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x322be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322be4: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x322be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x322be8: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x322BE8u;
    {
        const bool branch_taken_0x322be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BE8u;
        // 0x322bec: 0xe4400820  swc1        $f0, 0x820($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2080), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x322be8) {
            ctx->pc = 0x322B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322b20;
        }
    }
    ctx->pc = 0x322BF0u;
label_322bf0:
    // 0x322bf0: 0x12350006  beq         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x322BF0u;
    {
        const bool branch_taken_0x322bf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x322BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BF0u;
        // 0x322bf4: 0x2631ffe0  addiu       $s1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322bf0) {
            ctx->pc = 0x322C0Cu;
            goto label_322c0c;
        }
    }
    ctx->pc = 0x322BF8u;
    // 0x322bf8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x322bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322bfc: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x322bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
    // 0x322c00: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x322c00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x322c04: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x322C04u;
    {
        const bool branch_taken_0x322c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C04u;
        // 0x322c08: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c04) {
            ctx->pc = 0x322B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322b20;
        }
    }
    ctx->pc = 0x322C0Cu;
label_322c0c:
    // 0x322c0c: 0xdfb00840  ld          $s0, 0x840($sp)
    ctx->pc = 0x322c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x322c10: 0xdfb10848  ld          $s1, 0x848($sp)
    ctx->pc = 0x322c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2120)));
    // 0x322c14: 0xdfb20850  ld          $s2, 0x850($sp)
    ctx->pc = 0x322c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x322c18: 0xdfb30858  ld          $s3, 0x858($sp)
    ctx->pc = 0x322c18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2136)));
    // 0x322c1c: 0xdfb40860  ld          $s4, 0x860($sp)
    ctx->pc = 0x322c1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x322c20: 0xdfb50868  ld          $s5, 0x868($sp)
    ctx->pc = 0x322c20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2152)));
    // 0x322c24: 0xdfbf0870  ld          $ra, 0x870($sp)
    ctx->pc = 0x322c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x322c28: 0x3e00008  jr          $ra
    ctx->pc = 0x322C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C28u;
        // 0x322c2c: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322C30u;
}
