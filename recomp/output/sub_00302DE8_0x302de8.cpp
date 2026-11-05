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

// Function: sub_00302DE8
// Address: 0x302de8 - 0x303100
void sub_00302DE8_0x302de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302DE8_0x302de8");
#endif

    switch (ctx->pc) {
        case 0x302e5cu: goto label_302e5c;
        case 0x302e68u: goto label_302e68;
        case 0x302e78u: goto label_302e78;
        case 0x302fd0u: goto label_302fd0;
        case 0x302fd8u: goto label_302fd8;
        case 0x303034u: goto label_303034;
        case 0x3030c4u: goto label_3030c4;
        case 0x3030dcu: goto label_3030dc;
        default: break;
    }

    ctx->pc = 0x302de8u;

    // 0x302de8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x302de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x302dec: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x302decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x302df0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x302df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x302df4: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x302df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x302df8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x302df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x302dfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x302dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e00: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x302e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x302e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x302e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e08: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x302e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x302e0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x302e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e10: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x302e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x302e14: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x302e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x302e18: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x302e18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x302e1c: 0x8e2311d0  lw          $v1, 0x11D0($s1)
    ctx->pc = 0x302e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x302e20: 0x92241170  lbu         $a0, 0x1170($s1)
    ctx->pc = 0x302e20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4464)));
    // 0x302e24: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x302e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x302e28: 0x24730040  addiu       $s3, $v1, 0x40
    ctx->pc = 0x302e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x302e2c: 0x108000a3  beqz        $a0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x302E2Cu;
    {
        const bool branch_taken_0x302e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E2Cu;
        // 0x302e30: 0x24740070  addiu       $s4, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e2c) {
            ctx->pc = 0x3030BCu;
            goto label_3030bc;
        }
    }
    ctx->pc = 0x302E34u;
    // 0x302e34: 0xc441043c  lwc1        $f1, 0x43C($v0)
    ctx->pc = 0x302e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302e38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x302e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x302e3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x302e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x302e40: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x302e40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302e44: 0x0  nop
    ctx->pc = 0x302e44u;
    // NOP
    // 0x302e48: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
    ctx->pc = 0x302E48u;
    {
        const bool branch_taken_0x302e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E48u;
        // 0x302e4c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e48) {
            ctx->pc = 0x303084u;
            goto label_303084;
        }
    }
    ctx->pc = 0x302E50u;
    // 0x302e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e54: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x302E54u;
    SET_GPR_U32(ctx, 31, 0x302E5Cu);
    ctx->pc = 0x302E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E54u;
    // 0x302e58: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x302E54u, 0x302E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E5Cu;
label_302e5c:
    // 0x302e5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e60: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x302E60u;
    SET_GPR_U32(ctx, 31, 0x302E68u);
    ctx->pc = 0x302E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E60u;
    // 0x302e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x302E60u, 0x302E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E68u;
label_302e68:
    // 0x302e68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x302E68u;
    {
        const bool branch_taken_0x302e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e68) {
            ctx->pc = 0x302E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302E68u;
            // 0x302e6c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302E7Cu;
            goto label_302e7c;
        }
    }
    ctx->pc = 0x302E70u;
    // 0x302e70: 0xc0c4900  jal         func_312400
    ctx->pc = 0x302E70u;
    SET_GPR_U32(ctx, 31, 0x302E78u);
    ctx->pc = 0x302E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E70u;
    // 0x302e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x302E70u, 0x302E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E78u;
label_302e78:
    // 0x302e78: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x302e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_302e7c:
    // 0x302e7c: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x302e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302e80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x302e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302e84: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x302e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x302e88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x302e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x302e8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x302e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302e90: 0xc4610074  lwc1        $f1, 0x74($v1)
    ctx->pc = 0x302e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302e94: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x302e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x302e98: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x302e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x302e9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x302e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302ea0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x302ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x302ea4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x302ea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x302ea8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x302ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x302eac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x302eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x302eb0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x302eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x302eb4: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x302eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x302eb8: 0xc6230374  lwc1        $f3, 0x374($s1)
    ctx->pc = 0x302eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302ebc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x302ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x302ec0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x302ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x302ec4: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x302ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x302ec8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x302ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x302ecc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x302ECCu;
    {
        const bool branch_taken_0x302ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302ecc) {
            ctx->pc = 0x302ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302ECCu;
            // 0x302ed0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302EF4u;
            goto label_302ef4;
        }
    }
    ctx->pc = 0x302ED4u;
    // 0x302ed4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x302ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x302ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302edc: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x302edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x302ee0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x302ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x302ee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302ee8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x302ee8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x302eec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x302eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x302ef0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x302ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_302ef4:
    // 0x302ef4: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x302ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x302ef8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x302ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x302efc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x302EFCu;
    {
        const bool branch_taken_0x302efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x302F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EFCu;
        // 0x302f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302efc) {
            ctx->pc = 0x302F28u;
            goto label_302f28;
        }
    }
    ctx->pc = 0x302F04u;
    // 0x302f04: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x302f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x302f08: 0x2462f858  addiu       $v0, $v1, -0x7A8
    ctx->pc = 0x302f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965336));
    // 0x302f0c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x302f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x302f10: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x302F10u;
    {
        const bool branch_taken_0x302f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302f10) {
            ctx->pc = 0x302F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302F10u;
            // 0x302f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302F28u;
            goto label_302f28;
        }
    }
    ctx->pc = 0x302F18u;
    // 0x302f18: 0x2462f852  addiu       $v0, $v1, -0x7AE
    ctx->pc = 0x302f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965330));
    // 0x302f1c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x302f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x302f20: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x302F20u;
    {
        const bool branch_taken_0x302f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302f20) {
            ctx->pc = 0x302F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302F20u;
            // 0x302f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302F28u;
            goto label_302f28;
        }
    }
    ctx->pc = 0x302F28u;
label_302f28:
    // 0x302f28: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x302F28u;
    {
        const bool branch_taken_0x302f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F28u;
        // 0x302f2c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f28) {
            ctx->pc = 0x302F50u;
            goto label_302f50;
        }
    }
    ctx->pc = 0x302F30u;
    // 0x302f30: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x302f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x302f34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x302f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x302f38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302f3c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x302f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x302f40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x302f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x302f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x302f48: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x302f48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x302f4c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x302f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_302f50:
    // 0x302f50: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x302f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x302f54: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x302f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x302f58: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x302f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x302f5c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x302F5Cu;
    {
        const bool branch_taken_0x302f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x302F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F5Cu;
        // 0x302f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f5c) {
            ctx->pc = 0x302F88u;
            goto label_302f88;
        }
    }
    ctx->pc = 0x302F64u;
    // 0x302f64: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x302f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x302f68: 0x2462f855  addiu       $v0, $v1, -0x7AB
    ctx->pc = 0x302f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965333));
    // 0x302f6c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x302f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x302f70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x302F70u;
    {
        const bool branch_taken_0x302f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302f70) {
            ctx->pc = 0x302F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302F70u;
            // 0x302f74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302F88u;
            goto label_302f88;
        }
    }
    ctx->pc = 0x302F78u;
    // 0x302f78: 0x2462f84f  addiu       $v0, $v1, -0x7B1
    ctx->pc = 0x302f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965327));
    // 0x302f7c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x302f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x302f80: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x302F80u;
    {
        const bool branch_taken_0x302f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302f80) {
            ctx->pc = 0x302F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302F80u;
            // 0x302f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302F88u;
            goto label_302f88;
        }
    }
    ctx->pc = 0x302F88u;
label_302f88:
    // 0x302f88: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x302F88u;
    {
        const bool branch_taken_0x302f88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F88u;
        // 0x302f8c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f88) {
            ctx->pc = 0x302FB0u;
            goto label_302fb0;
        }
    }
    ctx->pc = 0x302F90u;
    // 0x302f90: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x302f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x302f94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x302f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x302f98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302f9c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x302f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x302fa0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x302fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302fa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x302fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x302fa8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x302fa8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x302fac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x302facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_302fb0:
    // 0x302fb0: 0xc62c115c  lwc1        $f12, 0x115C($s1)
    ctx->pc = 0x302fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302fb4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x302fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x302fb8: 0xc62003a0  lwc1        $f0, 0x3A0($s1)
    ctx->pc = 0x302fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302fbc: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x302fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x302fc0: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x302fc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x302fc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302fc8: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x302FC8u;
    SET_GPR_U32(ctx, 31, 0x302FD0u);
    ctx->pc = 0x302FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302FC8u;
    // 0x302fcc: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x302FC8u, 0x302FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302FD0u;
label_302fd0:
    // 0x302fd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x302FD0u;
    SET_GPR_U32(ctx, 31, 0x302FD8u);
    ctx->pc = 0x302FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302FD0u;
    // 0x302fd4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x302FD0u, 0x302FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302FD8u;
label_302fd8:
    // 0x302fd8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x302fd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302fdc: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x302fdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x302fe0: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x302fe0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x302fe4: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x302fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x302fe8: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x302fe8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x302fec: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x302fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302ff0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x302ff0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302ff4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x302ff4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x302ff8: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x302ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x302ffc: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x302ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303000: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x303000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x303004: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x303004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x303008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30300c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x30300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303010: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x303010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x303014: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x303014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303018: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x303018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    // 0x30301c: 0xc62c1158  lwc1        $f12, 0x1158($s1)
    ctx->pc = 0x30301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303020: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x303020u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x303024: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x303024u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x303028: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x303028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30302c: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x30302Cu;
    SET_GPR_U32(ctx, 31, 0x303034u);
    ctx->pc = 0x303030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30302Cu;
    // 0x303030: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x30302Cu, 0x303034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303034u;
label_303034:
    // 0x303034: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x303034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x303038: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x303038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30303c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303040: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x303040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x303044: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x303044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303048: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x303048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30304c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30304cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x303050: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x303050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303054: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x303054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303058: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x303058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30305c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x30305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303060: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x303060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303064: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x303064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x303068: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x303068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x30306c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x30306cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x303070: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x303070u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x303074: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x303074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303078: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303078u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30307c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30307Cu;
    {
        const bool branch_taken_0x30307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30307Cu;
        // 0x303080: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30307c) {
            ctx->pc = 0x3030E0u;
            goto label_3030e0;
        }
    }
    ctx->pc = 0x303084u;
label_303084:
    // 0x303084: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x303084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303088: 0x0  nop
    ctx->pc = 0x303088u;
    // NOP
    // 0x30308c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x30308Cu;
    {
        const bool branch_taken_0x30308c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30308c) {
            ctx->pc = 0x303090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30308Cu;
            // 0x303090: 0x24420420  addiu       $v0, $v0, 0x420 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3030ACu;
            goto label_3030ac;
        }
    }
    ctx->pc = 0x303094u;
    // 0x303094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x303098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30309c: 0x0  nop
    ctx->pc = 0x30309cu;
    // NOP
    // 0x3030a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3030a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3030a4: 0xe440043c  swc1        $f0, 0x43C($v0)
    ctx->pc = 0x3030a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1084), bits); }
    // 0x3030a8: 0x24420420  addiu       $v0, $v0, 0x420
    ctx->pc = 0x3030a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
label_3030ac:
    // 0x3030ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3030acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3030b0: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x3030b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3030b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3030B4u;
    {
        const bool branch_taken_0x3030b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3030B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030B4u;
        // 0x3030b8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030b4) {
            ctx->pc = 0x3030E0u;
            goto label_3030e0;
        }
    }
    ctx->pc = 0x3030BCu;
label_3030bc:
    // 0x3030bc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3030BCu;
    SET_GPR_U32(ctx, 31, 0x3030C4u);
    ctx->pc = 0x3030C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030BCu;
    // 0x3030c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3030BCu, 0x3030C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030C4u;
label_3030c4:
    // 0x3030c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3030c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3030c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3030ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3030d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030d4: 0xc0c05e4  jal         func_301790
    ctx->pc = 0x3030D4u;
    SET_GPR_U32(ctx, 31, 0x3030DCu);
    ctx->pc = 0x3030D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030D4u;
    // 0x3030d8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301790u, 0x3030D4u, 0x3030DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030DCu;
label_3030dc:
    // 0x3030dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3030dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3030e0:
    // 0x3030e0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3030e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3030e4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3030e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3030e8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x3030e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3030ec: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3030ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3030f0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x3030f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3030f4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3030f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3030f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3030F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030F8u;
        // 0x3030fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3030F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303100u;
}
