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

// Function: sub_001A7838
// Address: 0x1a7838 - 0x1a7fe8
void sub_001A7838_0x1a7838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7838_0x1a7838");
#endif

    switch (ctx->pc) {
        case 0x1a7874u: goto label_1a7874;
        case 0x1a788cu: goto label_1a788c;
        case 0x1a78a4u: goto label_1a78a4;
        case 0x1a78bcu: goto label_1a78bc;
        case 0x1a78d4u: goto label_1a78d4;
        case 0x1a78ecu: goto label_1a78ec;
        case 0x1a7904u: goto label_1a7904;
        case 0x1a791cu: goto label_1a791c;
        case 0x1a7934u: goto label_1a7934;
        case 0x1a794cu: goto label_1a794c;
        case 0x1a7964u: goto label_1a7964;
        case 0x1a797cu: goto label_1a797c;
        case 0x1a7994u: goto label_1a7994;
        case 0x1a79acu: goto label_1a79ac;
        case 0x1a79c4u: goto label_1a79c4;
        case 0x1a79dcu: goto label_1a79dc;
        case 0x1a79f4u: goto label_1a79f4;
        case 0x1a7a0cu: goto label_1a7a0c;
        case 0x1a7a24u: goto label_1a7a24;
        case 0x1a7a3cu: goto label_1a7a3c;
        case 0x1a7a54u: goto label_1a7a54;
        case 0x1a7a6cu: goto label_1a7a6c;
        case 0x1a7a84u: goto label_1a7a84;
        case 0x1a7a9cu: goto label_1a7a9c;
        case 0x1a7ab4u: goto label_1a7ab4;
        case 0x1a7accu: goto label_1a7acc;
        case 0x1a7ae4u: goto label_1a7ae4;
        case 0x1a7afcu: goto label_1a7afc;
        case 0x1a7b14u: goto label_1a7b14;
        case 0x1a7b2cu: goto label_1a7b2c;
        case 0x1a7b44u: goto label_1a7b44;
        case 0x1a7b5cu: goto label_1a7b5c;
        case 0x1a7b74u: goto label_1a7b74;
        case 0x1a7b8cu: goto label_1a7b8c;
        case 0x1a7ba4u: goto label_1a7ba4;
        case 0x1a7bbcu: goto label_1a7bbc;
        case 0x1a7bd4u: goto label_1a7bd4;
        case 0x1a7becu: goto label_1a7bec;
        case 0x1a7c04u: goto label_1a7c04;
        case 0x1a7c1cu: goto label_1a7c1c;
        case 0x1a7c34u: goto label_1a7c34;
        case 0x1a7c4cu: goto label_1a7c4c;
        case 0x1a7c64u: goto label_1a7c64;
        case 0x1a7c7cu: goto label_1a7c7c;
        case 0x1a7c94u: goto label_1a7c94;
        case 0x1a7cacu: goto label_1a7cac;
        case 0x1a7cc4u: goto label_1a7cc4;
        case 0x1a7cdcu: goto label_1a7cdc;
        case 0x1a7cf4u: goto label_1a7cf4;
        case 0x1a7d0cu: goto label_1a7d0c;
        case 0x1a7d24u: goto label_1a7d24;
        case 0x1a7d3cu: goto label_1a7d3c;
        case 0x1a7d54u: goto label_1a7d54;
        case 0x1a7d6cu: goto label_1a7d6c;
        case 0x1a7d84u: goto label_1a7d84;
        case 0x1a7d9cu: goto label_1a7d9c;
        case 0x1a7db4u: goto label_1a7db4;
        case 0x1a7dccu: goto label_1a7dcc;
        case 0x1a7de4u: goto label_1a7de4;
        case 0x1a7dfcu: goto label_1a7dfc;
        case 0x1a7e14u: goto label_1a7e14;
        case 0x1a7e2cu: goto label_1a7e2c;
        case 0x1a7e44u: goto label_1a7e44;
        case 0x1a7e5cu: goto label_1a7e5c;
        case 0x1a7e74u: goto label_1a7e74;
        case 0x1a7e8cu: goto label_1a7e8c;
        case 0x1a7ea4u: goto label_1a7ea4;
        case 0x1a7ebcu: goto label_1a7ebc;
        case 0x1a7ed4u: goto label_1a7ed4;
        case 0x1a7eecu: goto label_1a7eec;
        case 0x1a7f04u: goto label_1a7f04;
        case 0x1a7f1cu: goto label_1a7f1c;
        case 0x1a7f34u: goto label_1a7f34;
        case 0x1a7f4cu: goto label_1a7f4c;
        case 0x1a7f64u: goto label_1a7f64;
        case 0x1a7f7cu: goto label_1a7f7c;
        case 0x1a7f94u: goto label_1a7f94;
        case 0x1a7facu: goto label_1a7fac;
        case 0x1a7fc4u: goto label_1a7fc4;
        case 0x1a7fdcu: goto label_1a7fdc;
        default: break;
    }

    ctx->pc = 0x1a7838u;

    // 0x1a7838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a783c: 0x2ca20050  sltiu       $v0, $a1, 0x50
    ctx->pc = 0x1a783cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1a7840: 0x104001e6  beqz        $v0, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x1A7840u;
    {
        const bool branch_taken_0x1a7840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7840u;
        // 0x1a7844: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7840) {
            ctx->pc = 0x1A7FDCu;
            goto label_1a7fdc;
        }
    }
    ctx->pc = 0x1A7848u;
    // 0x1a7848: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1a7848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x1a784c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a784cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7850: 0x24420bd0  addiu       $v0, $v0, 0xBD0
    ctx->pc = 0x1a7850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
    // 0x1a7854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a7854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7858: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a7858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a785c: 0x800008  jr          $a0
    ctx->pc = 0x1A785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7864u: goto label_1a7864;
            case 0x1A787Cu: goto label_1a787c;
            case 0x1A7894u: goto label_1a7894;
            case 0x1A78ACu: goto label_1a78ac;
            case 0x1A78C4u: goto label_1a78c4;
            case 0x1A78DCu: goto label_1a78dc;
            case 0x1A78F4u: goto label_1a78f4;
            case 0x1A790Cu: goto label_1a790c;
            case 0x1A7924u: goto label_1a7924;
            case 0x1A793Cu: goto label_1a793c;
            case 0x1A7954u: goto label_1a7954;
            case 0x1A796Cu: goto label_1a796c;
            case 0x1A7984u: goto label_1a7984;
            case 0x1A799Cu: goto label_1a799c;
            case 0x1A79B4u: goto label_1a79b4;
            case 0x1A79CCu: goto label_1a79cc;
            case 0x1A79E4u: goto label_1a79e4;
            case 0x1A79FCu: goto label_1a79fc;
            case 0x1A7A14u: goto label_1a7a14;
            case 0x1A7A2Cu: goto label_1a7a2c;
            case 0x1A7A44u: goto label_1a7a44;
            case 0x1A7A5Cu: goto label_1a7a5c;
            case 0x1A7A74u: goto label_1a7a74;
            case 0x1A7A8Cu: goto label_1a7a8c;
            case 0x1A7AA4u: goto label_1a7aa4;
            case 0x1A7ABCu: goto label_1a7abc;
            case 0x1A7AD4u: goto label_1a7ad4;
            case 0x1A7AECu: goto label_1a7aec;
            case 0x1A7B04u: goto label_1a7b04;
            case 0x1A7B1Cu: goto label_1a7b1c;
            case 0x1A7B34u: goto label_1a7b34;
            case 0x1A7B4Cu: goto label_1a7b4c;
            case 0x1A7B64u: goto label_1a7b64;
            case 0x1A7B7Cu: goto label_1a7b7c;
            case 0x1A7B94u: goto label_1a7b94;
            case 0x1A7BACu: goto label_1a7bac;
            case 0x1A7BC4u: goto label_1a7bc4;
            case 0x1A7BDCu: goto label_1a7bdc;
            case 0x1A7BF4u: goto label_1a7bf4;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C24u: goto label_1a7c24;
            case 0x1A7C3Cu: goto label_1a7c3c;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7C6Cu: goto label_1a7c6c;
            case 0x1A7C84u: goto label_1a7c84;
            case 0x1A7C9Cu: goto label_1a7c9c;
            case 0x1A7CB4u: goto label_1a7cb4;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CE4u: goto label_1a7ce4;
            case 0x1A7CFCu: goto label_1a7cfc;
            case 0x1A7D14u: goto label_1a7d14;
            case 0x1A7D2Cu: goto label_1a7d2c;
            case 0x1A7D44u: goto label_1a7d44;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D74u: goto label_1a7d74;
            case 0x1A7D8Cu: goto label_1a7d8c;
            case 0x1A7DA4u: goto label_1a7da4;
            case 0x1A7DBCu: goto label_1a7dbc;
            case 0x1A7DD4u: goto label_1a7dd4;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E04u: goto label_1a7e04;
            case 0x1A7E1Cu: goto label_1a7e1c;
            case 0x1A7E34u: goto label_1a7e34;
            case 0x1A7E4Cu: goto label_1a7e4c;
            case 0x1A7E64u: goto label_1a7e64;
            case 0x1A7E7Cu: goto label_1a7e7c;
            case 0x1A7E94u: goto label_1a7e94;
            case 0x1A7EACu: goto label_1a7eac;
            case 0x1A7EC4u: goto label_1a7ec4;
            case 0x1A7EDCu: goto label_1a7edc;
            case 0x1A7EF4u: goto label_1a7ef4;
            case 0x1A7F0Cu: goto label_1a7f0c;
            case 0x1A7F24u: goto label_1a7f24;
            case 0x1A7F3Cu: goto label_1a7f3c;
            case 0x1A7F54u: goto label_1a7f54;
            case 0x1A7F6Cu: goto label_1a7f6c;
            case 0x1A7F84u: goto label_1a7f84;
            case 0x1A7F9Cu: goto label_1a7f9c;
            case 0x1A7FB4u: goto label_1a7fb4;
            case 0x1A7FCCu: goto label_1a7fcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A785Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A7864u;
label_1a7864:
    // 0x1a7864: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7868: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a786c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A786Cu;
    SET_GPR_U32(ctx, 31, 0x1A7874u);
    ctx->pc = 0x1A7870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A786Cu;
    // 0x1a7870: 0x24a50608  addiu       $a1, $a1, 0x608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A786Cu, 0x1A7874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7874u;
label_1a7874:
    // 0x1a7874: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x1A7874u;
    {
        const bool branch_taken_0x1a7874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7874u;
        // 0x1a7878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7874) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A787Cu;
label_1a787c:
    // 0x1a787c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7880: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7884: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7884u;
    SET_GPR_U32(ctx, 31, 0x1A788Cu);
    ctx->pc = 0x1A7888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7884u;
    // 0x1a7888: 0x24a50618  addiu       $a1, $a1, 0x618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7884u, 0x1A788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A788Cu;
label_1a788c:
    // 0x1a788c: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x1A788Cu;
    {
        const bool branch_taken_0x1a788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A788Cu;
        // 0x1a7890: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a788c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7894u;
label_1a7894:
    // 0x1a7894: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7898: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a789c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A789Cu;
    SET_GPR_U32(ctx, 31, 0x1A78A4u);
    ctx->pc = 0x1A78A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A789Cu;
    // 0x1a78a0: 0x24a50628  addiu       $a1, $a1, 0x628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A789Cu, 0x1A78A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78A4u;
label_1a78a4:
    // 0x1a78a4: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x1A78A4u;
    {
        const bool branch_taken_0x1a78a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78A4u;
        // 0x1a78a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78a4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A78ACu;
label_1a78ac:
    // 0x1a78ac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a78acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a78b0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a78b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78b4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A78B4u;
    SET_GPR_U32(ctx, 31, 0x1A78BCu);
    ctx->pc = 0x1A78B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78B4u;
    // 0x1a78b8: 0x24a50638  addiu       $a1, $a1, 0x638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A78B4u, 0x1A78BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78BCu;
label_1a78bc:
    // 0x1a78bc: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x1A78BCu;
    {
        const bool branch_taken_0x1a78bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78BCu;
        // 0x1a78c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78bc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A78C4u;
label_1a78c4:
    // 0x1a78c4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a78c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a78c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78cc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A78CCu;
    SET_GPR_U32(ctx, 31, 0x1A78D4u);
    ctx->pc = 0x1A78D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78CCu;
    // 0x1a78d0: 0x24a50648  addiu       $a1, $a1, 0x648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A78CCu, 0x1A78D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78D4u;
label_1a78d4:
    // 0x1a78d4: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1A78D4u;
    {
        const bool branch_taken_0x1a78d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78D4u;
        // 0x1a78d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78d4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A78DCu;
label_1a78dc:
    // 0x1a78dc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a78dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a78e0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a78e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78e4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A78E4u;
    SET_GPR_U32(ctx, 31, 0x1A78ECu);
    ctx->pc = 0x1A78E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78E4u;
    // 0x1a78e8: 0x24a50658  addiu       $a1, $a1, 0x658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A78E4u, 0x1A78ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78ECu;
label_1a78ec:
    // 0x1a78ec: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x1A78ECu;
    {
        const bool branch_taken_0x1a78ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78ECu;
        // 0x1a78f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78ec) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A78F4u;
label_1a78f4:
    // 0x1a78f4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a78f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a78f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78fc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A78FCu;
    SET_GPR_U32(ctx, 31, 0x1A7904u);
    ctx->pc = 0x1A7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78FCu;
    // 0x1a7900: 0x24a50668  addiu       $a1, $a1, 0x668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A78FCu, 0x1A7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7904u;
label_1a7904:
    // 0x1a7904: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x1A7904u;
    {
        const bool branch_taken_0x1a7904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7904u;
        // 0x1a7908: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7904) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A790Cu;
label_1a790c:
    // 0x1a790c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a790cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7910: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7914: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7914u;
    SET_GPR_U32(ctx, 31, 0x1A791Cu);
    ctx->pc = 0x1A7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7914u;
    // 0x1a7918: 0x24a50678  addiu       $a1, $a1, 0x678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7914u, 0x1A791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A791Cu;
label_1a791c:
    // 0x1a791c: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x1A791Cu;
    {
        const bool branch_taken_0x1a791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A791Cu;
        // 0x1a7920: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a791c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7924u;
label_1a7924:
    // 0x1a7924: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7928: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a792c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A792Cu;
    SET_GPR_U32(ctx, 31, 0x1A7934u);
    ctx->pc = 0x1A7930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A792Cu;
    // 0x1a7930: 0x24a50688  addiu       $a1, $a1, 0x688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A792Cu, 0x1A7934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7934u;
label_1a7934:
    // 0x1a7934: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x1A7934u;
    {
        const bool branch_taken_0x1a7934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7934u;
        // 0x1a7938: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7934) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A793Cu;
label_1a793c:
    // 0x1a793c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7940: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7944: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7944u;
    SET_GPR_U32(ctx, 31, 0x1A794Cu);
    ctx->pc = 0x1A7948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7944u;
    // 0x1a7948: 0x24a50690  addiu       $a1, $a1, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7944u, 0x1A794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A794Cu;
label_1a794c:
    // 0x1a794c: 0x100001a4  b           . + 4 + (0x1A4 << 2)
    ctx->pc = 0x1A794Cu;
    {
        const bool branch_taken_0x1a794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A794Cu;
        // 0x1a7950: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a794c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7954u;
label_1a7954:
    // 0x1a7954: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7958: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a795c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A795Cu;
    SET_GPR_U32(ctx, 31, 0x1A7964u);
    ctx->pc = 0x1A7960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A795Cu;
    // 0x1a7960: 0x24a506a0  addiu       $a1, $a1, 0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A795Cu, 0x1A7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7964u;
label_1a7964:
    // 0x1a7964: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x1A7964u;
    {
        const bool branch_taken_0x1a7964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7964u;
        // 0x1a7968: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7964) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A796Cu;
label_1a796c:
    // 0x1a796c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a796cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7970: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7974: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7974u;
    SET_GPR_U32(ctx, 31, 0x1A797Cu);
    ctx->pc = 0x1A7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7974u;
    // 0x1a7978: 0x24a506b0  addiu       $a1, $a1, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7974u, 0x1A797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A797Cu;
label_1a797c:
    // 0x1a797c: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x1A797Cu;
    {
        const bool branch_taken_0x1a797c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A797Cu;
        // 0x1a7980: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a797c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7984u;
label_1a7984:
    // 0x1a7984: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7988: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a798c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A798Cu;
    SET_GPR_U32(ctx, 31, 0x1A7994u);
    ctx->pc = 0x1A7990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A798Cu;
    // 0x1a7990: 0x24a506c0  addiu       $a1, $a1, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A798Cu, 0x1A7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7994u;
label_1a7994:
    // 0x1a7994: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x1A7994u;
    {
        const bool branch_taken_0x1a7994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7994u;
        // 0x1a7998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7994) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A799Cu;
label_1a799c:
    // 0x1a799c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a799cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a79a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a79a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79a4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A79A4u;
    SET_GPR_U32(ctx, 31, 0x1A79ACu);
    ctx->pc = 0x1A79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79A4u;
    // 0x1a79a8: 0x24a506d0  addiu       $a1, $a1, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A79A4u, 0x1A79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79ACu;
label_1a79ac:
    // 0x1a79ac: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x1A79ACu;
    {
        const bool branch_taken_0x1a79ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79ACu;
        // 0x1a79b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79ac) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A79B4u;
label_1a79b4:
    // 0x1a79b4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a79b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a79b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a79b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79bc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A79BCu;
    SET_GPR_U32(ctx, 31, 0x1A79C4u);
    ctx->pc = 0x1A79C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79BCu;
    // 0x1a79c0: 0x24a506e0  addiu       $a1, $a1, 0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A79BCu, 0x1A79C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79C4u;
label_1a79c4:
    // 0x1a79c4: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x1A79C4u;
    {
        const bool branch_taken_0x1a79c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79C4u;
        // 0x1a79c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79c4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A79CCu;
label_1a79cc:
    // 0x1a79cc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a79d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a79d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79d4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A79D4u;
    SET_GPR_U32(ctx, 31, 0x1A79DCu);
    ctx->pc = 0x1A79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79D4u;
    // 0x1a79d8: 0x24a506e8  addiu       $a1, $a1, 0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A79D4u, 0x1A79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79DCu;
label_1a79dc:
    // 0x1a79dc: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x1A79DCu;
    {
        const bool branch_taken_0x1a79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79DCu;
        // 0x1a79e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79dc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a79e8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a79e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79ec: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A79ECu;
    SET_GPR_U32(ctx, 31, 0x1A79F4u);
    ctx->pc = 0x1A79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79ECu;
    // 0x1a79f0: 0x24a506f0  addiu       $a1, $a1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A79ECu, 0x1A79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79F4u;
label_1a79f4:
    // 0x1a79f4: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x1A79F4u;
    {
        const bool branch_taken_0x1a79f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79f4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A79FCu;
label_1a79fc:
    // 0x1a79fc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7a00: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a04: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7A04u;
    SET_GPR_U32(ctx, 31, 0x1A7A0Cu);
    ctx->pc = 0x1A7A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A04u;
    // 0x1a7a08: 0x24a50700  addiu       $a1, $a1, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7A04u, 0x1A7A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A0Cu;
label_1a7a0c:
    // 0x1a7a0c: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x1A7A0Cu;
    {
        const bool branch_taken_0x1a7a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A0Cu;
        // 0x1a7a10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a0c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7A14u;
label_1a7a14:
    // 0x1a7a14: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7a18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a1c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7A1Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A24u);
    ctx->pc = 0x1A7A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A1Cu;
    // 0x1a7a20: 0x24a50710  addiu       $a1, $a1, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7A1Cu, 0x1A7A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A24u;
label_1a7a24:
    // 0x1a7a24: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x1A7A24u;
    {
        const bool branch_taken_0x1a7a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A24u;
        // 0x1a7a28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a24) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7A2Cu;
label_1a7a2c:
    // 0x1a7a2c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7a30: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a34: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7A34u;
    SET_GPR_U32(ctx, 31, 0x1A7A3Cu);
    ctx->pc = 0x1A7A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A34u;
    // 0x1a7a38: 0x24a50718  addiu       $a1, $a1, 0x718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7A34u, 0x1A7A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A3Cu;
label_1a7a3c:
    // 0x1a7a3c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x1A7A3Cu;
    {
        const bool branch_taken_0x1a7a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A3Cu;
        // 0x1a7a40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a3c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7A44u;
label_1a7a44:
    // 0x1a7a44: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7a48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a4c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A54u);
    ctx->pc = 0x1A7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A4Cu;
    // 0x1a7a50: 0x24a50728  addiu       $a1, $a1, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7A4Cu, 0x1A7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A54u;
label_1a7a54:
    // 0x1a7a54: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x1A7A54u;
    {
        const bool branch_taken_0x1a7a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A54u;
        // 0x1a7a58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a54) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7A5Cu;
label_1a7a5c:
    // 0x1a7a5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7a60: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a64: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7A64u;
    SET_GPR_U32(ctx, 31, 0x1A7A6Cu);
    ctx->pc = 0x1A7A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A64u;
    // 0x1a7a68: 0x24a50738  addiu       $a1, $a1, 0x738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7A64u, 0x1A7A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A6Cu;
label_1a7a6c:
    // 0x1a7a6c: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x1A7A6Cu;
    {
        const bool branch_taken_0x1a7a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A6Cu;
        // 0x1a7a70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a6c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7A74u;
label_1a7a74:
    // 0x1a7a74: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7a78: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a7c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A84u);
    ctx->pc = 0x1A7A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A7Cu;
    // 0x1a7a80: 0x24a50748  addiu       $a1, $a1, 0x748 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7A7Cu, 0x1A7A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A84u;
label_1a7a84:
    // 0x1a7a84: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x1A7A84u;
    {
        const bool branch_taken_0x1a7a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A84u;
        // 0x1a7a88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a84) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7A8Cu;
label_1a7a8c:
    // 0x1a7a8c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7a90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a94: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7A94u;
    SET_GPR_U32(ctx, 31, 0x1A7A9Cu);
    ctx->pc = 0x1A7A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A94u;
    // 0x1a7a98: 0x24a50760  addiu       $a1, $a1, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7A94u, 0x1A7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A9Cu;
label_1a7a9c:
    // 0x1a7a9c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x1A7A9Cu;
    {
        const bool branch_taken_0x1a7a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A9Cu;
        // 0x1a7aa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a9c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7AA4u;
label_1a7aa4:
    // 0x1a7aa4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7aa8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7aac: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7AACu;
    SET_GPR_U32(ctx, 31, 0x1A7AB4u);
    ctx->pc = 0x1A7AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AACu;
    // 0x1a7ab0: 0x24a50780  addiu       $a1, $a1, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7AACu, 0x1A7AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AB4u;
label_1a7ab4:
    // 0x1a7ab4: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x1A7AB4u;
    {
        const bool branch_taken_0x1a7ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AB4u;
        // 0x1a7ab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ab4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7ABCu;
label_1a7abc:
    // 0x1a7abc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7ac0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ac4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7AC4u;
    SET_GPR_U32(ctx, 31, 0x1A7ACCu);
    ctx->pc = 0x1A7AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AC4u;
    // 0x1a7ac8: 0x24a50798  addiu       $a1, $a1, 0x798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7AC4u, 0x1A7ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7ACCu;
label_1a7acc:
    // 0x1a7acc: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x1A7ACCu;
    {
        const bool branch_taken_0x1a7acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7ACCu;
        // 0x1a7ad0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7acc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7AD4u;
label_1a7ad4:
    // 0x1a7ad4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7ad8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7adc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7ADCu;
    SET_GPR_U32(ctx, 31, 0x1A7AE4u);
    ctx->pc = 0x1A7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7ADCu;
    // 0x1a7ae0: 0x24a507b0  addiu       $a1, $a1, 0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7ADCu, 0x1A7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AE4u;
label_1a7ae4:
    // 0x1a7ae4: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x1A7AE4u;
    {
        const bool branch_taken_0x1a7ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AE4u;
        // 0x1a7ae8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ae4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7AECu;
label_1a7aec:
    // 0x1a7aec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7af0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7af4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7AF4u;
    SET_GPR_U32(ctx, 31, 0x1A7AFCu);
    ctx->pc = 0x1A7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AF4u;
    // 0x1a7af8: 0x24a507d0  addiu       $a1, $a1, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7AF4u, 0x1A7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AFCu;
label_1a7afc:
    // 0x1a7afc: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1A7AFCu;
    {
        const bool branch_taken_0x1a7afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AFCu;
        // 0x1a7b00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7afc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7B04u;
label_1a7b04:
    // 0x1a7b04: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7b08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b0c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B14u);
    ctx->pc = 0x1A7B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B0Cu;
    // 0x1a7b10: 0x24a507f0  addiu       $a1, $a1, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7B0Cu, 0x1A7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B14u;
label_1a7b14:
    // 0x1a7b14: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x1A7B14u;
    {
        const bool branch_taken_0x1a7b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B14u;
        // 0x1a7b18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b14) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7B1Cu;
label_1a7b1c:
    // 0x1a7b1c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7b20: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b24: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7B24u;
    SET_GPR_U32(ctx, 31, 0x1A7B2Cu);
    ctx->pc = 0x1A7B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B24u;
    // 0x1a7b28: 0x24a50808  addiu       $a1, $a1, 0x808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7B24u, 0x1A7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B2Cu;
label_1a7b2c:
    // 0x1a7b2c: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x1A7B2Cu;
    {
        const bool branch_taken_0x1a7b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B2Cu;
        // 0x1a7b30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b2c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7B34u;
label_1a7b34:
    // 0x1a7b34: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7b38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b3c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B44u);
    ctx->pc = 0x1A7B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B3Cu;
    // 0x1a7b40: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7B3Cu, 0x1A7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B44u;
label_1a7b44:
    // 0x1a7b44: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x1A7B44u;
    {
        const bool branch_taken_0x1a7b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B44u;
        // 0x1a7b48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b44) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7B4Cu;
label_1a7b4c:
    // 0x1a7b4c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7b50: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b54: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7B54u;
    SET_GPR_U32(ctx, 31, 0x1A7B5Cu);
    ctx->pc = 0x1A7B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B54u;
    // 0x1a7b58: 0x24a50838  addiu       $a1, $a1, 0x838 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7B54u, 0x1A7B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B5Cu;
label_1a7b5c:
    // 0x1a7b5c: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x1A7B5Cu;
    {
        const bool branch_taken_0x1a7b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B5Cu;
        // 0x1a7b60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b5c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7B64u;
label_1a7b64:
    // 0x1a7b64: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7b68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b6c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B74u);
    ctx->pc = 0x1A7B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B6Cu;
    // 0x1a7b70: 0x24a50858  addiu       $a1, $a1, 0x858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7B6Cu, 0x1A7B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B74u;
label_1a7b74:
    // 0x1a7b74: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x1A7B74u;
    {
        const bool branch_taken_0x1a7b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B74u;
        // 0x1a7b78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b74) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7B7Cu;
label_1a7b7c:
    // 0x1a7b7c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7b80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b84: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7B84u;
    SET_GPR_U32(ctx, 31, 0x1A7B8Cu);
    ctx->pc = 0x1A7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B84u;
    // 0x1a7b88: 0x24a50870  addiu       $a1, $a1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7B84u, 0x1A7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B8Cu;
label_1a7b8c:
    // 0x1a7b8c: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x1A7B8Cu;
    {
        const bool branch_taken_0x1a7b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B8Cu;
        // 0x1a7b90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b8c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7B94u;
label_1a7b94:
    // 0x1a7b94: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7b98: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b9c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7BA4u);
    ctx->pc = 0x1A7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B9Cu;
    // 0x1a7ba0: 0x24a50888  addiu       $a1, $a1, 0x888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7B9Cu, 0x1A7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BA4u;
label_1a7ba4:
    // 0x1a7ba4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x1A7BA4u;
    {
        const bool branch_taken_0x1a7ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BA4u;
        // 0x1a7ba8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ba4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7BACu;
label_1a7bac:
    // 0x1a7bac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7bb0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bb4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7BB4u;
    SET_GPR_U32(ctx, 31, 0x1A7BBCu);
    ctx->pc = 0x1A7BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BB4u;
    // 0x1a7bb8: 0x24a50890  addiu       $a1, $a1, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7BB4u, 0x1A7BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BBCu;
label_1a7bbc:
    // 0x1a7bbc: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x1A7BBCu;
    {
        const bool branch_taken_0x1a7bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BBCu;
        // 0x1a7bc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bbc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7BC4u;
label_1a7bc4:
    // 0x1a7bc4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7bc8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bcc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7BCCu;
    SET_GPR_U32(ctx, 31, 0x1A7BD4u);
    ctx->pc = 0x1A7BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BCCu;
    // 0x1a7bd0: 0x24a508a8  addiu       $a1, $a1, 0x8A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7BCCu, 0x1A7BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BD4u;
label_1a7bd4:
    // 0x1a7bd4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x1A7BD4u;
    {
        const bool branch_taken_0x1a7bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BD4u;
        // 0x1a7bd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bd4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7BDCu;
label_1a7bdc:
    // 0x1a7bdc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7be0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7be4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7BE4u;
    SET_GPR_U32(ctx, 31, 0x1A7BECu);
    ctx->pc = 0x1A7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BE4u;
    // 0x1a7be8: 0x24a508c0  addiu       $a1, $a1, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7BE4u, 0x1A7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BECu;
label_1a7bec:
    // 0x1a7bec: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1A7BECu;
    {
        const bool branch_taken_0x1a7bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BECu;
        // 0x1a7bf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bec) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7BF4u;
label_1a7bf4:
    // 0x1a7bf4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7bf8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bfc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7BFCu;
    SET_GPR_U32(ctx, 31, 0x1A7C04u);
    ctx->pc = 0x1A7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BFCu;
    // 0x1a7c00: 0x24a508d8  addiu       $a1, $a1, 0x8D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7BFCu, 0x1A7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C04u;
label_1a7c04:
    // 0x1a7c04: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1A7C04u;
    {
        const bool branch_taken_0x1a7c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C04u;
        // 0x1a7c08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c04) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7C0Cu;
label_1a7c0c:
    // 0x1a7c0c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7c10: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c14: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7C14u;
    SET_GPR_U32(ctx, 31, 0x1A7C1Cu);
    ctx->pc = 0x1A7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C14u;
    // 0x1a7c18: 0x24a508f0  addiu       $a1, $a1, 0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7C14u, 0x1A7C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C1Cu;
label_1a7c1c:
    // 0x1a7c1c: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1A7C1Cu;
    {
        const bool branch_taken_0x1a7c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C1Cu;
        // 0x1a7c20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c1c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7C24u;
label_1a7c24:
    // 0x1a7c24: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7c28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c2c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7C34u);
    ctx->pc = 0x1A7C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C2Cu;
    // 0x1a7c30: 0x24a50900  addiu       $a1, $a1, 0x900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7C2Cu, 0x1A7C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C34u;
label_1a7c34:
    // 0x1a7c34: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1A7C34u;
    {
        const bool branch_taken_0x1a7c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C34u;
        // 0x1a7c38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c34) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7C3Cu;
label_1a7c3c:
    // 0x1a7c3c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7c40: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c44: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7C44u;
    SET_GPR_U32(ctx, 31, 0x1A7C4Cu);
    ctx->pc = 0x1A7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C44u;
    // 0x1a7c48: 0x24a50910  addiu       $a1, $a1, 0x910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7C44u, 0x1A7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C4Cu;
label_1a7c4c:
    // 0x1a7c4c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1A7C4Cu;
    {
        const bool branch_taken_0x1a7c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C4Cu;
        // 0x1a7c50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c4c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7C54u;
label_1a7c54:
    // 0x1a7c54: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7c58: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c5c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7C64u);
    ctx->pc = 0x1A7C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C5Cu;
    // 0x1a7c60: 0x24a50928  addiu       $a1, $a1, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7C5Cu, 0x1A7C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C64u;
label_1a7c64:
    // 0x1a7c64: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1A7C64u;
    {
        const bool branch_taken_0x1a7c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C64u;
        // 0x1a7c68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c64) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7C6Cu;
label_1a7c6c:
    // 0x1a7c6c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7c70: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c74: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7C74u;
    SET_GPR_U32(ctx, 31, 0x1A7C7Cu);
    ctx->pc = 0x1A7C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C74u;
    // 0x1a7c78: 0x24a50938  addiu       $a1, $a1, 0x938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7C74u, 0x1A7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C7Cu;
label_1a7c7c:
    // 0x1a7c7c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x1A7C7Cu;
    {
        const bool branch_taken_0x1a7c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C7Cu;
        // 0x1a7c80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c7c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7C84u;
label_1a7c84:
    // 0x1a7c84: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7c88: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c8c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A7C94u);
    ctx->pc = 0x1A7C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C8Cu;
    // 0x1a7c90: 0x24a50948  addiu       $a1, $a1, 0x948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7C8Cu, 0x1A7C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C94u;
label_1a7c94:
    // 0x1a7c94: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1A7C94u;
    {
        const bool branch_taken_0x1a7c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C94u;
        // 0x1a7c98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c94) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7C9Cu;
label_1a7c9c:
    // 0x1a7c9c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7ca0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ca4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7CA4u;
    SET_GPR_U32(ctx, 31, 0x1A7CACu);
    ctx->pc = 0x1A7CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CA4u;
    // 0x1a7ca8: 0x24a50958  addiu       $a1, $a1, 0x958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7CA4u, 0x1A7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CACu;
label_1a7cac:
    // 0x1a7cac: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1A7CACu;
    {
        const bool branch_taken_0x1a7cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CACu;
        // 0x1a7cb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cac) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7CB4u;
label_1a7cb4:
    // 0x1a7cb4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7cb8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7cbc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7CBCu;
    SET_GPR_U32(ctx, 31, 0x1A7CC4u);
    ctx->pc = 0x1A7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CBCu;
    // 0x1a7cc0: 0x24a50968  addiu       $a1, $a1, 0x968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7CBCu, 0x1A7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CC4u;
label_1a7cc4:
    // 0x1a7cc4: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1A7CC4u;
    {
        const bool branch_taken_0x1a7cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CC4u;
        // 0x1a7cc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cc4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7CCCu;
label_1a7ccc:
    // 0x1a7ccc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7cd0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7cd4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7CD4u;
    SET_GPR_U32(ctx, 31, 0x1A7CDCu);
    ctx->pc = 0x1A7CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CD4u;
    // 0x1a7cd8: 0x24a50980  addiu       $a1, $a1, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7CD4u, 0x1A7CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CDCu;
label_1a7cdc:
    // 0x1a7cdc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1A7CDCu;
    {
        const bool branch_taken_0x1a7cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CDCu;
        // 0x1a7ce0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cdc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7CE4u;
label_1a7ce4:
    // 0x1a7ce4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7ce8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7cec: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7CECu;
    SET_GPR_U32(ctx, 31, 0x1A7CF4u);
    ctx->pc = 0x1A7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CECu;
    // 0x1a7cf0: 0x24a50990  addiu       $a1, $a1, 0x990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7CECu, 0x1A7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CF4u;
label_1a7cf4:
    // 0x1a7cf4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1A7CF4u;
    {
        const bool branch_taken_0x1a7cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CF4u;
        // 0x1a7cf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cf4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7CFCu;
label_1a7cfc:
    // 0x1a7cfc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7d00: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d04: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7D04u;
    SET_GPR_U32(ctx, 31, 0x1A7D0Cu);
    ctx->pc = 0x1A7D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D04u;
    // 0x1a7d08: 0x24a50998  addiu       $a1, $a1, 0x998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7D04u, 0x1A7D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D0Cu;
label_1a7d0c:
    // 0x1a7d0c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1A7D0Cu;
    {
        const bool branch_taken_0x1a7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D0Cu;
        // 0x1a7d10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d0c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7D14u;
label_1a7d14:
    // 0x1a7d14: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7d18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d1c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D24u);
    ctx->pc = 0x1A7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D1Cu;
    // 0x1a7d20: 0x24a509b0  addiu       $a1, $a1, 0x9B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7D1Cu, 0x1A7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D24u;
label_1a7d24:
    // 0x1a7d24: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x1A7D24u;
    {
        const bool branch_taken_0x1a7d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D24u;
        // 0x1a7d28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d24) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7D2Cu;
label_1a7d2c:
    // 0x1a7d2c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7d30: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d34: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7D34u;
    SET_GPR_U32(ctx, 31, 0x1A7D3Cu);
    ctx->pc = 0x1A7D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D34u;
    // 0x1a7d38: 0x24a509c0  addiu       $a1, $a1, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7D34u, 0x1A7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D3Cu;
label_1a7d3c:
    // 0x1a7d3c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1A7D3Cu;
    {
        const bool branch_taken_0x1a7d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D3Cu;
        // 0x1a7d40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d3c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7D44u;
label_1a7d44:
    // 0x1a7d44: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7d48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d4c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D54u);
    ctx->pc = 0x1A7D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D4Cu;
    // 0x1a7d50: 0x24a509d0  addiu       $a1, $a1, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7D4Cu, 0x1A7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D54u;
label_1a7d54:
    // 0x1a7d54: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1A7D54u;
    {
        const bool branch_taken_0x1a7d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D54u;
        // 0x1a7d58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d54) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7D5Cu;
label_1a7d5c:
    // 0x1a7d5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7d60: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d64: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7D64u;
    SET_GPR_U32(ctx, 31, 0x1A7D6Cu);
    ctx->pc = 0x1A7D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D64u;
    // 0x1a7d68: 0x24a509e0  addiu       $a1, $a1, 0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7D64u, 0x1A7D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D6Cu;
label_1a7d6c:
    // 0x1a7d6c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1A7D6Cu;
    {
        const bool branch_taken_0x1a7d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D6Cu;
        // 0x1a7d70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d6c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7D74u;
label_1a7d74:
    // 0x1a7d74: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7d78: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d7c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D84u);
    ctx->pc = 0x1A7D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D7Cu;
    // 0x1a7d80: 0x24a509f0  addiu       $a1, $a1, 0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7D7Cu, 0x1A7D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D84u;
label_1a7d84:
    // 0x1a7d84: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1A7D84u;
    {
        const bool branch_taken_0x1a7d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D84u;
        // 0x1a7d88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d84) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7D8Cu;
label_1a7d8c:
    // 0x1a7d8c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7d90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d94: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7D94u;
    SET_GPR_U32(ctx, 31, 0x1A7D9Cu);
    ctx->pc = 0x1A7D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D94u;
    // 0x1a7d98: 0x24a50a00  addiu       $a1, $a1, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7D94u, 0x1A7D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D9Cu;
label_1a7d9c:
    // 0x1a7d9c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1A7D9Cu;
    {
        const bool branch_taken_0x1a7d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D9Cu;
        // 0x1a7da0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d9c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7DA4u;
label_1a7da4:
    // 0x1a7da4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7da8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7dac: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7DACu;
    SET_GPR_U32(ctx, 31, 0x1A7DB4u);
    ctx->pc = 0x1A7DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DACu;
    // 0x1a7db0: 0x24a50a10  addiu       $a1, $a1, 0xA10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7DACu, 0x1A7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DB4u;
label_1a7db4:
    // 0x1a7db4: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1A7DB4u;
    {
        const bool branch_taken_0x1a7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DB4u;
        // 0x1a7db8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7db4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7DBCu;
label_1a7dbc:
    // 0x1a7dbc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7dc0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7dc4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7DC4u;
    SET_GPR_U32(ctx, 31, 0x1A7DCCu);
    ctx->pc = 0x1A7DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DC4u;
    // 0x1a7dc8: 0x24a50a28  addiu       $a1, $a1, 0xA28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7DC4u, 0x1A7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DCCu;
label_1a7dcc:
    // 0x1a7dcc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1A7DCCu;
    {
        const bool branch_taken_0x1a7dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DCCu;
        // 0x1a7dd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dcc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7DD4u;
label_1a7dd4:
    // 0x1a7dd4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7dd8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ddc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7DDCu;
    SET_GPR_U32(ctx, 31, 0x1A7DE4u);
    ctx->pc = 0x1A7DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DDCu;
    // 0x1a7de0: 0x24a50a40  addiu       $a1, $a1, 0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7DDCu, 0x1A7DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DE4u;
label_1a7de4:
    // 0x1a7de4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1A7DE4u;
    {
        const bool branch_taken_0x1a7de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DE4u;
        // 0x1a7de8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7de4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7DECu;
label_1a7dec:
    // 0x1a7dec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7df0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7df4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7DF4u;
    SET_GPR_U32(ctx, 31, 0x1A7DFCu);
    ctx->pc = 0x1A7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DF4u;
    // 0x1a7df8: 0x24a50a58  addiu       $a1, $a1, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7DF4u, 0x1A7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DFCu;
label_1a7dfc:
    // 0x1a7dfc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1A7DFCu;
    {
        const bool branch_taken_0x1a7dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DFCu;
        // 0x1a7e00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dfc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7E04u;
label_1a7e04:
    // 0x1a7e04: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7e08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e0c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E14u);
    ctx->pc = 0x1A7E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E0Cu;
    // 0x1a7e10: 0x24a50a70  addiu       $a1, $a1, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7E0Cu, 0x1A7E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E14u;
label_1a7e14:
    // 0x1a7e14: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1A7E14u;
    {
        const bool branch_taken_0x1a7e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E14u;
        // 0x1a7e18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e14) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7E1Cu;
label_1a7e1c:
    // 0x1a7e1c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7e20: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e24: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7E24u;
    SET_GPR_U32(ctx, 31, 0x1A7E2Cu);
    ctx->pc = 0x1A7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E24u;
    // 0x1a7e28: 0x24a50a88  addiu       $a1, $a1, 0xA88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7E24u, 0x1A7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E2Cu;
label_1a7e2c:
    // 0x1a7e2c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1A7E2Cu;
    {
        const bool branch_taken_0x1a7e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E2Cu;
        // 0x1a7e30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e2c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7E34u;
label_1a7e34:
    // 0x1a7e34: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7e38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e3c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E44u);
    ctx->pc = 0x1A7E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E3Cu;
    // 0x1a7e40: 0x24a50a90  addiu       $a1, $a1, 0xA90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7E3Cu, 0x1A7E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E44u;
label_1a7e44:
    // 0x1a7e44: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1A7E44u;
    {
        const bool branch_taken_0x1a7e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E44u;
        // 0x1a7e48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e44) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7E4Cu;
label_1a7e4c:
    // 0x1a7e4c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7e50: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e54: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7E54u;
    SET_GPR_U32(ctx, 31, 0x1A7E5Cu);
    ctx->pc = 0x1A7E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E54u;
    // 0x1a7e58: 0x24a50aa0  addiu       $a1, $a1, 0xAA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7E54u, 0x1A7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E5Cu;
label_1a7e5c:
    // 0x1a7e5c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1A7E5Cu;
    {
        const bool branch_taken_0x1a7e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E5Cu;
        // 0x1a7e60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e5c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7E64u;
label_1a7e64:
    // 0x1a7e64: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7e68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e6c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E74u);
    ctx->pc = 0x1A7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E6Cu;
    // 0x1a7e70: 0x24a50ab0  addiu       $a1, $a1, 0xAB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7E6Cu, 0x1A7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E74u;
label_1a7e74:
    // 0x1a7e74: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1A7E74u;
    {
        const bool branch_taken_0x1a7e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E74u;
        // 0x1a7e78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e74) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7E7Cu;
label_1a7e7c:
    // 0x1a7e7c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7e80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e84: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7E84u;
    SET_GPR_U32(ctx, 31, 0x1A7E8Cu);
    ctx->pc = 0x1A7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E84u;
    // 0x1a7e88: 0x24a50ac0  addiu       $a1, $a1, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7E84u, 0x1A7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E8Cu;
label_1a7e8c:
    // 0x1a7e8c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A7E8Cu;
    {
        const bool branch_taken_0x1a7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E8Cu;
        // 0x1a7e90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e8c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7E94u;
label_1a7e94:
    // 0x1a7e94: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7e98: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e9c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7EA4u);
    ctx->pc = 0x1A7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E9Cu;
    // 0x1a7ea0: 0x24a50ac8  addiu       $a1, $a1, 0xAC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7E9Cu, 0x1A7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EA4u;
label_1a7ea4:
    // 0x1a7ea4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1A7EA4u;
    {
        const bool branch_taken_0x1a7ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EA4u;
        // 0x1a7ea8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ea4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7EACu;
label_1a7eac:
    // 0x1a7eac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7eb0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7eb4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7EB4u;
    SET_GPR_U32(ctx, 31, 0x1A7EBCu);
    ctx->pc = 0x1A7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EB4u;
    // 0x1a7eb8: 0x24a50ad8  addiu       $a1, $a1, 0xAD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7EB4u, 0x1A7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EBCu;
label_1a7ebc:
    // 0x1a7ebc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1A7EBCu;
    {
        const bool branch_taken_0x1a7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EBCu;
        // 0x1a7ec0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ebc) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7EC4u;
label_1a7ec4:
    // 0x1a7ec4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7ec8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ecc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7ECCu;
    SET_GPR_U32(ctx, 31, 0x1A7ED4u);
    ctx->pc = 0x1A7ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7ECCu;
    // 0x1a7ed0: 0x24a50ae8  addiu       $a1, $a1, 0xAE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7ECCu, 0x1A7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7ED4u;
label_1a7ed4:
    // 0x1a7ed4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1A7ED4u;
    {
        const bool branch_taken_0x1a7ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7ED4u;
        // 0x1a7ed8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ed4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7EDCu;
label_1a7edc:
    // 0x1a7edc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7ee0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ee4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7EE4u;
    SET_GPR_U32(ctx, 31, 0x1A7EECu);
    ctx->pc = 0x1A7EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EE4u;
    // 0x1a7ee8: 0x24a50af8  addiu       $a1, $a1, 0xAF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7EE4u, 0x1A7EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EECu;
label_1a7eec:
    // 0x1a7eec: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A7EECu;
    {
        const bool branch_taken_0x1a7eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EECu;
        // 0x1a7ef0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7eec) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7EF4u;
label_1a7ef4:
    // 0x1a7ef4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7ef8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7efc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7EFCu;
    SET_GPR_U32(ctx, 31, 0x1A7F04u);
    ctx->pc = 0x1A7F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EFCu;
    // 0x1a7f00: 0x24a50b08  addiu       $a1, $a1, 0xB08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7EFCu, 0x1A7F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F04u;
label_1a7f04:
    // 0x1a7f04: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A7F04u;
    {
        const bool branch_taken_0x1a7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F04u;
        // 0x1a7f08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f04) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7F0Cu;
label_1a7f0c:
    // 0x1a7f0c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7f10: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f14: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7F14u;
    SET_GPR_U32(ctx, 31, 0x1A7F1Cu);
    ctx->pc = 0x1A7F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F14u;
    // 0x1a7f18: 0x24a50b18  addiu       $a1, $a1, 0xB18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7F14u, 0x1A7F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F1Cu;
label_1a7f1c:
    // 0x1a7f1c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1A7F1Cu;
    {
        const bool branch_taken_0x1a7f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F1Cu;
        // 0x1a7f20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f1c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7F24u;
label_1a7f24:
    // 0x1a7f24: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7f28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f2c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F34u);
    ctx->pc = 0x1A7F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F2Cu;
    // 0x1a7f30: 0x24a50b28  addiu       $a1, $a1, 0xB28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7F2Cu, 0x1A7F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F34u;
label_1a7f34:
    // 0x1a7f34: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A7F34u;
    {
        const bool branch_taken_0x1a7f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F34u;
        // 0x1a7f38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f34) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7F3Cu;
label_1a7f3c:
    // 0x1a7f3c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7f40: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f44: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7F44u;
    SET_GPR_U32(ctx, 31, 0x1A7F4Cu);
    ctx->pc = 0x1A7F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F44u;
    // 0x1a7f48: 0x24a50b40  addiu       $a1, $a1, 0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7F44u, 0x1A7F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F4Cu;
label_1a7f4c:
    // 0x1a7f4c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A7F4Cu;
    {
        const bool branch_taken_0x1a7f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F4Cu;
        // 0x1a7f50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f4c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7F54u;
label_1a7f54:
    // 0x1a7f54: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7f58: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f5c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F64u);
    ctx->pc = 0x1A7F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F5Cu;
    // 0x1a7f60: 0x24a50b58  addiu       $a1, $a1, 0xB58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7F5Cu, 0x1A7F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F64u;
label_1a7f64:
    // 0x1a7f64: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A7F64u;
    {
        const bool branch_taken_0x1a7f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F64u;
        // 0x1a7f68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f64) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7F6Cu;
label_1a7f6c:
    // 0x1a7f6c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7f70: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f74: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7F74u;
    SET_GPR_U32(ctx, 31, 0x1A7F7Cu);
    ctx->pc = 0x1A7F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F74u;
    // 0x1a7f78: 0x24a50b68  addiu       $a1, $a1, 0xB68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7F74u, 0x1A7F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F7Cu;
label_1a7f7c:
    // 0x1a7f7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A7F7Cu;
    {
        const bool branch_taken_0x1a7f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F7Cu;
        // 0x1a7f80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f7c) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7F84u;
label_1a7f84:
    // 0x1a7f84: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7f88: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f8c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7F8Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F94u);
    ctx->pc = 0x1A7F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F8Cu;
    // 0x1a7f90: 0x24a50b78  addiu       $a1, $a1, 0xB78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7F8Cu, 0x1A7F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F94u;
label_1a7f94:
    // 0x1a7f94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A7F94u;
    {
        const bool branch_taken_0x1a7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F94u;
        // 0x1a7f98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f94) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7F9Cu;
label_1a7f9c:
    // 0x1a7f9c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7fa0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fa4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7FA4u;
    SET_GPR_U32(ctx, 31, 0x1A7FACu);
    ctx->pc = 0x1A7FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FA4u;
    // 0x1a7fa8: 0x24a50b90  addiu       $a1, $a1, 0xB90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7FA4u, 0x1A7FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FACu;
label_1a7fac:
    // 0x1a7fac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A7FACu;
    {
        const bool branch_taken_0x1a7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FACu;
        // 0x1a7fb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fac) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7FB4u;
label_1a7fb4:
    // 0x1a7fb4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7fb8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fbc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7FBCu;
    SET_GPR_U32(ctx, 31, 0x1A7FC4u);
    ctx->pc = 0x1A7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FBCu;
    // 0x1a7fc0: 0x24a50ba0  addiu       $a1, $a1, 0xBA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7FBCu, 0x1A7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FC4u;
label_1a7fc4:
    // 0x1a7fc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7FC4u;
    {
        const bool branch_taken_0x1a7fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FC4u;
        // 0x1a7fc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fc4) {
            ctx->pc = 0x1A7FE0u;
            goto label_1a7fe0;
        }
    }
    ctx->pc = 0x1A7FCCu;
label_1a7fcc:
    // 0x1a7fcc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7fd0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a7fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fd4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A7FD4u;
    SET_GPR_U32(ctx, 31, 0x1A7FDCu);
    ctx->pc = 0x1A7FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FD4u;
    // 0x1a7fd8: 0x24a50bc0  addiu       $a1, $a1, 0xBC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A7FD4u, 0x1A7FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FDCu;
label_1a7fdc:
    // 0x1a7fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7fe0:
    // 0x1a7fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FE0u;
        // 0x1a7fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7FE8u;
}
