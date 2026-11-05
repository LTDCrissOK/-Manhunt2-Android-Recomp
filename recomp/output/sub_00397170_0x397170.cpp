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

// Function: sub_00397170
// Address: 0x397170 - 0x397300
void sub_00397170_0x397170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397170_0x397170");
#endif

    switch (ctx->pc) {
        case 0x3971b8u: goto label_3971b8;
        case 0x3971c8u: goto label_3971c8;
        case 0x3971d8u: goto label_3971d8;
        case 0x397278u: goto label_397278;
        case 0x39728cu: goto label_39728c;
        case 0x39729cu: goto label_39729c;
        case 0x3972a4u: goto label_3972a4;
        case 0x3972acu: goto label_3972ac;
        case 0x3972b4u: goto label_3972b4;
        case 0x3972c4u: goto label_3972c4;
        case 0x3972d8u: goto label_3972d8;
        default: break;
    }

    ctx->pc = 0x397170u;

    // 0x397170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x397174: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397178: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x397178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x39717c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x39717cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x397180: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x397180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x397184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397188: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x397188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x39718c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39718cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x397190: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x397190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x397194: 0x244218c0  addiu       $v0, $v0, 0x18C0
    ctx->pc = 0x397194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6336));
    // 0x397198: 0x8e4518c4  lw          $a1, 0x18C4($s2)
    ctx->pc = 0x397198u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4018C4u));
    // 0x39719c: 0x2463191c  addiu       $v1, $v1, 0x191C
    ctx->pc = 0x39719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6428));
    // 0x3971a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3971a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4018C0u));
    // 0x3971a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3971a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40191Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40191Cu, _value); } while (0);
    // 0x3971a8: 0x54a0004c  bnel        $a1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x3971A8u;
    {
        const bool branch_taken_0x3971a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3971a8) {
            ctx->pc = 0x3971ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3971A8u;
            // 0x3971ac: 0x264318c4  addiu       $v1, $s2, 0x18C4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6340));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3972DCu;
            goto label_3972dc;
        }
    }
    ctx->pc = 0x3971B0u;
    // 0x3971b0: 0xc0eb47a  jal         func_3AD1E8
    ctx->pc = 0x3971B0u;
    SET_GPR_U32(ctx, 31, 0x3971B8u);
    ctx->pc = 0x3AD1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD1E8u, 0x3971B0u, 0x3971B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3971B8u;
label_3971b8:
    // 0x3971b8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x3971b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x3971bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3971bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3971c0: 0xc0eb3e0  jal         func_3ACF80
    ctx->pc = 0x3971C0u;
    SET_GPR_U32(ctx, 31, 0x3971C8u);
    ctx->pc = 0x3971C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3971C0u;
    // 0x3971c4: 0x248467b8  addiu       $a0, $a0, 0x67B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACF80u, 0x3971C0u, 0x3971C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3971C8u;
label_3971c8:
    // 0x3971c8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x3971c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x3971cc: 0x24846840  addiu       $a0, $a0, 0x6840
    ctx->pc = 0x3971ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26688));
    // 0x3971d0: 0xc0eb3e6  jal         func_3ACF98
    ctx->pc = 0x3971D0u;
    SET_GPR_U32(ctx, 31, 0x3971D8u);
    ctx->pc = 0x3971D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3971D0u;
    // 0x3971d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACF98u, 0x3971D0u, 0x3971D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3971D8u;
label_3971d8:
    // 0x3971d8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3971d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3971dc: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3971dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3971e0: 0x24426508  addiu       $v0, $v0, 0x6508
    ctx->pc = 0x3971e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25864));
    // 0x3971e4: 0x24636510  addiu       $v1, $v1, 0x6510
    ctx->pc = 0x3971e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25872));
    // 0x3971e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3971e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x65650Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65650Cu, _value); } while (0);
    // 0x3971ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3971ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x656508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656508u, _value); } while (0);
    // 0x3971f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3971f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x656514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656514u, _value); } while (0);
    // 0x3971f4: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3971F4u;
    {
        const bool branch_taken_0x3971f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3971F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971F4u;
        // 0x3971f8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3971f4) {
            ctx->pc = 0x397238u;
            goto label_397238;
        }
    }
    ctx->pc = 0x3971FCu;
    // 0x3971fc: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3971fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x397200: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x397200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x397204: 0x262418d0  addiu       $a0, $s1, 0x18D0
    ctx->pc = 0x397204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6352));
    // 0x397208: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x397208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39720c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x39720cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4018E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018E8u, _value); } while (0);
    // 0x397210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397214: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x397214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4018E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018E4u, _value); } while (0);
    // 0x397218: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x397218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39721c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39721cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4018D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018D0u, _value); } while (0);
    // 0x397220: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x397220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x397224: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x397224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4018D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018D4u, _value); } while (0);
    // 0x397228: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x397228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x39722c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x39722cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4018DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018DCu, _value); } while (0);
    // 0x397230: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x397230u;
    {
        const bool branch_taken_0x397230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397230u;
        // 0x397234: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397230) {
            ctx->pc = 0x397270u;
            goto label_397270;
        }
    }
    ctx->pc = 0x397238u;
label_397238:
    // 0x397238: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x397238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x39723c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x39723cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x397240: 0x262418d0  addiu       $a0, $s1, 0x18D0
    ctx->pc = 0x397240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6352));
    // 0x397244: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x397244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4018E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018E4u, _value); } while (0);
    // 0x397248: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39724c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39724cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4018D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018D0u, _value); } while (0);
    // 0x397250: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x397250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x397254: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x397254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4018D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018D4u, _value); } while (0);
    // 0x397258: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x397258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39725c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x39725cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4018DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018DCu, _value); } while (0);
    // 0x397260: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x397260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x397264: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x397264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4018E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018E0u, _value); } while (0);
    // 0x397268: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x397268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x39726c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x39726cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4018E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4018E8u, _value); } while (0);
label_397270:
    // 0x397270: 0xc0f2624  jal         func_3C9890
    ctx->pc = 0x397270u;
    SET_GPR_U32(ctx, 31, 0x397278u);
    ctx->pc = 0x397274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397270u;
    // 0x397274: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9890u, 0x397270u, 0x397278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397278u;
label_397278:
    // 0x397278: 0x26101968  addiu       $s0, $s0, 0x1968
    ctx->pc = 0x397278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6504));
    // 0x39727c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39727cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397280: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x397280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x397284: 0xc0f2628  jal         func_3C98A0
    ctx->pc = 0x397284u;
    SET_GPR_U32(ctx, 31, 0x39728Cu);
    ctx->pc = 0x397288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397284u;
    // 0x397288: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98A0u, 0x397284u, 0x39728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39728Cu;
label_39728c:
    // 0x39728c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x397290: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x397290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x397294: 0xc0e5bba  jal         func_396EE8
    ctx->pc = 0x397294u;
    SET_GPR_U32(ctx, 31, 0x39729Cu);
    ctx->pc = 0x397298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397294u;
    // 0x397298: 0xac6291f8  sw          $v0, -0x6E08($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396EE8u, 0x397294u, 0x39729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39729Cu;
label_39729c:
    // 0x39729c: 0xc0e5be4  jal         func_396F90
    ctx->pc = 0x39729Cu;
    SET_GPR_U32(ctx, 31, 0x3972A4u);
    ctx->pc = 0x396F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396F90u, 0x39729Cu, 0x3972A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972A4u;
label_3972a4:
    // 0x3972a4: 0xc0e5c06  jal         func_397018
    ctx->pc = 0x3972A4u;
    SET_GPR_U32(ctx, 31, 0x3972ACu);
    ctx->pc = 0x397018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397018u, 0x3972A4u, 0x3972ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972ACu;
label_3972ac:
    // 0x3972ac: 0xc0e5c28  jal         func_3970A0
    ctx->pc = 0x3972ACu;
    SET_GPR_U32(ctx, 31, 0x3972B4u);
    ctx->pc = 0x3970A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3970A0u, 0x3972ACu, 0x3972B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972B4u;
label_3972b4:
    // 0x3972b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3972b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3972b8: 0x262218d0  addiu       $v0, $s1, 0x18D0
    ctx->pc = 0x3972b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6352));
    // 0x3972bc: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x3972BCu;
    SET_GPR_U32(ctx, 31, 0x3972C4u);
    ctx->pc = 0x3972C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972BCu;
    // 0x3972c0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x3972BCu, 0x3972C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972C4u;
label_3972c4:
    // 0x3972c4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3972c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x3972c8: 0x24a56998  addiu       $a1, $a1, 0x6998
    ctx->pc = 0x3972c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27032));
    // 0x3972cc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3972ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3972d0: 0xc0eb3b8  jal         func_3ACEE0
    ctx->pc = 0x3972D0u;
    SET_GPR_U32(ctx, 31, 0x3972D8u);
    ctx->pc = 0x3972D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972D0u;
    // 0x3972d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACEE0u, 0x3972D0u, 0x3972D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972D8u;
label_3972d8:
    // 0x3972d8: 0x264318c4  addiu       $v1, $s2, 0x18C4
    ctx->pc = 0x3972d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6340));
label_3972dc:
    // 0x3972dc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3972dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3972e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3972e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3972e4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3972e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3972e8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3972e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3972ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3972ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3972f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3972f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3972f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3972f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3972f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3972F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3972FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972F8u;
        // 0x3972fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3972F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397300u;
}
