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

// Function: sub_0013FFB8
// Address: 0x13ffb8 - 0x1400e0
void sub_0013FFB8_0x13ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FFB8_0x13ffb8");
#endif

    switch (ctx->pc) {
        case 0x13ffdcu: goto label_13ffdc;
        case 0x13fff4u: goto label_13fff4;
        case 0x140000u: goto label_140000;
        case 0x140010u: goto label_140010;
        case 0x14001cu: goto label_14001c;
        case 0x140040u: goto label_140040;
        case 0x14004cu: goto label_14004c;
        case 0x140058u: goto label_140058;
        case 0x140068u: goto label_140068;
        case 0x140084u: goto label_140084;
        case 0x140098u: goto label_140098;
        case 0x1400b8u: goto label_1400b8;
        case 0x1400c4u: goto label_1400c4;
        default: break;
    }

    ctx->pc = 0x13ffb8u;

    // 0x13ffb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ffb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ffbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ffc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13ffc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13ffc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ffc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ffcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ffccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ffd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13ffd4: 0xc04fe58  jal         func_13F960
    ctx->pc = 0x13FFD4u;
    SET_GPR_U32(ctx, 31, 0x13FFDCu);
    ctx->pc = 0x13FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFD4u;
    // 0x13ffd8: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F960u, 0x13FFD4u, 0x13FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFDCu;
label_13ffdc:
    // 0x13ffdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ffe0: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x13FFE0u;
    {
        const bool branch_taken_0x13ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFE0u;
        // 0x13ffe4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffe0) {
            ctx->pc = 0x1400C4u;
            goto label_1400c4;
        }
    }
    ctx->pc = 0x13FFE8u;
    // 0x13ffe8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13ffe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13ffec: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13FFECu;
    SET_GPR_U32(ctx, 31, 0x13FFF4u);
    ctx->pc = 0x13FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFECu;
    // 0x13fff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13FFECu, 0x13FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFF4u;
label_13fff4:
    // 0x13fff4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fff4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fff8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13FFF8u;
    SET_GPR_U32(ctx, 31, 0x140000u);
    ctx->pc = 0x13FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFF8u;
    // 0x13fffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13FFF8u, 0x140000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140000u;
label_140000:
    // 0x140000: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x140000u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x140004: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140008: 0xc04fe52  jal         func_13F948
    ctx->pc = 0x140008u;
    SET_GPR_U32(ctx, 31, 0x140010u);
    ctx->pc = 0x14000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140008u;
    // 0x14000c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F948u, 0x140008u, 0x140010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140010u;
label_140010:
    // 0x140010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x140010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140014: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x140014u;
    SET_GPR_U32(ctx, 31, 0x14001Cu);
    ctx->pc = 0x140018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140014u;
    // 0x140018: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x140014u, 0x14001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14001Cu;
label_14001c:
    // 0x14001c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14001cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140020: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x140020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140024: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x140024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140028: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x140028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14002c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x14002cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x140030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x140030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140038: 0xc04daca  jal         func_136B28
    ctx->pc = 0x140038u;
    SET_GPR_U32(ctx, 31, 0x140040u);
    ctx->pc = 0x14003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140038u;
    // 0x14003c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x140038u, 0x140040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140040u;
label_140040:
    // 0x140040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140044: 0xc046030  jal         func_1180C0
    ctx->pc = 0x140044u;
    SET_GPR_U32(ctx, 31, 0x14004Cu);
    ctx->pc = 0x140048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140044u;
    // 0x140048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x140044u, 0x14004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14004Cu;
label_14004c:
    // 0x14004c: 0x8e450624  lw          $a1, 0x624($s2)
    ctx->pc = 0x14004cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1572)));
    // 0x140050: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x140050u;
    SET_GPR_U32(ctx, 31, 0x140058u);
    ctx->pc = 0x140054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140050u;
    // 0x140054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x140050u, 0x140058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140058u;
label_140058:
    // 0x140058: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x140058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14005c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14005cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x140060: 0xc046290  jal         func_118A40
    ctx->pc = 0x140060u;
    SET_GPR_U32(ctx, 31, 0x140068u);
    ctx->pc = 0x140064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140060u;
    // 0x140064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x140060u, 0x140068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140068u;
label_140068:
    // 0x140068: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x140068u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14006c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140070: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x140070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x140074: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x140074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x140078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14007c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14007Cu;
    SET_GPR_U32(ctx, 31, 0x140084u);
    ctx->pc = 0x140080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14007Cu;
    // 0x140080: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14007Cu, 0x140084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140084u;
label_140084:
    // 0x140084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x140084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140088: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x140088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14008c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140090: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x140090u;
    SET_GPR_U32(ctx, 31, 0x140098u);
    ctx->pc = 0x140094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140090u;
    // 0x140094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x140090u, 0x140098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140098u;
label_140098:
    // 0x140098: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x140098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14009c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14009cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1400a0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1400a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1400a4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1400a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1400a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1400ac: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x1400acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1400b0: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1400B0u;
    SET_GPR_U32(ctx, 31, 0x1400B8u);
    ctx->pc = 0x1400B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400B0u;
    // 0x1400b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1400B0u, 0x1400B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400B8u;
label_1400b8:
    // 0x1400b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1400b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400bc: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x1400BCu;
    SET_GPR_U32(ctx, 31, 0x1400C4u);
    ctx->pc = 0x1400C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400BCu;
    // 0x1400c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x1400BCu, 0x1400C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400C4u;
label_1400c4:
    // 0x1400c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1400c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1400c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1400c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1400cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1400ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1400d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1400d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1400d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1400D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1400D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400D4u;
        // 0x1400d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1400D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1400DCu;
    // 0x1400dc: 0x0  nop
    ctx->pc = 0x1400dcu;
    // NOP
    ctx->pc = 0x1400e0u;
}
